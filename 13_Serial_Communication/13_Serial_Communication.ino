int sensorPin =A0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int analogValue = analogRead(sensorPin)/4; // read sensor value
  Serial.write(analogValue); // send the value serially
  
 
}
