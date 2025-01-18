/*
Scrivere un programma che utilizzi le funzioni per il calcolo della media, del minino e del massimo. 
Il programma chiederà di inserire 5 valori che verranno memorizzati in un vettore.
Successivamente verrà proposto il seguente menù:

1) Calcola Media
2) Calcola Minino
3) Calcola Massimo
4) Esci

Effettuando la scelta il programma richiamerà la funzione relativa e stamperà il risultato e ripresenterà il menù
*/

#include <stdio.h>
#include <math.h>
#define N 5

int main() {
    int scelta, i, vett[N];
    float media;
    int minimo, massimo;

    // Inserimento dei valori nel vettore
    printf("Inserisci 5 valori interi:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vett[i]);
    }

    do {
        printf("1) Calcola Media\n");
        printf("2) Calcola Minimo\n");
        printf("3) Calcola Massimo\n");
        printf("4) Esci\n");
        printf("\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                media = 0;
                for (i = 0; i < 5; i++) {
                    media += vett[i];
                }
                media /= 5;
                printf("\n");
                printf("La media \x8a: %.2f\n", media);
                printf("\n");
                break;

            case 2:
                minimo = vett[0];
                for (i = 1; i < 5; i++) {
                    if (vett[i] < minimo) {
                        minimo = vett[i];
                    }
                }
                printf("\n");
                printf("Il minimo \x8a: %d\n", minimo);
                printf("\n");
                break;

            case 3:
                massimo = vett[0];
                for (i = 1; i < 5; i++) {
                    if (vett[i] > massimo) {
                        massimo = vett[i];
                    }
                }
                printf("\n");
                printf("Il massimo \x8a: %d\n", massimo);
                printf("\n");
                break;

            case 4:
                printf("\n");
                break;

            default:
                printf("\n");
                printf("Scelta non valida.\n");
                printf("\n");
                break;
        }
    } while (scelta != 4);

    return 0;
}