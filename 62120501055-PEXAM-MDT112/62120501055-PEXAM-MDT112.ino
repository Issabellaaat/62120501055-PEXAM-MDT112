#include <Servo.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>
#define SERVO_PIN 9

Servo myservo;
Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);
void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
  myservo.attach(8);
  
}
int x=0;
void loop() {
     if (digitalRead(2) == 0) {
         tone(8, 800, 300);
        for (x; x<=180; x=x+10) {
        myservo.write(x);  
        oled.clearDisplay();
        oled.setCursor(0, 0);
        oled.setTextSize(2);
        oled.println("Servo:" +String(x)+" Degrees");
        oled.display();    
        delay(500);           
        }   
         delay(200);
  } 
}
