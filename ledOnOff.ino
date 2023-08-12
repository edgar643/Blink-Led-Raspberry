void setup() {
 
    pinMode(0, OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
}

void loop() {
  int xDelay = 100;
    digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(1,HIGH); 
    digitalWrite(2,HIGH);  
    digitalWrite(3,HIGH); 
    delay(xDelay);             // wait for a time
    digitalWrite(0, LOW);   
    digitalWrite(1,HIGH); 
    digitalWrite(2,HIGH);  
    digitalWrite(3,HIGH);  
   delay(xDelay);              // wait for a time
    digitalWrite(0, LOW);
    digitalWrite(1,LOW); 
    digitalWrite(2,HIGH);  
    digitalWrite(3,HIGH);  
   delay(xDelay);            // wait for a time
    digitalWrite(0, LOW);
    digitalWrite(1,LOW); 
    digitalWrite(2,LOW);  
    digitalWrite(3,HIGH);  
delay(xDelay);   
    digitalWrite(0, LOW);
    digitalWrite(1,LOW); 
    digitalWrite(2,LOW);  
    digitalWrite(3,LOW);  
    delay(xDelay);   
     digitalWrite(0,HIGH);
    digitalWrite(1,LOW); 
    digitalWrite(2,LOW);  
    digitalWrite(3,LOW);  
   delay(xDelay); 
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH); 
    digitalWrite(2,LOW);  
    digitalWrite(3,LOW);  
 delay(xDelay);  
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH); 
    digitalWrite(2,HIGH);  
    digitalWrite(3,LOW);  
  delay(xDelay);  
digitalWrite(0,HIGH);
    digitalWrite(1,HIGH); 
    digitalWrite(2,HIGH);  
    digitalWrite(3,LOW);  
delay(xDelay);  



}