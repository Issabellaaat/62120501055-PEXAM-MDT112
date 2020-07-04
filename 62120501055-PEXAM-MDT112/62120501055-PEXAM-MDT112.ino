#include <Servo.h>

#define SERVO_PIN 9

Servo myservo;
void setup(){
    Serial.begin(9600);
    myservo.attach(8);
    myservo.write(180);
    myservo.write(0);
    Serial.println("Servo : 0 degrees");
     delay(900);
}
void loop(){
}
