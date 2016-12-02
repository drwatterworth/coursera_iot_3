// This program controls a LED by sensing light through a photo-resistor. 
// After some testing, it was found that, in this circuit, the resistor circuit
// output values from about 70 (no light) to 500 or so full light. 
// I chose to turn the LED on when the value was below a threshold of 150. 
// This circuit does not use 'fading' but that could be incorporated. The 
// assignment required only that the LED be turned on when a certain level (not specified)
// of darkness was sensed. 
// 
const int LED = 12; 
const int PHOTORESISTOR = 5; //a5 
const int THRESHOLD = 150; // for my setup 
const int DELAY = 100; 
int ledstate = LOW; 

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); 
  //Serial.begin(9600); // to use serial monitor tool to debug/test output of photoresitor circuit initially

}

void loop() {
  // put your main code here, to run repeatedly:
  int prvin; // photo resitor circuit input 
  
  
  digitalWrite(LED, ledstate); 
  prvin = analogRead(PHOTORESISTOR); 
  //testing only, output prvin value to serial monitor
  //Serial.print("prvin = "); 
  //Serial.println(prvin);
  if (prvin < THRESHOLD) {
    ledstate = HIGH;
  } else {
    ledstate = LOW; 
  }
  delay(DELAY); 
}
