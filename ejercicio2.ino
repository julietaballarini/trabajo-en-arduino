int promedioDistancia = 0;
int temperatura = 0;
int distancia = 0;
int promedioTemperatura = 0;
int counter;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  promedioDistancia = 0;
  promedioDistancia = 0;
  for (counter = 0; counter < 10; ++counter) {
    distancia = 0;
    temperatura = 0;
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
