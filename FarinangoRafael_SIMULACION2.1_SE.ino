/*
 * CAPITULO II: PUERTOS DIGITALES
 * CODIGO 1: MANEJO DE PUERTOS CONFIGURADOS COMO SALIDAS
 * OBJETIVO: ENCENDER Y APAGAR LEDS MEDIANTE EL USO DE DIFERENTES TIPOS DE VARIABLES
 * NOMBRE: FARINANGO RAFAEL
 */

//tipos de variables int, float, char
#define led1 8 //no se puede alterar su valor
int led2 = 9; //variable normal
const int led3 = 10; //variable constante, es mas recomendable usar este tipo de variable
 
void setup() {
  pinMode(led1,OUTPUT); //declaro el pin 8 como salida
  pinMode(led2,OUTPUT); //declaro el pin 9 como salida
  pinMode(led3,OUTPUT); //declaro el pin 10 como salida
}

void loop() {
  digitalWrite(led1,HIGH); //envia 5v al pin 8 
  delay(500); //se detiene por o,5 segundos
  digitalWrite(led1,LOW); //envia 0v al pin 8 
  delay(500); //se detiene por o,5 segundos
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(400);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(400);
}
