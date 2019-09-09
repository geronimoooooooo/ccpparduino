https://docs.espressif.com/projects/esp-idf/en/latest/api-reference/system/sleep_modes.html
https://gist.github.com/igrr/54f7fbe0513ac14e1aea3fd7fbecfeab

#include <M5Stack.h>

+ One pressing will only reset the ESP32, double pressing will be treated as power off, so the PMU will directly cut-off the MCU's power.
+ In deep sleep and light sleep modes, wireless peripherals are powered down.
 
+ Note: in revision 0 of the ESP32, 
RTC fast memory will always be kept enabled in deep sleep, so that the deep sleep stub can run after reset.
 
M5.setWakeupButton(BUTTON_A_PIN); //press 1.button and m5stack wakes up
M5.powerOFF();  // puts the whole machine to sleep
esp_deep_sleep_start(); //putting the esp32 to sleep 
esp_light_sleep_start()
esp_deep_sleep(10000000); //microseconds 1s=1.000.000us
esp_sleep_enable_timer_wakeup() 
gpio_wakeup_enable()
esp_sleep_enable_gpio_wakeup()
------------------------
 setup(){
  M5.setWakeupButton(BUTTON_A_PIN);
}
 void loop() {

  if(M5.BtnA.wasPressed()) {
    M5.powerOFF();
  }

  M5.update();
}
------------------------
        M5.Power.setPowerBoostKeepOn()
        M5.Power.setCharge(uint8_t mode);
        M5.Power.setPowerBoostKeepOn(bool en);
        M5.Power.isChargeFull();
        M5.Power.setWakeupButton(uint8_t button);
        M5.Power.powerOFF();
         
        bool setPowerBoostOnOff(bool en);
        bool setPowerBoostSet(bool en);
        bool setPowerVin(bool en);
        bool setPowerWLEDSet(bool en);
------------------------
#define uS_TO_S_FACTOR 1000000  /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  3        /* Time ESP32 will go to sleep (in seconds) */
 
esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
esp_deep_sleep_start();
------------------------
#include <esp_wifi.h>
#include <esp_bt.h>
...
  esp_wifi_stop();
  esp_bt_controller_disable();
  esp_deep_sleep_start();
#############################################
#include <M5Stack.h>

void setup(){  
  M5.begin();
  M5.Lcd.println("Setup");
}

void loop() {
  if(M5.BtnA.wasPressed()) {    
    // wake up after 5 seconds
    esp_sleep_enable_timer_wakeup(5000000); 
    // start deep sleep. Display goes out!
    esp_deep_sleep_start();  
  }
  M5.update();
}
#############################################
#############################################
#############################################
#############################################
#############################################
