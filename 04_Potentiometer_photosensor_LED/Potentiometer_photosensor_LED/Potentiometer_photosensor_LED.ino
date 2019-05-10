// Use a potentiometer to control the brightness of the LED
// cover the photosensor and the light dims down


int ledPin = 9;
int brightness;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{

  int sensorValue = analogRead(A0);

  Serial.println(sensorValue);
  brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);
  delay(1);
}
