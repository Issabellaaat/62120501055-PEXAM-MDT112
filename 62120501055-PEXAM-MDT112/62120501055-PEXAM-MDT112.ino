#include <Servo.h>

#define SERVO_PIN 9

Servo myservo;
void setup(){
    Serial.begin(9600);
    myservo.attach(8);
    myservo.write(0);
    myservo.write(180);
    Serial.println("Servo : 180 degrees");
     delay(900);
}
void loop(){
}