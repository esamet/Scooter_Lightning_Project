void clear_mod();

bool faded_bottom_light;
int press_count;
bool fast_beam;
bool mid_beam;
bool slow_beam;
bool plane_beam;
bool prev_brake_pedal;
bool prev_left_signal_button;
bool prev_right_signal_button;
unsigned long int current_time;
unsigned long int prev_last_fast_beam;
unsigned long int prev_last_mid_beam;
unsigned long int prev_last_slow_beam;
unsigned long int prev_last_plane_beam;
unsigned long int prev_buzzer;

#define buzzer_pin 14
#define headlights_button_pin 13
#define left_signal_button_pin 11
#define right_signal_button_pin 12
#define brake_pedal_pin 10

#define front_bottom_led_pin 6 
#define stop_led_pin 7 
#define brake_light_pin 8 
#define left_signal_led_pin 9
#define right_signal_led_pin 4
#define headlight_led_pin 5

unsigned long int buzzer_mode_interval = 10;
unsigned long int fast_beam_interval = 200;
unsigned long int mid_beam_interval = 100;
unsigned long int slow_beam_interval = 400;
unsigned long int plane_beam_interval = 700;



