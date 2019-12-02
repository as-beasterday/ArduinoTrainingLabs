/*
 * programmer: me
 * program: blink
 * 
 * make led blink
 * 
 * Merge digital read
 * programmer: me
 * program: digital read
 */

// iniyialize led to pin 13
int led = 13;
int pushButton = 2;

void setup() {
  // using function pinMode call led provide output
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
  
  pinMode(pushButton, INPUT);
}

void loop() {
  // function digitalWrite tells led to turn on, wait 1 second, turn led off, wait 1 second, repeat
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
  
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  delay(250);
}
