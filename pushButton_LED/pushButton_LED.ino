int LEDPin = 8;
int buttonPin = 12;
int buttonRead;
int delayTime = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);
  pinMode(LEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(delayTime);
  if(buttonRead == 1){
    digitalWrite(LEDPin, LOW);
  }
  if(buttonRead == 0){
    digitalWrite(LEDPin, HIGH);
  }


}
