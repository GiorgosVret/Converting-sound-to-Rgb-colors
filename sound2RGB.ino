//int DO = 2; You do not use any Do variable somewhere
int micInput = A0;
//int DA = A0; //analog //Neither any DA
int sensorValue; //You do not need to initialize the variable.
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
void setup() {
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
// analogWrite(redPin, 255); You don't need any analogs for RGB, inside setup
// analogWrite(greenPin, 255);
// analogWrite(bluePin, 255);
}
void loop() {
sensorValue = analogRead(micInput);
if (sensorValue > 530) {
setColor(0,0,255); //blue
delay(15);
}
if (sensorValue > 540) {
setColor(0,255,0);
delay(60);
}
if (sensorValue > 550) {
setColor(255,0,0);
delay(140);
}
}
//create a color setting function in order to avoid to much code
void setColor(int redValue, int greenValue, int blueValue) {
analogWrite(redPin, redValue);
analogWrite(greenPin, greenValue);
analogWrite(bluePin, blueValue);
}
