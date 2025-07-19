
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

const int rosso = 13;
const int giallo = 12;
const int verde = 11;
const int pinbottone = 10;


int bottonepressato = 0;

void setup() {
  pinMode(rosso, OUTPUT);
  pinMode(giallo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(pinbottone, INPUT_PULLUP);


  lcd.init();
  lcd.backlight();
}

void loop() {
  bottonepressato = digitalRead(pinbottone);

  if (bottonepressato == LOW) {  
    delay(1000);
    digitalWrite(giallo, LOW);

    digitalWrite(verde, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("puoi andare");
    delay(5000);

    digitalWrite(verde, LOW);
    lcd.clear();
  } else {
    digitalWrite(rosso, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("non puoi andare");
  }

  delay(1000);
  digitalWrite(rosso, LOW);
}
