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
  digitalWrite(buzzer_pin,plane_beam);
  }

void right_signal_function(){
  digitalWrite(front_bottom_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,LOW);
  digitalWrite(right_signal_led_pin,slow_beam);
  digitalWrite(buzzer_pin,plane_beam);

}

void signal_clear_function(){
  digitalWrite(front_bottom_led_pin,LOW);
  digitalWrite(left_signal_led_pin,LOW);
  digitalWrite(right_signal_led_pin,LOW);
  digitalWrite(buzzer_pin,LOW);
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
  digitalWrite(stop_led_pin,HIGH);
  digitalWrite(left_signal_led_pin,slow_beam);
  digitalWrite(right_signal_led_pin,slow_beam);
  digitalWrite(brake_light_pin,slow_beam);
}

void beep(){
  prev_buzzer = current_time;
  while(current_time - prev_buzzer < buzzer_mode_interval){
    digitalWrite(buzzer_pin, HIGH);  
    current_time = millis();
  }
  digitalWrite(buzzer_pin, LOW); //Buzzer off
}