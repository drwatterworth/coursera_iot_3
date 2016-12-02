
const int PHOTORESISTOR = 5; //pin to which output of photo-resistor voltage divider is connected

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int prvin; 
  prvin = analogRead(5); 
  Serial.println(prvin); 
  delay(1000);

}
