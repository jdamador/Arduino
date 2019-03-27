int led = 13;
int ldr = 11;
int luz = 0;
void setup() {
  pinMode(9, OUTPUT); Serial.begin(9600);
} void monitoriza() {
  Serial.print("El valor de luz es ...");
  Serial.println(luz);
  delay(1000);
}
void loop() {
  luz = analogRead(ldr); monitoriza();
  if (luz < 512 && luz >= 0) {
    analogWrite(led, 255);
  }
  if (luz >= 512 && luz <= 1024) {
    analogWrite(led, 64);
  }
}
