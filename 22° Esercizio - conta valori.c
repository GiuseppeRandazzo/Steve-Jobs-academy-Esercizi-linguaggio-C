/*
Dato un vettore precaricato di 20 numeri interi che possono assumere valori da 0 a 9, scrivere un programma che restituisca per ogni valore le occorrenze presenti nel vettore. Il programma stamperà:
1)  per ogni valore 0 - 9 le occorrenze trovate nel vettore 
2)  se vengono individuati valori fuori range stamperà il numero di valori fuori range
*/

#include <stdio.h>
#define N 20

int main()
{
    int valori[N] = {1,2,2,4,5,6,6,8,9,10,1,5,3,8,4,5,7,9,8,11};
    int i, occorrenze[10] = {0}, fuori_range = 0;

    for(i = 0; i < N; i++){
        if (valori[i] >= 0 && valori[i] <= 9) {
            occorrenze[valori[i]]++; 
        } else {
            fuori_range++;
        }
        
    } if (valori[i] < 0 || valori[i] > 9){
            fuori_range++;
        } else {
            occorrenze[valori[i]]++;
        }

//Stampa occorrenze.

    for(i = 0; i < 10; i++){
        printf("Il valore %d ha occorrenze di %d volte\n", i, occorrenze[i]);
    }

//Stampa valori fuori range.

    if (fuori_range > 0){
        printf("Sono stati trovati %d valori fuori range\n", fuori_range);
    }
    else {
        printf("Non vi sono valori fuori range\n");
    }

    return 0;
}