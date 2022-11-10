#include <DS3231M.h>
#include <Wire.h>
#include <EEPROM.h>
//init DS3231M
DS3231  rtc(SDA, SCL);
// Init a Time-data structure
Time t;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  rtc.begin();
  t = rtc.getTime();
  Serial.println(t.year,DEC);
}

void loop() {
  // put your main code here, to run repeatedly:

}
