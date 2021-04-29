#define VERDE 2 // da nombre al LED
#define ROJO 4 // da nombre al LED
#define PULSADOR 7 // da nombre al PULSADOR

void setup()
{
  pinMode(2, OUTPUT);// define que va a utilizar el pin 2 como SALIDA
  pinMode(4, OUTPUT);// define que va a utilizar el pin 4 como SALIDA
  pinMode(7, INPUT); // define que va a utilizar el pin 7 como ENTRADA
}

void loop()
{
  if(digitalRead(7)== HIGH)// si el PULSADOR esta encendido
  {
    digitalWrite(2, HIGH);// encender LED verde
    digitalWrite(4, LOW);// apagar LED rojo
  }
  else { // si el INTERRUPTOR esta apagado
    digitalWrite(2, LOW); //apagar LED verde
    digitalWrite(4, HIGH);// encender LED rojo
  }
  delay (10);//el programa espera 10 milisegundos 
}
