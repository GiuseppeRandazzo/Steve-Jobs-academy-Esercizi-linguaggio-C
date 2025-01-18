/* 
Si dichiarino due vettori VETT1 e VETT2 di numeri interi di 4 elementi. 

Il programma
dovrà restituire a video:
1)      il   VETT3 = VETT1+VETT2
2)      il   valore del prodotto scalare VETT1*VETT2

Si ricorda
che in geometria analitica, dati due vettori
a = [a1, a2, …, an] e b = [b1, b2, …, bn],
di definisce prodotto scalare: a * b = a1b1 + a2b2 + … + anbn.
*/

#include <stdio.h>
#define N 4

int main() {
    int i;
    int vett1[N] = {1, 2, 3, 4}; 
    int vett2[N] = {5, 6, 7, 8}; 
    int vett3[N];
    int prodotto_scalare = 0;

    // Calcolo di VETT3 = VETT1 + VETT2
    for (i = 0; i < N; i++) {
        vett3[i] = vett1[i] + vett2[i];
    }

    // Calcolo del prodotto scalare VETT1 * VETT2
    for (i = 0; i < N; i++) {
        prodotto_scalare += vett1[i] * vett2[i];
    }

    // Stampa dei risultati
    printf("VETT1: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vett1[i]);
    }
    printf("\n");

    printf("VETT2: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vett2[i]);
    }
    printf("\n");

    printf("VETT3 (VETT1 + VETT2): ");
    for (i = 0; i < N; i++) {
        printf("%d ", vett3[i]);
    }
    printf("\n");

    printf("Prodotto scalare (VETT1 * VETT2): %d\n", prodotto_scalare);

    return 0;
}