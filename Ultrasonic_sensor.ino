//using an ultrasonic sensor
// closer you get more LEDs light up
// define pin numbers

const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin2 = 2;
const int ledPin3 = 3;
const int ledPin4 = 4;
const int ledPin5 = 5;
const int ledPin6 = 6;
const int ledPin7 = 7;

//defines variables
long duration;
int distance;
int safetyDistance;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
}

void loop()
{
  digitalWrite (trigPin, LOW); // Clears the trigPin
  delayMicroseconds (2);

  digitalWrite (trigPin, HIGH);// Sets the trigPin on HIGH state for 10 micro seconds
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds

  distance = duration * 0.034 / 2; // Calculating the distance

  safetyDistance = distance;
  Serial.print("Distance: "); // Prints the distance on the Serial Monitor9
  Serial.println(distance);

  if (safetyDistance < 20){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin2, HIGH);}
  if (safetyDistance > 20){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin2, LOW);}

  if (safetyDistance < 15){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin3, HIGH);}
  if (safetyDistance > 15){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin3, LOW);}

  if (safetyDistance < 10){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin4, HIGH);}
  if (safetyDistance > 10){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin4, LOW);}

  if (safetyDistance < 5){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin5, HIGH);}
  if (safetyDistance > 5){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin5, LOW);}

  if (safetyDistance < 3){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin6, HIGH);}
  if (safetyDistance > 3){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin6, LOW);}

  if (safetyDistance < 2){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin7, HIGH);}
  if (safetyDistance > 2){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin7, LOW);}
  

}
