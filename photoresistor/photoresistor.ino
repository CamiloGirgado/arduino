int lightPin = A0;
int lightVal;
int dv = 250;
int redPin = 8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);
  if (lightVal >275){
    digitalWrite(redPin, LOW);
  }
  else
    digitalWrite(redPin, HIGH);

}
