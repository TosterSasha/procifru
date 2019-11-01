// the setup function runs only once when you press reset
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

// the loop function runs over and over and over again. forever actually
void loop() {
    Serial.println("Hello, World!"); // Prints data to the serial port followed by a carriage return character ('\r') and a newline character ('\n')
    delay(1500); // wait for 1.5 second
}
