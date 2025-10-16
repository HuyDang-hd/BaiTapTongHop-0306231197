int led_do=4;
int led_vang=3;
int button=10;
int pre_btn=LOW;
int dem=1;
void setup() {
  pinMode(led_do,OUTPUT);
  pinMode(led_vang,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  int btn_hienTai=digitalRead(button);
  if(pre_btn==LOW && btn_hienTai==HIGH){
    if(dem==1){
    digitalWrite(led_do,HIGH);
    digitalWrite(led_vang,HIGH);
    }
    else if(dem==2){
    digitalWrite(led_do,LOW);
    digitalWrite(led_vang,LOW);
    }
    else if(dem==3){
    digitalWrite(led_do,LOW);
    digitalWrite(led_vang,HIGH);
    }
    else if(dem==4){
    digitalWrite(led_do,HIGH);
    digitalWrite(led_vang,LOW);
    dem=0;
    }
    delay(200);
    dem+=1;
  }
  pre_btn=btn_hienTai;
}
