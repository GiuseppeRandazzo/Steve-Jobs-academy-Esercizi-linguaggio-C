/* Utilizzando il ciclo FOR richiedere all'utente l'immissione di 8 numeri interi.
Il programma alla fine restituirà il valore del più piccolo e del più grande. */

#include <stdio.h>

void main(){
    int massimo, minimo, i, num;
    
    for(i=0; i<8; i++){
        printf("Inserisci un numero: ", i+1);
        scanf("%d", &num);

    if (i==0){
        massimo = num;
        minimo = num;
    }
    else{
        if (massimo<num){
            massimo = num;
        }
        if (minimo>num){
            minimo = num;
        }
    }
    }

    printf("Il massimo \x8a %d e il minimo \x8a %d", massimo, minimo);
}