int DA=A0;
int D0=2;
int threshold=530;
int redPin=9;
int greenPin=10;
int bluePin=11;
int sensorValue=0;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  sensorValue = analogRead(DA);
  if (sensorValue > threshold);{
    digitalWrite (redPin,0);
  }
  
  if (sensorValue > threshold + 10);{
    digitalWrite (redPin,255);
    digitalWrite (greenPin,0);
  }
  
  if (sensorValue > threshold + 20);{
    digitalWrite(greenPin,255);
    digitalWrite(bluePin,0);
  }
