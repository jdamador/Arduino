// Declaración de pines.
int zumbador=10;
int pulsador=11;
int leds[]={5,6,7,8,9};
// Variable para recorrer el array.
int n=0;
int tiempo=200;

void setup (){
  // Establecer los pines de los leds como salida.
  for(n=0;n<5;n++) {
  	pinMode(leds[n],OUTPUT); 
  }
  // Pin zumbador como salida.
  pinMode(zumbador,OUTPUT);
  // Pin pulsador como entrada.
  pinMode(pulsador,INPUT); 
}
// Función para comprobar si se acerto.
void compruebaacierto(){
  // Si hay pulsación y esta en el led del pin 7.
  if(digitalRead(pulsador)==HIGH && n==2) {
  	digitalWrite(zumbador,HIGH); // Sonar.
  	delay (1000); // Esperar un segundo.
  	digitalWrite(zumbador,LOW); // Apagar. 
  	tiempo=tiempo-20; // Aumentar la velocidad.
    
    // Reiniciar el tiempo si esta por debajo de 10ms.
    if(tiempo<10){
    	tiempo=200;
    } 
  }
}

void loop () {
  // Recorrer los leds par ir encendiendolos uno a uno.
  for(n=0;n<5;n++) {
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    compruebaacierto();
    digitalWrite(leds[n],LOW);
    delay(tiempo); 
  }
 }