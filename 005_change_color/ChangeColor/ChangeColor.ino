

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 13;     // the number of the pushbutton pin


// variables will change:
int prevButtonState = 0;         // variable for reading the pushbutton status
int mode = 0;


void setup() { 
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  
  Serial.begin(9600);
}

void loop(){
  

  
  // read the state of the pushbutton value:
  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  
  if(prevButtonState != buttonState) {
    if(buttonState == 1) {
      mode ++;
      if(mode == 3) {
        mode = 0;
      }
    }
  }
  
  prevButtonState = buttonState;
  
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  
  
  if(mode == 0) {
    analogWrite(9, 0);
  } else if (mode == 1) {
    analogWrite(10, 0);
  } else if( mode == 2) {
    analogWrite(11, 0);
  }
  
}
