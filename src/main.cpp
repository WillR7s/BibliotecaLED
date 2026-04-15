#include <Arduino.h>
#include <LED.h>
int botao= 0;
Led led1(36);

void setup() {
  pinMode (botao, INPUT_PULLUP);
  //led1.ligar(5000); // 
}

void loop()
 {
  bool Estadobotao = digitalRead(botao);
   static bool atualizaEstado = 1;
 


  if (!Estadobotao && atualizaEstado)
{
  //Estadobotao=!Estadobotao;
  led1.piscar(10);  
  
}

 else if (!Estadobotao ++ && atualizaEstado)
 {
  led1.desligar();
 }
 
led1.update();
 atualizaEstado = Estadobotao;
}
