#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte AW[] = {
  B00000,
  B01010,
  B00100,
  B00000,
  B00100,
  B01010,
  B01110,
  B10001
};
byte AA[] = {
  B00000,
  B00100,
  B01010,
  B00000,
  B00100,
  B01010,
  B01110,
  B10001
};
byte DD[] = {
  B00000,
  B01110,
  B01001,
  B01001,
  B11101,
  B01001,
  B01001,
  B01110
};
byte OO[] = {
  B00000,
  B00100,
  B01010,
  B00000,
  B01110,
  B01010,
  B01010,
  B01110
};
byte OW[] = {
  B00000,
  B00010,
  B00001,
  B00010,
  B01110,
  B01010,
  B01010,
  B01110
};
byte UW[] = {
  B00000,
  B00110,
  B00001,
  B01010,
  B01010,
  B01010,
  B01010,
  B01110
};
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(6,0);
  lcd.createChar(0,AW);
  lcd.createChar(1,AA);
  lcd.createChar(2,DD);
  lcd.createChar(3,OO);
  lcd.createChar(4,OW);
  lcd.createChar(5,UW);

  
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2));
  lcd.write(byte(3));
  lcd.write(byte(4));
  lcd.write(byte(5));
  
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print("A");
  delay(200);
}
