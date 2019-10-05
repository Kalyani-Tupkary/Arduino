int sensorPin = A0;
int LED1= 9;
int LED2= 10;
int LED3= 11;
int sensorValue = 0;

void setup(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  analogWrite(LED1, sensorValue);
   analogWrite(LED2, sensorValue);
    analogWrite(LED3, sensorValue);

  Serial.println(sensorValue);
  
}
