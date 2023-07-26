void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(2,OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(2,LOW);   
    delay(750);                        // wait for a time
    digitalWrite(LED_BUILTIN, LOW); 
    digitalWrite(2,HIGH);             // turn the LED off by making the voltage LOW
    delay(750);                        // wait for a time
}