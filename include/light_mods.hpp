void clear_mod(){
digitalWrite(front_bottom_led_pin,LOW);
digitalWrite(headlight_led_pin,LOW);
digitalWrite(front_bottom_led_pin,LOW);
digitalWrite(brake_light_pin,LOW);
digitalWrite(stop_led_pin,LOW);
digitalWrite(left_signal_led_pin,LOW);
digitalWrite(right_signal_led_pin,LOW);

}

void brake_function(){
  digitalWrite(stop_led_pin,mid_beam);
  digitalWrite(brake_light_pin,HIGH);
}

void brake_clear_function(){
  digitalWrite(stop_led_pin,LOW);
  digitalWrite(brake_light_pin,LOW);
}

void left_signal_function(){
  digitalWrite(front_bottom_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,slow_beam);
  digitalWrite(right_signal_led_pin,LOW);
}

void left_signal_clear_function(){
  digitalWrite(front_bottom_led_pin,LOW);
  digitalWrite(left_signal_led_pin,LOW);
  digitalWrite(right_signal_led_pin,LOW);
}

void right_signal_function(){
  digitalWrite(front_bottom_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,LOW);
  digitalWrite(right_signal_led_pin,slow_beam);
}

void right_signal_clear_function(){
  digitalWrite(front_bottom_led_pin,LOW);
  digitalWrite(left_signal_led_pin,LOW);
  digitalWrite(right_signal_led_pin,LOW);
}

void classic(){
  digitalWrite(headlight_led_pin,HIGH);
  digitalWrite(front_bottom_led_pin,HIGH);
  digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,LOW);
  digitalWrite(right_signal_led_pin,LOW);
  digitalWrite(brake_light_pin,LOW);
}

void classicSport(){
  digitalWrite(headlight_led_pin,HIGH);
  digitalWrite(front_bottom_led_pin,HIGH);
  digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,plane_beam);
  digitalWrite(right_signal_led_pin,plane_beam);
  digitalWrite(brake_light_pin,LOW);
}

void daylight(){
  digitalWrite(headlight_led_pin,LOW);
  digitalWrite(front_bottom_led_pin,LOW);
  digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,plane_beam);
  digitalWrite(right_signal_led_pin,plane_beam);
  digitalWrite(brake_light_pin,plane_beam);
}

void nighty(){
  digitalWrite(headlight_led_pin,HIGH);
  digitalWrite(front_bottom_led_pin,LOW);
  digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,plane_beam);
  digitalWrite(right_signal_led_pin,plane_beam);
  digitalWrite(brake_light_pin,LOW);
}

void nighty_bottom(){
  digitalWrite(headlight_led_pin,HIGH);
  digitalWrite(front_bottom_led_pin,HIGH);
  digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,plane_beam);
  digitalWrite(right_signal_led_pin,plane_beam);
  digitalWrite(brake_light_pin,LOW);
}

void highway(){
  digitalWrite(headlight_led_pin,HIGH);
  digitalWrite(front_bottom_led_pin,HIGH);
  if(digitalRead(brake_pedal_pin)) digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,slow_beam);
  digitalWrite(right_signal_led_pin,slow_beam);
  if(digitalRead(brake_pedal_pin)) digitalWrite(brake_light_pin,plane_beam);
}

