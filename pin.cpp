Auflistung einer anderer sinnvoller Funktionen: https://randomnerdtutorials.com/esp32-adc-analog-read-arduino-ide/

const int pin = 35;

pinMode(pin, mode);
pinMode(pin, INPUT);
pinMode(led, OUTPUT);

analogRead(pin); digitalRead(pin);
int val = analogRead(pin);

pinMode(gpio,OUTPUT);
digitalWrite(gpio, HIGH/LOW);


void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
}