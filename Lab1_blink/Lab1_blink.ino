/*
 * programmer: me
 * program: blink
 * 
 * make led blink
 */

int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  // using function pinMode call led provide output
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
