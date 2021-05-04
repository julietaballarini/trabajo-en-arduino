#define ROJO 12 // da nombre al LED
#define VERDE 11 // da nombre al LED
#define SENSOR DE TEMPERATURA A0 // da nombre al SENSOR DE TEMPERATURA

void setup()// predefine las cosas que vas a usar en el programa
{
  pinMode(A0, INPUT); // define que va a utilizar el pin A0 como ENTRADA
  pinMode(12, OUTPUT);// define que va a utilizar el pin 12 como SALIDA
  pinMode(11, OUTPUT);// define que va a utilizar el pin 11 como SALIDA
}

void loop()// ejecutar el codigo en forma continua
{
  if (-40 + 0.488155 * (analogRead(A0) - 20) > 35) { //si la temperatura que midio el sensor es mayor a 35°
    digitalWrite(12, HIGH);// enciendo el LED rojo
    digitalWrite(11, LOW);// apago el LED verde
  } else {
    digitalWrite(11, HIGH);// enciendo el LED verde
    digitalWrite(12, LOW);// apago el LED rojo
  }
  delay(10); // el programa espera 10 microsegundos
}
