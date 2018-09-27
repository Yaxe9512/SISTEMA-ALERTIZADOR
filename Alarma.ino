#include <LowPower.h>
int buzzer=9;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(buzzer, OUTPUT);  
}

void loop() 
{
  int valor=digitalRead(A0);
  Serial.println(valor);
  delay(200);
  if (valor==0){
    analogWrite(buzzer,128);    
  }else{
    digitalWrite(buzzer, LOW);    
  }
  LowPower.powerDown(SLEEP_FOREVER,ADC_OFF,BOD_OFF);
}
