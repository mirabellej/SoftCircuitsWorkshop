#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.clearPixels(); // this turns the LEDs off

  delay(500); // how long should the LEDs be off for?
  
// CircuitPlayground.setPixelColor(LED#, red, green, blue)
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1,   0,   255,  0);
  CircuitPlayground.setPixelColor(2,   0,   0,   255);
  CircuitPlayground.setPixelColor(3,   255, 255, 255);
  CircuitPlayground.setPixelColor(4,   0,   0,  0);
  
  // this sets the color as a hexidecimal color
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
 
  delay(5000); // how long should the LEDs be on for?
}
