#define ROJO 10 // da nombre al LED
#define AMARILLO 9 // da nombre al LED
#define VERDE 8 // da nombre al LED

#define ROJO 4 // da nombre al LED
#define AMARILLO 3 // da nombre al LED
#define VERDE 2 // da nombre al LED

void setup()// predefine las cosas que vas a usar en el programa
{
  pinMode(10, OUTPUT);// define que va a utilizar el pin 10 como SALIDA
  pinMode(9, OUTPUT);// define que va a utilizar el pin 9 como SALIDA
  pinMode(8, OUTPUT);// define que va a utilizar el pin 8 como SALIDA
  
  pinMode(4, OUTPUT);// define que va a utilizar el pin 4 como SALIDA  
  pinMode(3, OUTPUT);// define que va a utilizar el pin 3 como SALIDA
  pinMode(2, OUTPUT);// define que va a utilizar el pin 2 como SALIDA

}

void loop()// ejecutar el codigo en forma continua
{
  digitalWrite(10, HIGH);// enciendo el LED rojo
  digitalWrite(2, HIGH);// enciendo el LED verde
  delay(10000);//el programa espera 10000 milisegundos 
  digitalWrite(2, LOW);// apago el LED verde
  delay(1000);//el programa espera 1000 milisegundos 
  
  digitalWrite(3, HIGH);// enciendo el LED amarillo
  delay(2000);//el programa espera 2000 milisegundos 
  digitalWrite(3,LOW);// apago el LED amarillo
  
  digitalWrite(10, LOW);// apago el LED rojo
  digitalWrite(8, HIGH);// enciendo el LED verde
  digitalWrite(4, HIGH);// enciendo el LED rojo
  delay(10000);//el programa espera 10000 milisegundos 
  digitalWrite(8, LOW);// apago el LED verde
  
  digitalWrite(9, HIGH);// enciendo el LED amarillo
  delay(2000);//el programa espera 2000 milisegundos 
  digitalWrite(9, LOW);// apago el LED amarillo
  
  digitalWrite(4, LOW);// apago el LED rojo
  
}
