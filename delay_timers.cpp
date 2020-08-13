const int inputPin = 2;             // the pin that the pushbutton is attached to
const int outputPin = 13;           // the output pin (LED)
unsigned long previousMillis = 0;   // will store last time the output was updated
const long interval = 3000;         // interval (milliseconds) to leave output HIGH (ON delay)
byte inputPreviousState = HIGH;     // default startup condition to have output LOW

void setup() {
  pinMode(inputPin, INPUT);         // pushbutton from inputPin to VCC, 10K from inputPin to GND
  pinMode(outputPin, OUTPUT);       // set the digital pin as output
}

void loop() {
  unsigned long currentMillis = millis();
  byte inputState = digitalRead(inputPin);

  if (inputState != inputPreviousState) {            // input has changed
    digitalWrite(outputPin, HIGH);
    previousMillis = currentMillis;                  // reset timer
  }

  if (currentMillis - previousMillis >= interval) {  // 3 seconds has elapsed
    if (inputState == inputPreviousState) {          // input is stable
      digitalWrite(outputPin, LOW);
    }
  }
  inputPreviousState = inputState;                   // update inputPreviousState
  // any extra code can go here
}
######################################################################

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
