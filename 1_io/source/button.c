#include "button.h"
#include "gpio.h"

/* Fyll inn disse to */
#define BUTTON_A_PIN 17
#define BUTTON_B_PIN 26

void button_init(){
    GPIO->PIN_CNF[BUTTON_A_PIN] = 0;
    GPIO->PIN_CNF[BUTTON_B_PIN] = 0;
}

uint8_t button_a_pressed(){
    /* Fill me up with hot code */
    if(GPIO->IN & (1<<BUTTON_A_PIN)){
        return 0;
    }
    return 1;
}

uint8_t button_b_pressed(){
    /* Fill me up with hot code */
        if(GPIO->IN & (1<<BUTTON_B_PIN)){
        return 0;
    }
    return 1;
}

