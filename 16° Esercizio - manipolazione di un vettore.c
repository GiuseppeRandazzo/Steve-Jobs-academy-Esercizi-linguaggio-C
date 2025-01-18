/*
Si definisca un valore N (numero pari). Dato un vettore di input N elementi preinizializzato il programma generarà tre vettori:
1) il primo vettore avrà i primi N/2 elementi del vettore scambiati con gli ultimi N/2 elementi del vettore .
    Ad esempio
    1 2 3 4 5 6 7 8 9 10  diventerà  6 7 8 9 10 1 2 3 4 5

2) Il secondo vettore sarà il vettore con gli elementi tutti ribaltati.
    Ad esempio:
    1 2 3 4 5 6 7 8 9 10  diventerà  10 9 8 7 6 5 4 3 2 1

3) Il terzo vettore negli elementi conterrà il valore 1 se il corrispondente elemento del vettore di input è pari, altrimenti conterrà 0
    Ad esempio:
    1 2 5 7 5 6 2 8 9 12  diventerà  0 1 0 0 0 1 1 1 0 1
*/

#include <stdio.h>
#define N 10
int main(){
    int i, vett1[N], vett2[N], vett3[N];
    int vett[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//1) Primo vettore:

    for(i=0; i<N/2; i++){
        vett1[i] = vett[N/2 + i];
        vett1[N/2 + i] = vett[i];
    }

//2) Secondo vettore:

    for(i=0; i<N; i++){
        vett2[i] = vett[N-1-i];
    } 

//3) Terzo vettore:

    for (i = 0; i < N; i++) {
        if (vett[i] % 2 == 0) {
            vett3[i] = 1;
        } else {
            vett3[i] = 0;
        }
    }

//Stampa dei vettori:

    printf("Vettore originale:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vett[i]);
    }
    printf("\n");

    printf("Primo vettore:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vett1[i]);
    }
    printf("\n");

    printf("Secondo vettore:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vett2[i]);
    }
    printf("\n");

    printf("Terzo vettore:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vett3[i]);
    }
    printf("\n");

    return 0;
}
