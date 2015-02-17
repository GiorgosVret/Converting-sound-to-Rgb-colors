# Converting-sound-to-Rgb-colors
Need some help with my project, yes i am a newbie. 
What do I do wrong?
I am using a Keyes sound sensor. 

int DO = 2 ; //digital
int DA = A0; //analog
int threshold = 532;
int sensorvalue = 0;
int redPin = 9;         
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  analogWrite(redPin, 255);       
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
}

void loop() {

  MicValue = analogRead(MicPin);  


  if (sensorvalue > 530) {    
    analogWrite(bluePin,0); 
    delay(15);              
    }
  
  if (sensorvalue > 540) {       
    analogWrite(bluePin,255); 
    analogWrite(greenPin, 0);
    delay(60);               
    }
  
  if (sensorvalue > 550) {        
    analogWrite(greenPin,255); 
    analogWrite(redPin, 0);
    delay(140);               
    }

analogWrite(greenPin, 255);    
analogWrite(redPin, 255);
analogWrite(bluePin,255);  

}
