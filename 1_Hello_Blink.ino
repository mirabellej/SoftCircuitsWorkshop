#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  // sends full current to the red LED 
  CircuitPlayground.redLED(HIGH);
  delay(500); // wait for half a second
  
  // cuts current to the red LED 
  CircuitPlayground.redLED(LOW);
  delay(500);
}
