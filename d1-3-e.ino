#define P_LED_VERMELL 13
#define P_LED_GROC 12
#define P_LED_VERD 14
#define S_LED_VERD 5
#define S_LED_VERMELL 4
#define PLUG 33

void setup() 
{
    pinMode(P_LED_VERD, OUTPUT);
    pinMode(P_LED_GROC, OUTPUT);
    pinMode(P_LED_VERMELL, OUTPUT);
    pinMode(S_LED_VERD, OUTPUT);
    pinMode(S_LED_VERMELL, OUTPUT);
    pinMode(PLUG, INPUT_PULLUP);
}
void loop() 
{
    if (digitalRead(PLUG) == LOW)
    {
        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// B //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo principal. Apagar led verde.
        digitalWrite(P_LED_VERD, LOW);

        //Semaforo principal. Encender led amarillo.
        digitalWrite(P_LED_GROC, HIGH);

        //Esperar 3 segundos.
        delay(3000);


        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// C //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo principal. Apagar led amarillo.
        digitalWrite(P_LED_GROC, LOW);

        //Semaforo principal. Encender led rojo.
        digitalWrite(P_LED_VERMELL, HIGH);

        //Esperar 3 segundos.
        delay(3000);


        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// D //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo secundario. Apagar led rojo.
        digitalWrite(S_LED_VERMELL, LOW);

        //Semaforo secundario. Encender led verde.
        digitalWrite(S_LED_VERD, HIGH);

        //Esperar 10 segundos
        delay(10000);


        //Bucle for que se ejecuta 5 veces
        for (int i = 1; i < 5; i = i + 3) 
        {
            ///////////////////////////////////////////////////////////////////////////////
            ///////////////////////////// E //////////////////////////////////////////////
            /////////////////////////////////////////////////////////////////////////////
            //Semaforo secundario. Apagar led rojo.
            digitalWrite(S_LED_VERD, LOW);

            delay(500);


            ///////////////////////////////////////////////////////////////////////////////
            ///////////////////////////// F //////////////////////////////////////////////
            /////////////////////////////////////////////////////////////////////////////
            //Semaforo secundario. Encender led verde.
            digitalWrite(S_LED_VERD, HIGH);

            delay(500);
        }


        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// G //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo secundario. Apagar leds verdes.
        digitalWrite(S_LED_VERD, LOW);

        delay(500);


        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// H //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo secundario. Encender led rojo.
        digitalWrite(S_LED_VERMELL, HIGH);

        delay(2000);


        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// I //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo principal. Encender led amarillo.
        digitalWrite(P_LED_GROC, HIGH);

        delay(3000);
    }
    else 
    {
        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// A //////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////
        //Semaforo principal. Led verde.
        digitalWrite(P_LED_VERD, HIGH);

        //Semaforo principal. Apagar led amarillo.
        digitalWrite(P_LED_GROC, LOW);

        //Semaforo principal. Apagar led rojo.
        digitalWrite(P_LED_VERMELL, LOW);

        //Semaforo secundario. Encender led rojo.
        digitalWrite(S_LED_VERMELL, HIGH);

        //Esperar 0,1 segundos.
        delay(100);
    }
}
