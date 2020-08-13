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
