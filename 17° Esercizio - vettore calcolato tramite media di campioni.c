/*
Dato un vettore precaricato di 10 elementi (si usi il #define N 10) si vuole generare il vettore calcolato come segue:
ogni elemento del vettore calcolato è la media i 5 elementi
l’elemento i-esimo è dato dalla media dei seguenti 5 elementi: vett[i-2] vett[i-1] vett[i] vett[i+1] vett[i+2]
gli elementi che sono fuori dal vettore sono da considerarsi nulli
Si pensi il programma per N generico
In allegato esempio di calcolo
*/
#include<stdio.h>
#define N 10

int main(){
    int vett[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float vett_calcolato[N];
    int i;

    for(i = 0; i < N; i++){
        if(i == 0 || i == 1 || i == N-1 || i == N-2){
            vett_calcolato[i] = 0;
        }else{
            vett_calcolato[i] = (vett[i-2] + vett[i-1] + vett[i] + vett[i+1] + vett[i+2]) / 5.0;
        }
    }

    for(i = 0; i < N; i++){
        printf("vett_calcolato[%d] = %.2f\n", i, vett_calcolato[i]);
    }

    return 0;
}