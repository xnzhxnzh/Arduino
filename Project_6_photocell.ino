/*
Keyestudio smart home Kit for Arduino
Project 6
photocell
*/
int LED = 5; // Set LED pin at D5
int val = 0; // Read the voltage value of the photodiode
void setup () {
       pinMode (LED, OUTPUT); // LED is output
       Serial.begin (9600); // The serial port baud rate is set to 9600
}
void loop () {
       val = analogRead (A1); // Read the voltage value of AO Pin
       Serial.println (val); // Serial port to view the change of voltage value
       if (val <900)
       {// Less than 1000, LED light is off
       digitalWrite (LED, LOW);
       } 
       else 
       {// Otherwise, the LED lights up
       digitalWrite (LED, HIGH);
       }
       delay (10); // Delay 10ms
} 
//*********************************************************************
