
void setup() {
  for(int i=1;i<11;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  for(int i=1;i<11;i++){
    int rand=random(1,11);
    if(rand%2==1){
      digitalWrite(i,HIGH);
    }
    else{
      delay(200);
      digitalWrite(i,LOW);
    }
  }
}
