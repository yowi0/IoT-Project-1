//Daniel Oller, Roger Comas

#include "Freenove_WS2812_Lib_for_ESP32.h"
#define QUANTS_LEDS 49 // Nombre de LEDs que utilitzarem (aforament).
#define PIN_TIRA_LEDS 15 // Constant que indica el GPIO on tenim la tira.
#define CANAL 0 // Configuració del canal a 0 (no hi entrarem).
#define PIN_BOTO_ENTRADA 12 // GPIO on tenim connectat el polsador d'entrada.
#define PIN_BOTO_SORTIDA 14 // GPIO on tenim connectat el polsador de sortida.
Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(
 QUANTS_LEDS, PIN_TIRA_LEDS, CANAL, TYPE_GRB);
// Variable per representar l'ocupació actual (inicialment, l'ocupació ha de ser 0).
int ocupacio = 0;
// Variables per representar el color amb el qual s'encendran els LEDs segons l'ocupació.
// Amb l'ocupació a 0, inicialment, els primers LEDs s'hauran d'encendre de color verd.
int r = 0;
int g = 255;
int b = 0;
void setup() {
 // Inicialitzem els GPIOs dels botons.
 pinMode(PIN_BOTO_ENTRADA, INPUT_PULLUP);
 pinMode(PIN_BOTO_SORTIDA, INPUT_PULLUP);
 // Inicialitzem la tira de LEDs.
 strip.begin();
 strip.setBrightness(100);
 strip.setAllLedsColorData(0, 0, 0);
 strip.show();
 delay(10);
}
void loop() {
 // Comprovem si s'ha premut el botó d'entrada.
 if (digitalRead(PIN_BOTO_ENTRADA) == LOW) {
 if (ocupacio < QUANTS_LEDS) { // Si encara pot entrar gent,
 strip.setLedColorData(ocupacio, r, g, b); // actualitzem la tira de LEDs, i
 strip.show(); // sumem 1 a l'ocupació.
 ocupacio = ocupacio + 1;
 }
 delay(250);
 }
 // Comprovem si s'ha premut el botó de sortida.
 if (digitalRead(PIN_BOTO_SORTIDA) == LOW) {
 if (ocupacio > 0) { // Si queda gent dins el local,
 ocupacio = ocupacio - 1; // restem 1 a l'ocupació i
 strip.setLedColorData(ocupacio , 0, 0, 0); // actualitzem la tira de LEDs.
 strip.show();
 }
 delay(250);
 }
 // Determinació del color d'encesa dels LEDs en funció
 // del nivell d'ocupació del local.
 if (ocupacio >= 0 && ocupacio <= 20) {
 // Si l'ocupació està entre 0 i menor que 20, color verd.
 r = 0;
 g = 255;
 b = 0;
 }
 else if (ocupacio > 20 && ocupacio < 40) {
 // Si l'ocupació està entre 20 i menor que 40, color groc.
 r = 255;
 g = 255;
 b = 0;
 }
 else {
 // Altrament, color vermell.
 r = 255;
 g = 0;
 b = 0;
 }
}
