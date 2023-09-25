

const int buttonPin = 2;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  
    
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    Serial.println("1");    //RUN
  } else {
    //Serial.println("");    //STOP
    delay(1);
  }
  
  delay(1000);
}
