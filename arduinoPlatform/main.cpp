#pragma region IMPORTS
#include <Arduino.h>
#include <M5Stack.h>
#pragma endregion 

#pragma region DECLARE PROTOTYPE FUNCTIONS
//void someFunction();
#pragma endregion

void setup() {
  Serial.begin(115200);
  while (!Serial);
  Serial.println("This is setup!");
  M5.begin();
  M5.Lcd.println("This is setup!");
  delay(2000);
}

void loop() {
  Serial.println("This is loop!");
  M5.Lcd.println("This is loop!");
  delay(500);
}
