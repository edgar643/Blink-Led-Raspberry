void setup() {
    pinMode(0, OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
}

void loop() {
    digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(1,LOW); 
    digitalWrite(2,LOW);   
    delay(750);             // wait for a time
    digitalWrite(0, LOW);   
    digitalWrite(1,HIGH); 
    digitalWrite(2,LOW);   
    delay(750);            // wait for a time
    digitalWrite(0, LOW);
    digitalWrite(1,LOW); 
    digitalWrite(2,HIGH);   
    delay(750);            // wait for a time
}