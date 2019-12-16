
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 8;     // the number of the pushbutton pin
const int sma =  10;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(sma, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    analogWrite(sma,105);
delay (1000);
analogWrite(sma,0);
delay (1000);
  } else {
    // turn LED off:
      analogWrite(sma,0);
  }
}
