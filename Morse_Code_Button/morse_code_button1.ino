int buttonSwitched;
int buttonPin = 4;
int led = 13; //variable for LED pin
int unit = 200; //variable for delay of 1 unit in milliseconds

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  buttonSwitched = digitalRead(buttonPin);
  
  if (buttonSwitched == HIGH){
  //Input your main code here, to run repeatedly:
  //Morse Code, Letter "S"
  //Three dots
  //dot 1
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot 2
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot 3
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit*3);
  //Morse Code, Letter "O"
  //Three dashes
  	//dash 1
    digitalWrite(led, HIGH);
    delay(unit*3);
    digitalWrite(led, LOW);
    delay(unit);
    //dash 2
    digitalWrite(led, HIGH);
    delay(unit*3);
    digitalWrite(led, LOW);
    delay(unit);
    //dash 3
    digitalWrite(led, HIGH);
    delay(unit*3);
    digitalWrite(led, LOW);
    delay(unit*3);
  //Morse Code, Letter "S"
  //Trhee dots
  	//dot 1
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot 2
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot 3
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit*7);
    
  }else{
    digitalWrite(led, LOW);
  }
}
