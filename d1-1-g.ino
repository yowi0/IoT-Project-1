// Daniel Oller, Roger Comas

// Definim les constants corresponents als GPIOs on tenim connectats els LEDs.
#define LED_VERMELL 13
#define LED_GROC 12
#define LED_VERD 14

void setup() 
{
 // Inicialitzem els pins que controlen els LEDs com a GPIOs de sortida.
 pinMode(LED_VERMELL, OUTPUT);
 pinMode(LED_GROC, OUTPUT);
 pinMode(LED_VERD, OUTPUT);
}
void loop() 
{
 // Seqüència de passos del semàfor.
 // Encenem el verd, apaguem la resta i esperem 10 segons.
 digitalWrite(LED_VERMELL, LOW);
 digitalWrite(LED_GROC, LOW);
 digitalWrite(LED_VERD, HIGH);
 delay(10000);

 // Encenem el groc, apaguem el verd i esperem 3 segons.
 digitalWrite(LED_GROC, HIGH);
 digitalWrite(LED_VERD, LOW);
 delay(3000);

 // Encenem el vermell, apaguem el groc i esperem 10 segons.
 digitalWrite(LED_VERMELL, HIGH);
 digitalWrite(LED_GROC, LOW);
 delay(10000);

 // Encenem el groc i esperem 3 segons.
 digitalWrite(LED_GROC, HIGH);
 delay(3000);
}