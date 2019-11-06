/*
 * programmer: me
 * program: blink
 * 
 * make led blink
 */

\\ iniyialize led to pin 13
int led = 13;

void setup() {
  // using function pinMode call led provide output
  pinMode(led, OUTPUT);
}

void loop() {
  // function digitalWrite tells led to turn on, wait 1 second, turn led off, wait 1 second, repeat
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
