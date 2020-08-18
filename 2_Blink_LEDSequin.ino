#include <Adafruit_CircuitPlayground.h>

int led = 3; // connect led sequin to pin 3 / SCL / A4 on Circuit Playground Express

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  CircuitPlayground.begin();

  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
}
