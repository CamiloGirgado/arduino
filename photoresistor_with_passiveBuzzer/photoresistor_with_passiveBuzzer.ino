int lightPin = A0;
int buzzPin = 8;
int lightVal;
int delayTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  delayTime = (9./550.)*lightVal-(9.*200./500.)+1.;
  Serial.println(delayTime);
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(delayTime);

}
