int led = 11;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 1;    // how many points to fade the LED by
int i=0;
//The bulb represents a flickering light in the wind, it accelerates and grows bigger and then as easily fades away quickly
// the setup routine runs once when you press reset:
void setup() {
  // declare pin 11 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 11:
  analogWrite(led, brightness);
  i=i+1;
  // change the brightness for next time through the loop:
  brightness = brightness + i*fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
