// Interactive Mood Lamp

int red, green, blue;
int RedPin = 11;
int GreenPin = 6;
int BluePin = 9;
int potPin = A0;
int potValue = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 potValue = analogRead(potPin);

 red = map(potValue, 0, 1023, 255, 0);
 green = map(potValue, 400, 700, 0, 255);
 blue = map(potValue, 0, 1023, 0, 128);
 
 analogWrite (RedPin, red);
 analogWrite (GreenPin, green);
 analogWrite (BluePin, blue);
 delay(100);
 
 Serial.println(potValue);
}
