//Daniel Oller / Roger Comas

#include "Freenove_WS2812_Lib_for_ESP32.h"
#define QUANTS_LEDS 144 // Constant que indica quants LEDs té la tira.
#define PIN_TIRA_LEDS 15 // Constant que indica el GPIO on tenim la tira.
#define CANAL 0 // Configuració del canal a 0 (no hi entrarem).
#define PIN_BOTO 14 // GPIO on tenim connectat el polsador de sortida.
Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(QUANTS_LEDS, PIN_TIRA_LEDS, CANAL, TYPE_GRB);

//Variable para saber si esta en rojo (0) o verde (1)
int luz = 0;
//Variable para saber la posición del jugador
int pos = 0;
//variable para saber si has perdido (1) o si sigues jugando (0)
int lose = 0;
//Variabel para saber si has ganado (1) o si sigues jugando (0)
int win = 0;
//Variable para almacenar el numero aleatorio
long randomNum;

void setup() 
{
    strip.begin();
    strip.setBrightness(100);
    strip.setAllLedsColorData(0, 0, 0);
    strip.show();
    pinMode(PIN_BOTO, INPUT_PULLUP);
    randomSeed(42);
}

//Función para poner los leds en rojo
void vermell()
{
    strip.setLedColorData(72, 255, 0, 0);
    strip.setLedColorData(73, 255, 0, 0);
    strip.setLedColorData(74, 255, 0, 0);
    strip.setLedColorData(75, 255, 0, 0);
    strip.setLedColorData(76, 255, 0, 0);
    strip.setLedColorData(77, 255, 0, 0);
    strip.setLedColorData(78, 255, 0, 0);
    strip.setLedColorData(79, 255, 0, 0);
    strip.setLedColorData(80, 255, 0, 0);
    strip.setLedColorData(81, 255, 0, 0);
    strip.setLedColorData(82, 255, 0, 0);
    strip.setLedColorData(83, 255, 0, 0);
    strip.setLedColorData(84, 255, 0, 0);
    strip.setLedColorData(85, 255, 0, 0);
    strip.setLedColorData(86, 255, 0, 0);
    strip.setLedColorData(87, 255, 0, 0);
    strip.setLedColorData(88, 255, 0, 0);
    strip.setLedColorData(89, 255, 0, 0);
    strip.setLedColorData(90, 255, 0, 0);
    strip.setLedColorData(91, 255, 0, 0);
    strip.setLedColorData(92, 255, 0, 0);
    strip.setLedColorData(93, 255, 0, 0);
    strip.setLedColorData(94, 255, 0, 0);
    strip.setLedColorData(95, 255, 0, 0);
    strip.setLedColorData(96, 255, 0, 0);
    strip.setLedColorData(97, 255, 0, 0);
    strip.setLedColorData(98, 255, 0, 0);
    strip.setLedColorData(99, 255, 0, 0);
    strip.setLedColorData(100, 255, 0, 0);
    strip.setLedColorData(101, 255, 0, 0);
    strip.setLedColorData(102, 255, 0, 0);
    strip.setLedColorData(103, 255, 0, 0);
    strip.setLedColorData(104, 255, 0, 0);
    strip.setLedColorData(105, 255, 0, 0);
    strip.setLedColorData(106, 255, 0, 0);
    strip.setLedColorData(107, 255, 0, 0);
    strip.setLedColorData(108, 255, 0, 0);
    strip.setLedColorData(109, 255, 0, 0);
    strip.setLedColorData(110, 255, 0, 0);
    strip.setLedColorData(111, 255, 0, 0);
    strip.setLedColorData(112, 255, 0, 0);
    strip.setLedColorData(113, 255, 0, 0);
    strip.setLedColorData(114, 255, 0, 0);
    strip.setLedColorData(115, 255, 0, 0);
    strip.setLedColorData(116, 255, 0, 0);
    strip.setLedColorData(117, 255, 0, 0);
    strip.setLedColorData(118, 255, 0, 0);
    strip.setLedColorData(119, 255, 0, 0);
    strip.setLedColorData(120, 255, 0, 0);
    strip.setLedColorData(121, 255, 0, 0);
    strip.setLedColorData(122, 255, 0, 0);
    strip.setLedColorData(123, 255, 0, 0);
    strip.setLedColorData(124, 255, 0, 0);
    strip.setLedColorData(125, 255, 0, 0);
    strip.setLedColorData(126, 255, 0, 0);
    strip.setLedColorData(127, 255, 0, 0);
    strip.setLedColorData(128, 255, 0, 0);
    strip.setLedColorData(129, 255, 0, 0);
    strip.setLedColorData(130, 255, 0, 0);
    strip.setLedColorData(131, 255, 0, 0);
    strip.setLedColorData(132, 255, 0, 0);
    strip.setLedColorData(133, 255, 0, 0);
    strip.setLedColorData(134, 255, 0, 0);
    strip.setLedColorData(135, 255, 0, 0);
    strip.setLedColorData(136, 255, 0, 0);
    strip.setLedColorData(137, 255, 0, 0);
    strip.setLedColorData(138, 255, 0, 0);
    strip.setLedColorData(139, 255, 0, 0);
    strip.setLedColorData(139, 255, 0, 0);
    strip.setLedColorData(139, 255, 0, 0);
    strip.setLedColorData(139, 255, 0, 0);
    strip.setLedColorData(139, 255, 0, 0);
    strip.setLedColorData(139, 255, 0, 0);
    strip.setLedColorData(140, 255, 0, 0);
    strip.setLedColorData(141, 255, 0, 0);
    strip.setLedColorData(142, 255, 0, 0);
    strip.setLedColorData(143, 255, 0, 0);
    strip.show();
    delay (300);
}

