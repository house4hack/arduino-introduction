

int sensorPin = A5;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor


void setup() {
  //Serial.begin(9600);
}


void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  
  //Serial.println(sensorValue);
  
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  
  if(sensorValue  < 330) {
    analogWrite(9, 0);
  } else if (sensorValue < 660) {
    analogWrite(10, 0);
  } else {
    analogWrite(11, 0);
  }
 
      
             
}
