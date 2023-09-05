#include <Servo.h>

Servo myservo;

int servo = 10;
int light = A5;

void setup(){
  
  pinMode(A5, INPUT);
  Serial.begin(9600);
  myservo.attach(10);
  
}

void loop(){
  light = analogRead(A5);
  Serial.println(light);
  
  light = map(light, 0, 500, 0, 90);
  servo = constrain(light, 0, 90);
  
  myservo.write(servo);
  delay(100);
  
}