// Función para poner leds en verde
void verd()
{
    strip.setLedColorData(72, 0, 255, 0);
    strip.setLedColorData(73, 0, 255, 0);
    strip.setLedColorData(74, 0, 255, 0);
    strip.setLedColorData(75, 0, 255, 0);
    strip.setLedColorData(76, 0, 255, 0);
    strip.setLedColorData(77, 0, 255, 0);
    strip.setLedColorData(78, 0, 255, 0);
    strip.setLedColorData(79, 0, 255, 0);
    strip.setLedColorData(80, 0, 255, 0);
    strip.setLedColorData(81, 0, 255, 0);
    strip.setLedColorData(82, 0, 255, 0);
    strip.setLedColorData(83, 0, 255, 0);
    strip.setLedColorData(84, 0, 255, 0);
    strip.setLedColorData(85, 0, 255, 0);
    strip.setLedColorData(86, 0, 255, 0);
    strip.setLedColorData(87, 0, 255, 0);
    strip.setLedColorData(88, 0, 255, 0);
    strip.setLedColorData(89, 0, 255, 0);
    strip.setLedColorData(90, 0, 255, 0);
    strip.setLedColorData(91, 0, 255, 0);
    strip.setLedColorData(92, 0, 255, 0);
    strip.setLedColorData(93, 0, 255, 0);
    strip.setLedColorData(94, 0, 255, 0);
    strip.setLedColorData(95, 0, 255, 0);
    strip.setLedColorData(96, 0, 255, 0);
    strip.setLedColorData(97, 0, 255, 0);
    strip.setLedColorData(98, 0, 255, 0);
    strip.setLedColorData(99, 0, 255, 0);
    strip.setLedColorData(100, 0, 255, 0);
    strip.setLedColorData(101, 0, 255, 0);
    strip.setLedColorData(102, 0, 255, 0);
    strip.setLedColorData(103, 0, 255, 0);
    strip.setLedColorData(104, 0, 255, 0);
    strip.setLedColorData(105, 0, 255, 0);
    strip.setLedColorData(106, 0, 255, 0);
    strip.setLedColorData(107, 0, 255, 0);
    strip.setLedColorData(108, 0, 255, 0);
    strip.setLedColorData(109, 0, 255, 0);
    strip.setLedColorData(110, 0, 255, 0);
    strip.setLedColorData(111, 0, 255, 0);
    strip.setLedColorData(112, 0, 255, 0);
    strip.setLedColorData(113, 0, 255, 0);
    strip.setLedColorData(114, 0, 255, 0);
    strip.setLedColorData(115, 0, 255, 0);
    strip.setLedColorData(116, 0, 255, 0);
    strip.setLedColorData(117, 0, 255, 0);
    strip.setLedColorData(118, 0, 255, 0);
    strip.setLedColorData(119, 0, 255, 0);
    strip.setLedColorData(120, 0, 255, 0);
    strip.setLedColorData(121, 0, 255, 0);
    strip.setLedColorData(122, 0, 255, 0);
    strip.setLedColorData(123, 0, 255, 0);
    strip.setLedColorData(124, 0, 255, 0);
    strip.setLedColorData(125, 0, 255, 0);
    strip.setLedColorData(126, 0, 255, 0);
    strip.setLedColorData(127, 0, 255, 0);
    strip.setLedColorData(128, 0, 255, 0);
    strip.setLedColorData(129, 0, 255, 0);
    strip.setLedColorData(130, 0, 255, 0);
    strip.setLedColorData(131, 0, 255, 0);
    strip.setLedColorData(132, 0, 255, 0);
    strip.setLedColorData(133, 0, 255, 0);
    strip.setLedColorData(134, 0, 255, 0);
    strip.setLedColorData(135, 0, 255, 0);
    strip.setLedColorData(136, 0, 255, 0);
    strip.setLedColorData(137, 0, 255, 0);
    strip.setLedColorData(138, 0, 255, 0);
    strip.setLedColorData(139, 0, 255, 0);
    strip.setLedColorData(139, 0, 255, 0);
    strip.setLedColorData(139, 0, 255, 0);
    strip.setLedColorData(139, 0, 255, 0);
    strip.setLedColorData(139, 0, 255, 0);
    strip.setLedColorData(139, 0, 255, 0);
    strip.setLedColorData(140, 0, 255, 0);
    strip.setLedColorData(141, 0, 255, 0);
    strip.setLedColorData(142, 0, 255, 0);
    strip.setLedColorData(143, 0, 255, 0);
    strip.show();
    delay (300);
}

