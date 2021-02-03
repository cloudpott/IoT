#include <Arduino.h>

#define red_led 17
#define green_led 18
#define blue_led 19
#define button 21
#define button_power 4
int con = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(button_power, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(button_power, HIGH);
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);
  digitalWrite(blue_led, LOW);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(button) == HIGH){
    switch (con) {
      case 0:
        digitalWrite(red_led, HIGH);
        digitalWrite(green_led, LOW);
        digitalWrite(blue_led, LOW);
        con++;
        delay(300);
        break;
      case 1:
        digitalWrite(red_led, LOW);
        digitalWrite(green_led, HIGH);
        digitalWrite(blue_led, LOW);
        con++;
        delay(300);
        break;
      case 2:
        digitalWrite(red_led, LOW);
        digitalWrite(green_led, LOW);
        digitalWrite(blue_led, HIGH);
        con++;
        delay(300);
        break;
    }
  }

  if (con == 3){
    con = 0;
  }
}