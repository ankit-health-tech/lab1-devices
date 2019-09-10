int ledPin = 9;          

void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
 
  digitalWrite(ledPin, HIGH);  
  delay(600);                       
  digitalWrite(ledPin, LOW);  
  delay(400);

}
