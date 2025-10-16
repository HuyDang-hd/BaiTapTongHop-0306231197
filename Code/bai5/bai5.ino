#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
int led=9;
int button=10;
int pre_btn=LOW;
int led_tt=1;
void setup() {
  lcd.init();
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  int btn_hienTai=digitalRead(button);
  if(pre_btn==LOW && btn_hienTai==HIGH){
    if(led_tt==1){
      digitalWrite(led,HIGH);
      lcd.backlight();
      led_tt=0;
    }
    else{
      digitalWrite(led,LOW);
      lcd.noBacklight();
      led_tt=1;
    }
    delay(50);
  }
  
  pre_btn=btn_hienTai;
}
