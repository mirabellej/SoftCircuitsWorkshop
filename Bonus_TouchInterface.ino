   // Mads's touch interface sketch! Thanks Mads! 
    
    void setup() {

      Serial.begin(9600); 

    }


    void loop() {

     float value = touchRead(A1, A2);  // connect A1 and A2.

      Serial.println(value); 

    }




    int touchRead(int pin1, int pin2)

    {

      int sum=0;

      for(int i=0; i < 10; i++)

      {

        pinMode(pin1, OUTPUT);



        digitalWrite(pin1,HIGH);

        delayMicroseconds(10);

        int high = analogRead(pin2);


        digitalWrite(pin1,LOW);

        delayMicroseconds(10);

        int low = analogRead(pin2);



        pinMode(pin1, INPUT);

        digitalWrite(pin1,LOW);

        sum = sum +high-low;

      }


      return (int)((float)sum/4.0f);


    }
