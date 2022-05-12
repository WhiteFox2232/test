#include <Arduino.h>
#include "arduino.h"

const int brLED1 = 8;
const int brINT1 = 7;
int etatINT1;

const int brLED2 = 13;
const int brINT2 = 12;
int etatINT2;

const int brLED3 = 4;
const int brINT3 = 2;
int etatINT3;

const int brLED4 = 11;
const int brINT4 = 10;
int etatINT4;

const int brLED5 = 6;
const int brINT5 = 5;
int etatINT5;

void setup(){

    pinMode (brLED1, OUTPUT);
    pinMode(brINT1,INPUT);

    pinMode(brLED2, OUTPUT);
    pinMode(brINT2, INPUT);

    pinMode (brLED3, OUTPUT);
    pinMode(brINT3,INPUT);

    pinMode (brLED4, OUTPUT);
    pinMode(brINT4,INPUT);

    pinMode (brLED5, OUTPUT);
    pinMode(brINT5,INPUT);

}

void loop(){

    etatINT1 = digitalRead(brINT1);
    etatINT2 = digitalRead(brINT2);
    etatINT3 = digitalRead(brINT3);
    etatINT4 = digitalRead(brINT4);
    etatINT5 = digitalRead(brINT5);

    int etatGlobal = 0;
    if(etatINT1 = HIGH){
        etatGlobal = 1;
    } else if(etatINT2 = HIGH){
        etatGlobal = 2;
    } else if(etatINT3 = HIGH){
        etatGlobal = 3;
    } else if(etatINT4 = HIGH){
        etatGlobal = 4;
    } else if(etatINT5 = HIGH){
        etatGlobal = 5;
    }

    switch(etatGlobal){
        case 1:
            digitalWrite (brLED1, HIGH) ;
            delay (2000) ;
            digitalWrite (brLED1, LOW) ;
            break;
        case 2:
            digitalWrite (brLED2, HIGH) ;
            delay (2000) ;
            digitalWrite (brLED2, LOW) ;
            break;
        case 3:
            digitalWrite (brLED3, HIGH) ;
            delay (2000) ;
            digitalWrite (brLED3, LOW) ;
            break;
        case 4:
            digitalWrite (brLED4, HIGH) ;
            delay (2000) ;
            digitalWrite (brLED4, LOW) ;
            break;
        case 5:
            digitalWrite (brLED5, HIGH) ;
            delay (2000) ;
            digitalWrite (brLED5, LOW) ;
            break;
    }

}