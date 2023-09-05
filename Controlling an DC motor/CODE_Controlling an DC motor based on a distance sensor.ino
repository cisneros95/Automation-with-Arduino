float duration,distance;
void setup() 
{
  pinMode(13,OUTPUT);      // Configure trigger pin as output and echo pin as input
  pinMode(12,INPUT); 
  pinMode(6,OUTPUT);       // Configure motor driver pins as output
  pinMode(5,OUTPUT);  
  Serial.begin(9600);      // Initialize Serial Communication UART 
}  
void loop()
{
  digitalWrite(13, LOW);             //Trigger the Trigpin with high to low pulse 
  delayMicroseconds(2);
  digitalWrite(13, HIGH);
  delayMicroseconds(10);
  digitalWrite(13, LOW);
  duration = pulseIn(12, HIGH);      // Wait till the echo pin becomes LOW again. If it is low then pulseIn will return the time taken
  distance = (duration/2) / 29.1;    // The distance in centimeter is calculated 
  distance = distance*0.3937;        // Convert to inches  
  Serial.print("Distance in inches = "); 
  Serial.println(distance);          // Print distance in serial monitor
  if(distance<5.0)      // If distance is less than 5 inches 
  {
  digitalWrite(5,LOW);  // Motor off
  digitalWrite(6,LOW); 
  }
  else                  // Else
  { 
  digitalWrite(5,HIGH);   // Motor on with maximum speed 
  digitalWrite(6,LOW);  
  }
  
}