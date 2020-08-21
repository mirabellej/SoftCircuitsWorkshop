# SoftCircuitsWorkshop
<h1>About</h1>
Here you will find all the software (Arduino sketches) for the Summer 2020 Soft Circuits Summer School at Catch: https://www.catch.dk/softcircuits/
Many sketches are adapted from the Adafruit Circuit Playground library

<h2>To Download</h2>
Go to CODE (green button) > Download as .Zip 
After the download, unzip the files. 
Double click each file to open in Arduino!

<h2>Troubleshooting</h2>
I'm getting a "Can't Find Port" error: try pressing the "reset" button on the Circuit Playground twice! 

<h2>Circuit Playground Functions Cheat Sheet</h2>
</br>
LEDS</br>
CircuitPlayground.setPixelColor(0, 255,   255,   255); // (which pixel?, red, green, blue)</br>
CircuitPlayground.clearPixels(); // turns all neopixels off by clearing the data!</br>
</br>
SPEAKER</br>
CircuitPlayground.playTone(2000, 1000); // (tone in hz, duration)</br>
</br>
PRINT STATEMENT</br>
Serial.println("This statement will print to the serial monitor");</br>
</br>
POSITION SERVO</br>
myservo.write(90);</br>
</br>
<h2>Comparison Operators & Logic</h2>
AND && </br>
Example:</br>
if (capVal > 200 && capVal < 400){ Serial.print("touched")};</br></br>
OR || </br>
Example:</br>
if (capVal > 200 || capVal < 400){ Serial.print("touched")};</br></br>
NOT ! </br>
Example:</br>
if !(capVal < 800){ Serial.print("touched")};</br></br>
EQUALS == </br>
Example:</br>
if (capVal == 800){ Serial.print("touched")};</br></br>

