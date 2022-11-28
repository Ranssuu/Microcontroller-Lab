/*
 for Arduino Temperature Meter...
 */
 
int t=0;
int sensor = A0;
float temp;
float tempc;
float tempf;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//const int rs= 12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal_I2C lcd(0x27, 2, 16);
void setup() {
pinMode(sensor,INPUT);
lcd.begin();
lcd.backlight();
lcd.setCursor (0,0);
lcd.print ("    ARDUINO     ");
lcd.setCursor (0,1);
lcd.print ("TEMPRETURE METER");
delay (3000);
Serial.begin(9600);
} void loop() {
delay(2000);
t=t+2;
temp=analogRead(sensor);
tempc=(temp*5)/10;
tempf=(tempc*1.8)+32;
Serial.println("_______");
Serial.println("Temperature Logger");
Serial.print("Time in Seconds= ");
Serial.println(t);
Serial.print("Temp in deg Celcius = ");
Serial.println(tempc);
Serial.print("Temp in deg Fahrenheit = ");
Serial.println(tempf);
lcd.setCursor(0,0);
lcd.print("Temp in C = ");
lcd.println(tempc);
lcd.setCursor(0,1);
lcd.print("Temp in F = ");
lcd.println(tempf);
}
