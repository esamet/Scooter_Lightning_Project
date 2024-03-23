#include <Arduino.h>
#include <config.h>
#include <header_file.hpp>
#include <light_mods.hpp>

// put function declarations here:




void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(headlights_button_pin,INPUT_PULLUP);
  pinMode(brake_pedal_pin,INPUT_PULLUP);
  pinMode(left_signal_button_pin,INPUT_PULLUP);
  pinMode(right_signal_button_pin,INPUT_PULLUP);
  pinMode(front_bottom_led_pin,OUTPUT);
  pinMode(brake_light_pin,OUTPUT);
  pinMode(left_signal_led_pin,OUTPUT);
  pinMode(right_signal_led_pin,OUTPUT);
  pinMode(stop_led_pin,OUTPUT);
  pinMode(headlight_led_pin,OUTPUT);

}

void mode_select(){
  switch(press_count){
    case 0:
/*       Serial.println("Kapalı Mod");
 */      break;
    case 1:
/*       Serial.println("Classic Mod");
 */      classic();
      break;
    case 2:
/*       Serial.println("Classic Sport mod");
 */      classicSport();
      break;
    case 3:
/*       Serial.println("daylight mod");
 */      daylight();
      break;
    case 4:
/*       Serial.println("nighty mod");
 */      nighty();
      break;
    case 5:
/*       Serial.println("nighty bottom mod");
 */      nighty_bottom();
      break;
    case 6:
/*       Serial.println("highway mod");
 */      highway();
      break;
  }
}

void loop() {

  current_time= millis();
  press_count= how_many_pressed(headlights_button_pin,current_time)%7;
  mode_select();
  if(digitalRead(brake_pedal_pin)) brake_function();
  if(prev_brake_pedal>digitalRead(brake_pedal_pin)) brake_clear_function();

  if(!digitalRead(left_signal_button_pin)) left_signal_function();
  if(prev_left_signal_button>!digitalRead(left_signal_button_pin)) left_signal_clear_function();
  
  if(!digitalRead(right_signal_button_pin)) right_signal_function();
  if(prev_right_signal_button>!digitalRead(right_signal_button_pin)) right_signal_clear_function();

  if(current_time-prev_last_fast_beam>fast_beam_interval){
    (fast_beam) ? fast_beam=LOW : fast_beam=HIGH;
    prev_last_fast_beam= current_time;
  }

  if(current_time-prev_last_mid_beam>mid_beam_interval){
    (mid_beam) ? mid_beam=LOW : mid_beam=HIGH;
    prev_last_mid_beam= current_time;
  }

  if(current_time-prev_last_slow_beam>slow_beam_interval){
    (slow_beam) ? slow_beam=LOW : slow_beam=HIGH;
    prev_last_slow_beam= current_time;
  }

  if(plane_beam && current_time-prev_last_plane_beam>fast_beam_interval){
    plane_beam = false;
    prev_last_plane_beam= current_time;
  }
  if(!plane_beam && current_time-prev_last_plane_beam>plane_beam_interval){
    plane_beam = true;
    prev_last_plane_beam= current_time;
  }
  prev_brake_pedal = digitalRead(brake_pedal_pin);
  prev_left_signal_button = !digitalRead(left_signal_button_pin);
  prev_right_signal_button = !digitalRead(right_signal_button_pin);

  delay(50);
  //Serial.printf("headlight: %d, brake: %d, left signal: %d, right signal: %d \n", !digitalRead(headlights_button_pin),!digitalRead(brake_pedal_pin),!digitalRead(left_signal_button_pin),!digitalRead(right_signal_button_pin));
  Serial.print(!digitalRead(headlights_button_pin));
  Serial.print(", ");
  Serial.print(digitalRead(brake_pedal_pin));
  Serial.print(", ");
  Serial.print(!digitalRead(left_signal_button_pin));
  Serial.print(", ");
  Serial.println(!digitalRead(right_signal_button_pin));

}
 



