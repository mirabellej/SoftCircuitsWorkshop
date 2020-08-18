# SoftCircuitsWorkshop

<h1>To Download</h1>
Go to CODE (green button) > Download as .Zip 
After the download, unzip the files. 
Double click each file to open in Arduino!

This repo contains all software for the Summer 2020 Soft Circuits Summer School at Catch: https://www.catch.dk/softcircuits/
Many sketches are adapted from the Adafruit Circuit Playground library

<h2>Troubleshooting</h2>
I'm getting a "Can't Find Port" error: try pressing the "reset" button on the Circuit Playground twice! 

<h2>Circuit Playground Functions Cheat Sheet</h2>

LEDS
CircuitPlayground.setPixelColor(0, 0,   0,   0); // (which pixel?, red, green, blue)
CircuitPlayground.clearPixels(); // turns all neopixels off by clearing the data!

SPEAKER
CircuitPlayground.playTone(2000, 1000); // (tone in hz, duration)

PRINT STATEMENT
Serial.println("This statement will print to the serial monitor");
