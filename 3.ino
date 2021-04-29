#define LED 4// da nombre al LED
#define triggerPin 6 // da nombre al TRIGGER
#define echoPin 3 // da nombre al ECHO
#define BUZZER 10 // da nombre al BUZZER
#define INTERRUPTOR 13 // da nombre al INTERRUPTOR

int distancia;
float tiempo;

long readUltrasonicDistance(int triggerPin, int echoPin)// almacena la distancia del triggerping y del echoping
{
  pinMode(triggerPin, OUTPUT);  // define que va a utilizar el triggerPin como SALIDA
  digitalWrite(triggerPin, LOW); // apago triggerPin
  delayMicroseconds(2); // espera de 2 microsegundos 
  digitalWrite(triggerPin, HIGH); // enciendo triggerPin
  delayMicroseconds(10); // espera de 10 microsegundos
  digitalWrite(triggerPin, LOW); // apago triggerPin
  pinMode(echoPin, INPUT);// define que va a utilizar el echoPin como ENTRADA
  return pulseIn(echoPin, HIGH); //espera que echoPin pase a HIGH, inicia el cronometraje, luego espera que el echoPin pase a LOW y detiene el cronometraje.
}

void setup()// predefine las cosas que vas a usar en el programa
{
  pinMode(13, INPUT); // define que va a utilizar el pin 13 como ENTRADA
  pinMode(4, OUTPUT); // define que va a utilizar el pin 4 como SALIDA
  pinMode(10, OUTPUT);// define que va a utilizar el pin 10 como SALIDA
}

void loop()// ejecutar el codigo en forma continua
{
  if (digitalRead(13) == HIGH) { // si INTERUPTOR esta encendido
    if (0.01723 * readUltrasonicDistance(3, 3) < 150) { //si la distancia que tenemos con el objeto es menor a 150
      digitalWrite(4, HIGH);// enciendo el LED rojo
      tone(10, 548668578, 1000); // activar BUZZER 
    } else { //si la distancia que tenemos con el objeto es mayor a 150
      digitalWrite(4, LOW);// apago el LED rojo
      noTone(10); // desactivo BUZZER
    }
  } else { // si el INTERRUPTOR esta apagado
    digitalWrite(4, LOW);// apago el LED rojo
    noTone(10);// desactivo BUZZER
  }
  delay(10); // el programa espera 10 microsegundos
}
