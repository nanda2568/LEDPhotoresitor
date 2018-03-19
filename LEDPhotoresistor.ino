/* LEDPhotoresitor - LED is lit when sufficiently dark in the room
  Created By: Nanda Kumar Nair
          On: 3/18/2018
 Circuit:
    Photoresistor on analog 0 to 5V
    LED on digital pin 8
    10 KOhm resistor on A0 to ground
*/

int led = 8;
int sensorPin = A0;    // select the input pin for photoresistor
int sensorValue = 0;   // variable to store the value coming from the sensor

void setup() {
  // led at pin 8 is defined as output
  pinMode(led, OUTPUT);
  // initialize serial communications (for debugging only):
  Serial.begin(9600);
}

void loop() {
    // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // print the sensor value
  Serial.println(sensorValue);
  if (sensorValue < 1000) {
    // turn the led on
    digitalWrite(led, HIGH);
  } else {
    // turn the led off:
    digitalWrite(led, LOW);
  }
}
