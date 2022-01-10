// Incloem (diem que farem servir) la llibreria de gestió de la tira de LEDs.
#include "Freenove_WS2812_Lib_for_ESP32.h"

#define QUANTS_LEDS 152 // Constant que indica quants LEDs té la tira.
#define PIN_TIRA_LEDS 15 // Constant que indica el GPIO on tenim la tira.
#define CANAL 0 // Configuració del canal a 0 (no hi entrarem).

#define R 169 // Constant per indicar la quantitat de vermell del color.
#define G 0 // Constant per indicar la quantitat de verd del color.
#define B 0 // Constant per indicar la quantitat de blau del color.

// Creem una variable que ens permetrà interactuar amb la tira de LEDs,
// configurada segons els paràmetres que s'indiquen.
Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(
 QUANTS_LEDS, PIN_TIRA_LEDS, CANAL, TYPE_GRB);

int randomNum = 5;

void setup() {
 // Inicialitzem la tira de LEDs.
 strip.begin();
 strip.setBrightness(255);
 strip.setAllLedsColorData(0, 0, 0);
 strip.show();
}

void loop() {
    for (int posicio = 0; posicio < QUANTS_LEDS; posicio++) 
    {
        // Primer LED, apagat.
        strip.setLedColorData(posicio+0, 0, 0, 0);
        // 2n i 3r LEDs, color R-G-B de molt baixa intensitat.
        // Dividim per 25 cadascuna de les tres components.
        strip.setLedColorData(posicio+1, R/25, G/25, B/25);
        strip.setLedColorData(posicio+2, R/25, G/25, B/25);
        // 4t i 5è LEDs, color R-G-B de baixa intensitat.
        // Dividim per 10 cadascuna de les tres components.
        strip.setLedColorData(posicio+3, R/10, G/10, B/10);
        strip.setLedColorData(posicio+4, R/10, G/10, B/10);
        // 6è i 7è LEDs, color R-G-B de mitjana intensitat.
        // Dividim per 5 cadascuna de les tres components.
        strip.setLedColorData(posicio+5, R/5, G/5, B/5);
        strip.setLedColorData(posicio+6, R/5, G/5, B/5);
        // 8è i 9è LEDs, color R-G-B d'alta intensitat.
        // Dividim per 2 cadascuna de les tres components.
        strip.setLedColorData(posicio+7, R/2, G/2, B/2);
        strip.setLedColorData(posicio+8, R/2, G/2, B/2);
        // 10è i 11è LEDs, color R-G-B de molt alta intensitat.
        // Sense dividir: intensitat màxima.
        strip.setLedColorData(posicio+9, R, G, B);
        strip.setLedColorData(posicio+10, R, G, B);
        // 12è LED, color blanc.
        strip.setLedColorData(posicio+11, 255, 255, 255);
        // Fem que es mostri i realitzem una petita pausa.
        strip.show();
        delay(randomNum);
    }
    randomNum = random(5, 20);

    for (int i = 0; i <= 169; i = i + 10) {
        int col = i;
        for (int i = 144; i <= 152; i = i + 1)
        {
            strip.setLedColorData(i, col, 0, 0);
        }
        strip.show();
        delay(5);
    }

    for (int i = 169; i >= 0; i = i - 1) {
        int col = i;
        for (int i = 144; i <= 152; i = i + 1)
        {
            strip.setLedColorData(i, col, 0, 0);
        }
        strip.show();
        delay(5);
    }

    // Esperem entre mig segon i 2 segons abans de tornar a començar.
    delay(random(500, 2001));
}
