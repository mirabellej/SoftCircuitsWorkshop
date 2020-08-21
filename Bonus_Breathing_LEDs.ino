// this sketch creates a breathing pattern for white LEDs
#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 10 

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806, define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 8

// Define the array of leds
CRGB leds[NUM_LEDS];

int brightness = 0; 

void setup()
{
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);

  // apply and show initial brightness
  fill_solid(leds, NUM_LEDS, CHSV(255, 10, brightness));
  FastLED.show();

  brightness++;
}

void loop()
{
  static int8_t fadeStep = 1;

  EVERY_N_MILLISECONDS(10)
  {
    // if the last time brightness was 255 or 0, change the direction from increase to descrease or vice versa
    if (brightness == 255 or brightness == 0)
    {
      fadeStep *= -1;
    }
    brightness += fadeStep;

    fill_solid(leds, NUM_LEDS, CHSV(255, 10, brightness));
    FastLED.show();
  }


}
