;PlatformIO Project Configuration File
;
;   Build options: build flags, source filter
;   Upload options: custom upload port, speed and extra flags
;   Library options: dependencies, extra library storages
;   Advanced options: extra scripting
;
; Please visit documentation for the other options and examples
; https://docs.platformio.org/page/projectconf.html

[env:m5stack-grey]
;[env:ttgo-t-beam]
;[env:m5stack-core-esp32]
;platform = espressif32
;platform = espressif32@1.7
platform = espressif32@1.11.1
board = m5stack-grey
;board = ttgo-t-beam
;board = m5stack-core-esp32
framework = arduino
#build_flags = -Wno-unknown-pragmas https://stackoverflow.com/questions/132667/how-to-disable-pragma-warnings/132732
#To enable C++11 support with g++ or clang, you need to pass the option -std=c++0x. You can also use -std=c++11 on the newer versions of those compilers.
#-std=c++11 or -std=c++14
build_flags = -std=gnu++11 -Wno-unknown-pragmas
monitor_speed = 115200

; https://docs.platformio.org/en/latest/projectconf/section_env_upload.html
monitor_port = COM6 ;grey = COM6
upload_port = COM6 ;gres = COM6


;monitor_port = COM7 ;ttgo = COM7
;upload_port = COM7
;upload_speed = 921600
board_build.partitions = no_ota.csv
lib_deps =  
  ;LMIC-Arduino@1.5.0+arduino-2
  ;TinyGPSPlus@1.0.2
  ;PubSubClient
  ;Ethernet
  ;M5Stack@0.2.9
  # Using a library name
