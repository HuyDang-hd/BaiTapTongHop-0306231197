#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int btn_tat=9;
int btn_quaTrai=10;
int btn_quaPhai=8;
int pre_trai=LOW;
int pre_phai=LOW;
int pre_tat=LOW;
int temp=6;
void setup() {
  lcd.begin(16,2);
  pinMode(btn_quaPhai,INPUT);
  pinMode(btn_quaTrai,INPUT);
  pinMode(btn_tat,INPUT);
  lcd.setCursor(6,0);
  lcd.print("Hello");
}

void loop() {
  int btnTrai_now=digitalRead(btn_quaTrai);
  int btnPhai_now=digitalRead(btn_quaPhai);
  int btnTat_now=digitalRead(btn_tat);
  if(pre_trai==LOW && btnTrai_now==HIGH){
    lcd.clear();
    lcd.display();
    lcd.setCursor(temp-2,0);
    temp=temp-2;
    lcd.print("Hello");
  }
  if(pre_phai==LOW && btnPhai_now==HIGH){
    lcd.clear();
    lcd.display(); 
    lcd.setCursor(temp+2,0);
    temp=temp+2;
    lcd.print("Hello");
  }
  if(pre_tat==LOW && btnTat_now==HIGH){
    lcd.noDisplay();
  }
  pre_phai=btnPhai_now;
  pre_trai=btnTrai_now;
  pre_tat=btnTat_now;
  delay(200);
}
