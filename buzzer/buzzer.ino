int myNum;
int buzzPin = 8;
String msg = "Please input your number";
int dt=2000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){

  }
  myNum = Serial.parseInt();
  if (myNum>10) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
}
