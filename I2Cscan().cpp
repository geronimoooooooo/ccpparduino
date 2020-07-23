/************************************************************************

  M5StackFire I2C Scanner

  The M5StackFire has a connector for I2C devices. 
  This program scans the addresses 1-127 continuosly and shows 
  the devices found on the TFT.

  The M5Stack fire has two internal I2C devices at address 0x68 and 0x75.
  
  If they do not appear on the TFT it could mean you made a short cut on 
  the I2C bus.

  October 2018, ChrisMicro

************************************************************************/
#include <M5Stack.h>

void setup() 
{
  M5.Lcd.begin();
  M5.Lcd.fillScreen( BLACK );
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.setTextColor(YELLOW);  
  M5.Lcd.setTextSize(2);

  M5.Lcd.fillScreen( BLACK );
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.println("M5StackFire I2C Tester");
    
  Wire.begin();

  delay(3000);
  M5.Lcd.fillScreen( BLACK );
}

int textColor=YELLOW;

void loop() 
{
  int address;
  int error;
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.println("scanning Address [HEX]");
  
  for(address = 1; address < 127; address++ ) 
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if(error==0)
    {
      M5.Lcd.print(address,HEX);M5.Lcd.print(" ");
    }
    else M5.Lcd.print(".");

    delay(10);
  }

  if(textColor==YELLOW) textColor=GREEN;
  else textColor=YELLOW;
  M5.Lcd.setTextColor(textColor,BLACK);  
}

##################################################
https://playground.arduino.cc/Main/I2cScanner/

#include <Arduino.h>
#include <Wire.h>

void setup() {
  Wire.begin();

  Serial.begin(115200);  // 9600
  while (!Serial)
    ;  // Leonardo: wait for serial monitor
  Serial.println("\nI2C Scanner");
}

void loop() {
  byte error, address;
  int nDevices;

  Serial.println("Scanning...");

  nDevices = 0;
  for (address = 1; address < 127; address++) {
    // The i2c_scanner uses the return value of
    // the Write.endTransmisstion to see if
    // a device did acknowledge to the address.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address < 16) Serial.print("0");
      Serial.print(address, HEX);
      Serial.println("  !");

      nDevices++;
    } else if (error == 4) {
      Serial.print("Unknown error at address 0x");
      if (address < 16) Serial.print("0");
      Serial.println(address, HEX);
    }
  }
  if (nDevices == 0)
    Serial.println("No I2C devices found\n");
  else
    Serial.println("done\n");

  delay(4000);  // wait 4 seconds for next scan
}

Scanning...
I2C device found at address 0x68  !
I2C device found at address 0x76  !
done
##################################################################
void I2Cscan()
{
// scan for i2c devices
  byte error, address;
  int nDevices;

  Serial.println("Scanning...");

  nDevices = 0;
  for(address = 1; address < 127; address++ )
  {
    // The i2c_scanner uses the return value of
    // the Write.endTransmisstion to see if
    // a device did acknowledge to the address.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("I2C device found at address 0x");
      if (address<16)
        Serial.print("0");
      Serial.print(address,HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (error==4)
    {
      Serial.print("Unknow error at address 0x");
      if (address<16)
        Serial.print("0");
      Serial.println(address,HEX);
    }
  }
  if (nDevices == 0)
    Serial.println("No I2C devices found\n");
  else
    Serial.println("done\n");
}

Scanning...
I2C device found at address 0x75  !
done
