//ttgo t-beam v1.1
//rote LED bei IO4, welche durchgehend schwach leuchtet, wenn t-beam eingeschalten. Leuchtet auch in deep sleep.
//hell blaue LED bei CHG, wenn t-beam mit USB Kabel angeschlossen
//rote LED neben GPS, die bei aktiven GPS Signal blinkt

#include <Arduino.h>

RTC_DATA_ATTR volatile uint64_t millisTimer = 0;
RTC_DATA_ATTR int bootCounter = 0;
RTC_DATA_ATTR int loopCounter = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial) {
  }
  ++bootCounter;
  Serial.println("This is setup() deep sleep tester.");
  Serial.printf("counter: %d\n",bootCounter);
    // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);
}

void loop() {
  delay(500);
  ++loopCounter;
  Serial.printf("This is a loop counter: %d\n", loopCounter);
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
}
