void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long n = millis();
  digitalWrite(13, HIGH);
  Serial.print(n/1000);
  Serial.println(" sec have elapsed");
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
