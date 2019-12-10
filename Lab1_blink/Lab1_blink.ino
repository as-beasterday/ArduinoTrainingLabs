/*
 * programmer: me
 * program: potentiometer
 * 
 * AnalogReadSerial
 * reads analog input on pin A0, prints to serial monitor
 * 
 * add serial read to be able to read voltages from 0 to 5 volts
 */




void setup() {
  // initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read input of analog pin 0
  int potentiometerValue = analogRead(A0);

  float voltage = potentiometerValue * (5.0 / 1023.0);
  
  // print value of potentiometer
  Serial.println(voltage);

  // add delay for stability
  delay(1);
  
}
