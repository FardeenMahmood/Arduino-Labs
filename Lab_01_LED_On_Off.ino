void setup() {
  // Setup code 
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // LED turns on and off repeatedly 

  digitalWrite(LED_BUILTIN, HIGH); // Turns LED on 
  delay(1000); // 1 second delay
  digitalWrite(LED_BUILTIN, LOW); // Turns LED off 
  delay(1000); // 1 second delay
}
