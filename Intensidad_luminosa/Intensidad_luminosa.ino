// Declaración de los pines.
int luminosidad = 0;
int led = 0;
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // Se incrementa el indice de luminosidad.
  for ( luminosidad = 0; luminosidad <= 255; luminosidad = luminosidad + 1) {
    analogRead(led, luminosidad);
    delay(30);
  }
   for ( luminosidad = 255; luminosidad => 0; luminosidad = luminosidad - 1) {
    analogRead(led, luminosidad);
    delay(30);
  }
}
}
