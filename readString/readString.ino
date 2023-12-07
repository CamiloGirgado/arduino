int redPin = 10;
int greenPin = 11;
int bluePin = 12;

String myColor;
String msg = "What color LED?"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

} 

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){

  }
  myColor = Serial.readString();
  if (myColor == "red") {
    digital.write(redPin, HIGH);
  }
  Serial.print(msg2);
  Serial.print(myName);
  Serial.println(msg3);
}


