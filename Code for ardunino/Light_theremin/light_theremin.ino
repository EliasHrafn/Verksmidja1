//header
int sensorValue; 
int sensorLow = 1023; 
int sensorHigh = 0;
//setup
const int ledPin = 13;
  void setup(){ 
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, HIGH);
  Serial.begin(9600);
      while(millis() < 5000) {
            sensorValue = analogRead(A0); 
    if (sensorValue > sensorHigh){  
      sensorHigh = sensorValue; 
    } //end if() 
    if (sensorValue < sensorLow) {  
      sensorLow = sensorValue; 
    } //end of if() statement 
  } //end while() loop
//loop        
  digitalWrite(ledPin, LOW); //turn LED off 
} //end setup()
  void loop() { 
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);
        tone(8, pitch, 20);
      Serial.print("pitch: "); 
  Serial.println(pitch); 
  delay(10); 
} //end loop()
