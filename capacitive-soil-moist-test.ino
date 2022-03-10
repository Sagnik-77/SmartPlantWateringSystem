const int d = 568;
const int w = 239;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);
  // put your main code here, to run repeatedly:
  int percentageHumidity = map(sensorVal,w,d,100,0);
  
  Serial.print(percentageHumidity);
  Serial.println("%");
  
  delay(100);
}