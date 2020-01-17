#include <NewPing.h>


//200cm  = 2mtrs
NewPing sonar(12, 11, 200);


const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
const int ledBlue = 9;
const int ledYellow = 10;


int cuenta = 0;


int distancia;
int pausa;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(9, OUTPUT); //led azul
  pinMode(10, OUTPUT); //led rojo
}












void loop() {
  
  distancia = sonar.ping_cm(); 
  
  if (distancia > 10){
    pausa = distancia * 30;
    Serial.println(pausa);
    Serial.println(distancia);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledBlue, HIGH);
    delay(pausa);
    digitalWrite(ledBlue, LOW);
    cuenta++;
    if(cuenta > 9){
      digitalWrite(ledYellow, HIGH);
      cuenta = 0;
    }
    actualizarNumero(cuenta); 
  }

  
}

void actualizarNumero(int data){
  switch (data) {
  case 0:
    /*Bloque para mostrar un 0*/
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    break;
  case 1:
    /*Bloque para mostrar un 1*/
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
  case 2:
    /*Bloque para mostrar un 2*/
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
  case 3:
    /*Bloque para mostrar un 3*/
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
  case 4:
    /*Bloque para mostrar un 4*/
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  case 5:
    /*Bloque para mostrar un 5*/
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  case 6:
    /*Bloque para mostrar un 6*/
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  case 7:
    /*Bloque para mostrar un 7*/
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
  case 8:
    /*Bloque para mostrar un 8*/
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  case 9:
    /*Bloque para mostrar un 9*/
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);

  }
}
