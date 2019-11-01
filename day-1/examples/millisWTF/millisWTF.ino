// constants won't change. Used here to set a pin number:
const int ledPin = 13;
const int interval = 1000;
 
// Variables will change:
int ledState = LOW; // ledState used to set the LED
unsigned long lastTime = 0; // will store last time LED was updated
 
void setup() {
  pinMode(ledPin, OUTPUT); // initialize the digital pin as an output
}
 
void loop() {
  unsigned long currentTime = millis();
  if (currentTime - lastTime >= interval) {
    lastTime = currentTime; // save the last time you blinked the LED
    
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
 
    digitalWrite(ledPin, ledState); // set the LED with the ledState of the variable
  }
}
