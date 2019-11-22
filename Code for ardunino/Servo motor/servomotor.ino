#include <Servo.h>

Servo myServo;

int const potPin = A0;   //analog pin A
int potVal;       //stores value of pot
int angle = 0;        //stores position of servo

void setup() {
  myServo.attach(9);  //tells board which pin the servo is on
  Serial.begin(9600); 
}

// the loop routine runs over and over again forever:
void loop() {
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  
  angle = map(potVal, 0, 1023, 0, 179); //angle is the pot value re-scaled to 0-179 degrees
  Serial.print("angle: ");
  Serial.println(angle);
  myServo.write(angle);
  delay(15);
}
