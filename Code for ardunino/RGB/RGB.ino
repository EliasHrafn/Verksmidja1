int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  // turn the LED on
  analogWrite(10, HIGH);
  // pause the program for <sensorValue> millseconds
  delay(sensorValue); // Wait for sensorValue millisecond(s)
  // turn the LED off
  analogWrite(10, LOW);
  // pause the program for <sensorValue> millseconds
   // Wait for sensorValue millisecond(s)
}
