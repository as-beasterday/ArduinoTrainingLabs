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
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  if (buttonState==HIGH){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  delay(100);
}
