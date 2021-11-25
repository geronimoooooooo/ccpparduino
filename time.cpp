Print local and UTC time: http://www.java2s.com/Code/C/Development/PrintlocalandUTCtime.htm
Liste wie man Zeitstring formatiert: http://kirste.userpage.fu-berlin.de/chemnet/use/info/libc/libc_17.html
https://www.epochconverter.com/programming/c
+ Auflistung aller functions: https://en.cppreference.com/w/c/chrono
############################################
  char            fmt[64], buf[64];
    struct timeval  tv;
    struct tm       *tm;

    gettimeofday(&tv, NULL);
    if((tm = localtime(&tv.tv_sec)) != NULL)
    {
            strftime(fmt, sizeof fmt, "%Y-%m-%d %H:%M:%S.%%06u %z", tm);
            snprintf(buf, sizeof buf, fmt, tv.tv_usec);
            printf("'%s'\n", buf); 
    }
################################################

#include <WiFi.h>
#include "time.h"

const char* ssid       = "YOUR_SSID";
const char* password   = "YOUR_PASS";

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 3600;
const int   daylightOffset_sec = 3600;

void printLocalTime()
{
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    return;
  }
  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
}

void setup()
{
  Serial.begin(115200);
  
  //connect to WiFi
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }
  Serial.println(" CONNECTED");
  
  //init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  //disconnect WiFi as it's no longer needed
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
}

void loop()
{
  delay(1000);
  printLocalTime();
}
############################################################################################################
Used format: %Y-%m-%dT%H:%M:%SZ 2019-05-03T13:32:05Z
############################################################################################################
 AUFLISTUNG ALLER FUNCTIONS IN time.h
 https://fresh2refresh.com/c-programming/c-function/c-time-h-library-functions/
 EXAMPLES DAZU: https://fresh2refresh.com/c-programming/c-time-related-functions/
###############################################################################
  /** @brief Gets the UTC time.
 * Used format: %Y-%m-%dT%H:%M:%SZ 2019-05-03T13:32:05Z
 * Needs internet. Has no milliseconds, because not supported by time.h.
 * @return string e.g. 2019-05-03T13:32:05Z
 */
string getUTCTime() {
  string timeUtcStr = "No UTC time available.";
  time_t timer;
  char buffer[30];
  struct tm *tm_info;

  time(&timer);
  // tm_info = localtime(&timer);
  tm_info = gmtime(&timer);
  strftime(buffer, 30, "%Y-%m-%dT%H:%M:%SZ", tm_info);
  // puts(buffer);
  timeUtcStr = buffer;
  // Serial.println(timeUtcStr.c_str());
  // asctime(tm_info) Fri May  3 13:25:45 2010
  // Serial.printf("UTC time: %s \n", asctime(tm_info));
  return timeUtcStr;
}
############################################################################################################
void printLocalTime() {
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to obtain time");
    return;
  }
  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
}
############################################################################################################
Serial.printf("Sec since epoch: %lu", time(NULL));  (braucht time.h) 
############################################################################################################
Convert time to epoch:
https://forum.arduino.cc/index.php?topic=394246.0
###############################################################################
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t     now;
    struct tm  ts;
    char       buf[80];

    // Get current time
    time(&now);

    // Format time, "ddd yyyy-mm-dd hh:mm:ss zzz"
    ts = *localtime(&now);
    strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &ts);
    printf("%s\n", buf);
    return 0;
}
############################################################################################################
long now = millis();
unsigned long timePassed; timePassed = millis(); ( %lu)

  if (compareTime(timeLastTimestamp, millis()))
    Serial.printf("Enough time passed! %lu", (millis() - timeLastTimestamp));
############################################################################################################
currentMillis = millis();
  if (currentMillis - sentMillis > interval) {
    sendobject();
  }
############################################################################################################
char buf[25] = { 0 };
  snprintf(buf, 25, "%d-%02d-%02dT%02d:%02d:%02dZ", year(now()),
        month(now()), day(now()), hour(now()),
        minute(now()), second(now()));

############################################################################################################
