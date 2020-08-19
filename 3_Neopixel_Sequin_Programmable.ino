// To use this sketch, install the adafruit neopixel library 

#include <Adafruit_NeoPixel.h>

#define PIN        10 // labeled A3 on Circuit Playground

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 1 // change this to the number of neopixels you're using

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. 
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
  pixels.clear(); // Set all pixel colors to 'off'

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));

    pixels.show();   // THIS DISPLAYS THE COLOR (required) 

    delay(DELAYVAL); // Pause before next pass through loop
  }
}
