#include <Servo.h>

int lightVal;
int lightPin = A0;
int servoPin = 9;
int angle;
int dt = 250;
Servo myServo;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(servoPin, OUTPUT);
  myServo.attach(servoPin);


}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);
  angle = -85/100.*lightVal + 85.*245./100.;
  Serial.println(angle);
  myServo.write(angle);

}
