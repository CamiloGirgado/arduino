int XPin = A0;
int YPin = A1;
int switchPin = 2;
int XSpin = 9;
int YSpin = 10;
int buzzPin = 7;
int WVx;
int WVy;
int Xval;
int Yval;
int Sval;
int dt = 250;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(XPin, INPUT);
  pinMode(YPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
  pinMode(XSpin, OUTPUT);
  pinMode(YSpin, OUTPUT);
  pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(XPin);
  Yval = analogRead(YPin);
  Sval = digitalRead(switchPin);
  delay(dt);
  Serial.print("X value = ");
  Serial.print(Xval);
  Serial.print(" Y value = ");
  Serial.print(Yval);
  Serial.print(" Switch value = ");
  Serial.println( Sval);
  
}
