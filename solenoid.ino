int solenoid = 3;
int led = 13;
//100111
int seq[6] = {1,0,0,1,1,1};
char data;
void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
}

void loop() {
  for(int i=0;i<=5;i++){
     if(seq[i]==0){
      digitalWrite(3+i,LOW);
     }else{
       digitalWrite(3+i,HIGH);
     }
   }
  delay(10000);
  for(int i=0;i<=3;i++){
      digitalWrite(3+i,LOW);
    } 
  
 /*
 while(Serial.available()>0){
  data = Serial.read();
  for(int i=0;i<=5;i++){
    seq[i] = data[i];
  }
  for(int i=0;i<=5;i++){
     if(seq[i]==0){
      digitalWrite(3+i,LOW);
     }else{
       digitalWrite(3+i,HIGH);
     }
   }
  delay(10000);
  for(int i=0;i<=3;i++){
      digitalWrite(3+i,LOW);
    } 
  }
  delay(1000);
  */
  // digitalWrite(12,HIGH);
  
}