void loop() { 

    //Creamos el numero aleatorio entre 0 y 100 y lo guardamos el su respectiva variable.
    randomNum = random(0, 100);
    //Comprobamos si ha perdido el jugador.
    if (lose == 0)
    {
        //Funcions per a seleccionar un mode de llum segons el numero aleatori que ens doni.
        if (randomNum == 0)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 1)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 2)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 3)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 4)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 5)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 6)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 7)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 8)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 9)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 10)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 11)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 12)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 13)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 14)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 15)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 16)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 17)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 18)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 19)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 20)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 21)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 22)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 23)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 24)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 25)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 26)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 27)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 28)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 29)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 30)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 31)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 32)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 33)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 34)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 35)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 36)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 37)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 38)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 39)
        {
            verd();
            luz = 1;
        }

        if (randomNum == 40)
        {
            vermell();
            luz = 0;
        }

        if (randomNum == 41)
        {
            verd();
            luz = 1;
        }

        //Comprobem si el boto esta presionat.
        if (digitalRead(PIN_BOTO) == LOW) 
        {
            //Comprobamos que la posición del jugador no se pase del led numero 71.
            if (pos <= 71) 
            {
                //Comprobamos que la luz no este en rojo.
                if (luz == 0)
                {
                    //En caso de que la luz este en rojo, cambiamos el valor de lose a 1 de forma que activiariamos la animación de perder.
                    lose = 1;
                }
                // Encendemos el led de la posición del jugador.
                strip.setLedColorData(pos, 255, 255, 255);
                strip.show();
                //Sumamos 1 a la posición.
                pos = pos + 1;
            }

            // 
            if (pos >= 71)
            {
                //En caso que le jugador llegue al led numero 71, cambiamos el valor de win a 1 de forma que activariamos la animación de ganar.
                win = 1;
            }
            delay(250);
        }

        //Encendemos un led de color azul para marcar el objetivo del jugador.
        strip.setLedColorData(70, 0, 0, 255);
    }
    
    //Animación de perder.
    if (lose == 1)
    {
        for (int i = 0; i <= 255; i = i + 3) {
            for (int l = 0; l < QUANTS_LEDS; l = l + 1) {
                strip.setLedColorData(l, i, 0, 0);
            }
            strip.show();
            delay(5);
        }
        for (int i = 255; i >= 0; i = i - 3) {
            for (int l = 0; l < QUANTS_LEDS; l = l + 1) {
                strip.setLedColorData(l, i, 0, 0);
            }
            strip.show();
            delay(5);
        }
        strip.setAllLedsColorData(0, 0, 0);
        delay(100);
    }

    //Animación de ganar.
    if (win == 1)
    {
        for (int i = 0; i <= 255; i = i + 3) {
            for (int l = 0; l < QUANTS_LEDS; l = l + 1) {
                strip.setLedColorData(l, 0, i, 0);
            }
            strip.show();
            delay(5);
        }
        for (int i = 255; i >= 0; i = i - 3) {
            for (int l = 0; l < QUANTS_LEDS; l = l + 1) {
                strip.setLedColorData(l, 0, i, 0);
            }
            strip.show();
            delay(5);
        }
        strip.setAllLedsColorData(0, 0, 0);
        delay(100);
    }
}
