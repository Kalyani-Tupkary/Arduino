// Define Pins
int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;


// define variables
int Value9;
int Value10;
int Value11;

const int sensorPin = A1;

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

#define delayTime 10 // fading time between colors

  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue >=0 && sensorValue <= 10) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
      
  } if (sensorValue >= 10 && sensorValue <= 30) {
    digitalWrite(ledPin2, HIGH);
     digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW);

  } if (sensorValue >= 30) {
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);

  }



  //    Serial.println(redValue);


  delay(50);

}
