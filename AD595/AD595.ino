void setup(){
  Serial.begin(9600);
}

float temp;
void loop(){
  temp = analogRead(1) * 0.00488759 * 100;
  Serial.println(temp);
  delay(500);
}
