int redPin = 8;
int greenPin = 9;
int bluePin = 10;

String myColor;
String msg = "What color would you like?";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){

  }
  myColor = Serial.readString();

  if (myColor== "red" || myColor == "Red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }

    if (myColor== "green" || myColor == "Green"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }

    if (myColor== "blue" || myColor == "Blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }

    if (myColor== "aqua" || myColor == "Aqua"){
    digitalWrite(redPin,LOW);
    analogWrite(greenPin,255);
    analogWrite(bluePin,80);
  }

    if (myColor== "cyan" || myColor == "Cyan"){
    digitalWrite(redPin,LOW);
    analogWrite(greenPin,255);
    analogWrite(bluePin,80);
  }

    if (myColor== "fusia" || myColor == "Fusia"){
    digitalWrite(redPin,LOW);
    analogWrite(greenPin,255);
    analogWrite(bluePin,80);
  }

    if (myColor== "off" || myColor == "Off"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }

}


