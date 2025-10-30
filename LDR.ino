#define ldr_pin A2
#define LED1 7
#define LED2 6
#define LED3 5

int ldr_deger = 0;
void setup() {
   Serial.begin(9600);

   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
   pinMode(LED3,OUTPUT);
   
}

void loop() {

    ldr_deger = analogRead(ldr_pin);
    Serial.println(ldr_deger);
    
    
    if(ldr_deger <175){
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      
    }else if(ldr_deger<225){
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
    }else if(ldr_deger<275){
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,LOW);
    }else{
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
    }
    
}
