#include <Adafruit_CircuitPlayground.h>

// this sketch will set all the pixels to white! 

void setup() {
  CircuitPlayground.begin();

}

void loop() {
  CircuitPlayground.clearPixels(); // this turns the LEDs off

  delay(500); // how long should the LEDs be off for?

  // for all of the pixels on our board (remember we're starting at 0!)
  for (int i = 0; i < 10; i++){

  // CircuitPlayground.setPixelColor(LED#, red, green, blue)
  CircuitPlayground.setPixelColor(i, 255,   255,   255);
  }
  
    delay(5000); // how long should the LEDs be on for?
}
