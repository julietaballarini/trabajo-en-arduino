int promedioDistancia = 0;

int temperatura = 0;

int distancia = 0;

int promedioTemperatura = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

int counter;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop()
{
  promedioDistancia = 0;
  promedioDistancia = 0;
  for (counter = 0; counter < 5; ++counter) {
    distancia = 0.01723 * readUltrasonicDistance(6, 6);
    temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
    promedioDistancia = (promedioDistancia + distancia);
    promedioTemperatura = (promedioTemperatura + temperatura);
    Serial.print("Distancia =");
    Serial.print(distancia);
    Serial.print("Temperatura =");
    Serial.println(temperatura);
  }
  promedioDistancia = (promedioDistancia / 5);
  promedioTemperatura = (promedioTemperatura / 5);
  Serial.print("La temperatura promedio es de");
  Serial.print(promedioTemperatura);
  Serial.print("La distancia promedio es de ");
  Serial.print(promedioDistancia);
  Serial.println("cm");
  delay(10); 
}
