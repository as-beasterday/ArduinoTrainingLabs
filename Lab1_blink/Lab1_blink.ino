/*
 * programmer: me
 * program: led + potentiometer
 * 
 * Read analog port and turn on led at determined threshold
 * 
 */

const int analogPin = A0;
const int ledPin = 13;
float threshold = 0.125;


void setup() {
  pinMode(ledPin, OUTPUT);
  // initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read input of analog pin 0
  int potentiometerValue = analogRead(analogPin);
  
  float voltage = potentiometerValue * (5.0 / 1023.0);
  
  // print value of potentiometer
  Serial.println(voltage);

  if (voltage >= threshold){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  // add delay for stability
  delay(1);
  
}
