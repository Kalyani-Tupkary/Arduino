//Input pull up function as timer

int buttonPin = 2;

int LED1 = 13;
int LED2 = 12;
int buttoncount = 0;

float press_millis = 0;

int option1_millis = 100;
int option2_millis = 600;


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  // there is an internal 20k resisitor inside the arduino
  // and it connects to that pin to 5V
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  while (digitalRead(buttonPin) == LOW) {
    delay(100);
    press_millis = press_millis + 100;
    Serial.print ("ms= ");
    Serial.println(press_millis);



  }
  //create if statement for two different options

  if (press_millis >= option2_millis) {
    digitalWrite(LED2, HIGH);
    delay(3000);
    digitalWrite(LED2, LOW);
  }
  else if (press_millis >= option1_millis) {
    digitalWrite(LED1, HIGH);
    delay(3000);
    digitalWrite(LED1, LOW);
  }





  press_millis = 0;
}
