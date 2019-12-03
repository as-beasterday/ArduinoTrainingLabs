/*
 * programmer: me
 * program: potentiometer
 * 
 * AnalogReadSerial
 * reads analog input on pin A0, prints to serial monitor
 */




void setup() {
  // initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read input of analog pin 0
  int potentiometerValue = analogRead(A0);


  // print value of potentiometer
  Serial.println(potentiometerValue);

  // add delay for stability
  delay(1);
  
}
