int buttonPin1 = 12;
int buttonPin2 = 11;
int LEDPin = 3;
int buttonVal1;
int buttonVal2;
int LEDBright = 0;
int delayTime = 500;
int buzzPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("Button 2 = ");
  Serial.println(buttonVal2);
  delay(delayTime);
  if (buttonVal1 == 0){
    LEDBright = LEDBright + 25;
  }
  if (buttonVal2 == 0){
    LEDBright = LEDBright - 25;
  }
  Serial.println(LEDBright);
  if (LEDBright > 255){
    LEDBright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(delayTime);
    digitalWrite(buzzPin, LOW);

  } 
  if (LEDBright < 0){
    LEDBright = 0;
    digitalWrite(buzzPin, LOW);
    Serial.print("Buzz Low");
  } 

  analogWrite(LEDPin, LEDBright);

}
