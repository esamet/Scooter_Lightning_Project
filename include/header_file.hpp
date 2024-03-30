#include "light_mods.hpp"
bool button_state;
bool prev_button_state = false;
unsigned long int prev_last_pressed = 0;
unsigned long int time_threshold = 200;
int press_counter = 0;

int how_many_pressed(int buttonPin, unsigned long int current_time){
  button_state=digitalRead(buttonPin);
  if(button_state>prev_button_state && current_time-prev_last_pressed>time_threshold){
    press_counter++;
    beep();
    clear_mod();
    prev_last_pressed=current_time;
  }
    prev_button_state=button_state;
    return press_counter;

}