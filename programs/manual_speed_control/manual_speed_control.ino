int potPin = A0;
int topRotorPin = 9;
int bottomRotorPin = 10;
int potValue = 0;
int motorValue = 0;
int motorCutoff = 50; //Idle speed ~70

void setup() {
 Serial.begin(38400);
}

void loop() {
 potValue = analogRead(potPin);  
 motorValue = map(potValue, 0, 1023, 0, 255);
 if(motorValue > motorCutoff) {
   analogWrite(topRotorPin, motorValue);
   analogWrite(bottomRotorPin, motorValue);
 } else {
   digitalWrite(topRotorPin, LOW);
   digitalWrite(bottomRotorPin, LOW);
 } 
 Serial.print("potentiometer = " );     
 Serial.print(potValue);
 Serial.print("\t motor = ");
 Serial.println(motorValue);
 delay(20); // ~50Hz 
}
