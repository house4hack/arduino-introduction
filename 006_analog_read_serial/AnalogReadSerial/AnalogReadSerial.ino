

int sensorPin = A5;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    

  Serial.println(sensorValue);

  // sleep 500 ms
  delay(500);          
             
}
