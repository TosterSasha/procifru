int ledPin = 13;


// the setup function runs only once when you press reset
void setup() {
  pinMode(ledPin, OUTPUT); // initialize the digital pin as an output
}

// the loop function runs over and over and over again. forever actually
void loop() {
  digitalWrite(ledPin, HIGH); // turn the LED on (HIGH equals 1)
  delay(1000); // wait for a second
  digitalWrite(ledPin, LOW); // turn the LED off (LOW equals 0)
  delay(1000); // wait for a second
}
