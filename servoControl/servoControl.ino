#include <Servo.h>

int lightVal;
int lightPin = A0;
int servoPin = 9;
int servoPos = 165;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  myServo.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println("What is your servo position? ");
  while (Serial.available()==0){

  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
  Serial.println(servoPos);
  

}
