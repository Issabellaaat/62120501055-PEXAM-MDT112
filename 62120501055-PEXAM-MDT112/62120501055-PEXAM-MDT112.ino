#include <Servo.h>

#define SERVO_PIN 9

Servo myservo;

void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
  myservo.attach(8);
  
}
int x=180;
void loop() {
     if (digitalRead(2) == 0) {
        for (x; x>=0; x=x-10) {
         myservo.write(x);       
        }   
            delay(200);
  } 

}
