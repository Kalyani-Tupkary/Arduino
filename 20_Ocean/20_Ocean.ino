//CC Lab midterms - Deep in the Ocean
// Use a linear potentiometer to control the brightness of the LED

int potPin = A5; //Declare potPin to be analog pin A5
int led3 = 3;
int led5 = 5;
int led6 = 6;
int led9 = 9;
int led11 = 11;
int readValue;  // Use this variable to read Potentiometer
int writeValue; // Use this variable for writing to LED
int writeValue2;// Use this variable for writing to LED to fade out

void setup() {
  pinMode(potPin, INPUT);  //set potPin to be an input
  pinMode(led3, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led11, OUTPUT);
  Serial.begin(9600);      // turn on Serial Port
}

void loop() {

  readValue = analogRead(potPin);

  if (readValue == 0) {
    Serial.println(readValue);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led11, LOW);
  }

  if (readValue > 0 && readValue <= 204 ) {
    Serial.println(readValue);

    writeValue = map(readValue, 0, 204, 0, 255);
    analogWrite(led3, writeValue);

    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led11, LOW);
  }

  if (readValue > 204 && readValue <= 408) {
    Serial.println(readValue);

    writeValue = map(readValue, 204, 408, 0, 255);
    analogWrite(led5, writeValue);
    writeValue = 255 - writeValue;
    analogWrite(led3, writeValue2); // fading out

    digitalWrite(led6, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led11, LOW);
  }

  if (readValue > 408 && readValue <= 612) {
    Serial.println(readValue);

    writeValue = map(readValue, 204, 408, 0, 255);
    analogWrite(led6, writeValue);
    writeValue = 255 - writeValue;
    analogWrite(led5, writeValue2); // fading out

    digitalWrite(led3, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led11, LOW);
  }

  if (readValue > 612 && readValue <= 816) {
    Serial.println(readValue);

    writeValue = map(readValue, 204, 408, 0, 255);
    analogWrite(led9, writeValue);
    writeValue = 255 - writeValue;
    analogWrite(led6, writeValue2); // fading out

    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led11, LOW);
  }

  if (readValue > 816 && readValue <= 1023) {
    Serial.println(readValue);

    writeValue = map(readValue, 204, 408, 0, 255);
    analogWrite(led11, writeValue);
    writeValue = 255 - writeValue;
    analogWrite(led9, writeValue2); // fading out

    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
  }

}
