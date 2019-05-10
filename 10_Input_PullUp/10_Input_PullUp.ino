/*
  Input Pull-up Serial
  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.
  
*/

void setup() {
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
 
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);

  if (sensorVal == 1) {
    digitalWrite(11, HIGH );
    digitalWrite(12, LOW );
  } else {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH );
  }
}
