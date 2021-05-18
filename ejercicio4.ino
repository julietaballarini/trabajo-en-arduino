int variable = 0;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  for(int contador=0;contador<=360;contador+=1){
    
    Serial.println(contador);
  	delay(20); 
  }
}
