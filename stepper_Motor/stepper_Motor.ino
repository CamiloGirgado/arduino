#include <Stepper.h>

int stepsPerRevolution = 2048; //Spec for this motor
int motSpeed = 10; //RPM
int dt = 500; //milliseceonds
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);


void setup(){
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(dt);
  myStepper.step(-stepsPerRevolution);
  delay(dt);
}