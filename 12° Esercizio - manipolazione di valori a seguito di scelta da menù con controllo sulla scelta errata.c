/* Scrivere un programma in C che presenti il seguente menù:
1) Calcolare la media di due valori
2) Scambiare i due valori memorizzati nelle variabili
3) Dati i due valori dei cateti di un triangolo rettangolo, calcolare il valore dell'ipotenusa 
4) Dati due valori verificare se sono uguali altrimenti indicare il maggiore dei due
Se la scelta è errata si ripresenta il menù
L'operatore sceglierà le voci di menù e successivamente il programma richiederà i due valori per potere effettuare i calcoli */

#include <stdio.h>
#include <math.h>

void main () {
    int a, b, scelta, swap;
    double ipotenusa, media;

    printf("1) Calcolare la media di due valori\n");
    printf("2) Scambiare i due valori memorizzati nelle variabili\n");
    printf("3) Dati i due valori dei cateti di un triangolo rettangolo, calcolare il valore dell'ipotenusa\n");
    printf("4) Dati due valori verificare se sono uguali altrimenti indicare il maggiore dei due\n");
    printf("Che operazione vuoi fare? ");
    scanf("%d", &scelta);

    do {
        switch (scelta) {
        case 1:
                printf("Dammi il valore di a: \n", a);
                scanf("%d", &a);
                printf("Dammi il valore di b: \n", b);
                scanf("%d", &b);
        media = (double) (a+b) / 2;
        printf("La media dei due valori e': %lf\n", media);
        break;

        case 2:
                printf("Dammi il valore di a: \n", a);
                scanf("%d", &a);
                printf("Dammi il valore di b: \n", b);
                scanf("%d", &b);
        swap = a;
        a = b;
        b = swap;
        printf("Il valore di a e': ", a);
        scanf("%d", &a);
        printf("Il valore di b e': ", b);
        scanf("%d", &b);
        break;

        case 3:
                printf("Dammi il valore di a: ", a);
                scanf("%d", &a);
                printf("Dammi il valore di b: ", b);
                scanf("%d", &b);
        ipotenusa = sqrt( pow( a, b ) + pow( b, a ) );
        printf ("Il valore dell'ipotenusa e': %lf\n", ipotenusa);
        break;

        case 4:
                printf("Dammi il valore di a: ", a);
                scanf("%d", &a);
                printf("Dammi il valore di b: ", b);
                scanf("%d", &b);
        if (a == b) {
            printf ("I valori a e b sono uguali\n");
        } else {
            if ( a > b) {
                printf ("%d ha il valore maggiore\n", a);
            } else {
                printf ("%d ha il valore maggiore\n", b);
            }
        }
            break;

        default: printf("Scelta ERRATA\n");
        }

        printf("\n");
        
    } while (scelta < 1 || scelta > 4);
}