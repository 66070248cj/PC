void setup()
{
  pinMode(3, OUTPUT); //red
  pinMode(6, OUTPUT); //green
  pinMode(9, OUTPUT); //blue
}

void loop()
{
  digitalWrite(3, LOW); //red
  digitalWrite(6, HIGH); 
  digitalWrite(9, HIGH);
  delay(1000);

  digitalWrite(3, HIGH); //green
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH); 
  delay(1000);

  digitalWrite(3, HIGH); //blue
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW); 
  delay(1000);

  digitalWrite(3, LOW); //yellow
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH); 
  delay(1000);

  digitalWrite(3, LOW); //magenta
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW); 
  delay(1000);

  digitalWrite(3, HIGH); //cyan
  digitalWrite(6, LOW);
  digitalWrite(9, LOW); 
  delay(1000);

  digitalWrite(3, LOW); //white
  digitalWrite(6, LOW);
  digitalWrite(9, LOW); 
  delay(1000);
}