int xAxis = A0;
int yAxis = A1;
int zAxis = A2;
int axisValue = 0;

void setup() {
  Serial.begin(38400);
  Serial.println("Starting up");
}

void loop() {
  axisValue = analogRead(xAxis);    
  Serial.print("X=");
  Serial.print(axisValue);
  
  axisValue = analogRead(yAxis);    
  Serial.print(",Y=");
  Serial.print(axisValue);
  
  axisValue = analogRead(zAxis);    
  Serial.print(",Z=");
  Serial.println(axisValue);
  
  delay(200);                 
}
