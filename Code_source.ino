
int counter;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
for (counter = 0; counter < 10; ++counter) {
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  delay(5000); // attendre 5 secondes
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  delay(2000); // attendre 2 secondes
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(5000); // attendre 5 secondes
  
  }
}