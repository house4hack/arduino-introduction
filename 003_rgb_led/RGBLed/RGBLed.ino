void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly: 
  analogWrite(9, random(255));
  analogWrite(10, random(255));
  analogWrite(11, random(255));
  delay(500);
  
}
