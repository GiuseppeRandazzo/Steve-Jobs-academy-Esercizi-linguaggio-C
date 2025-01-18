/* Creare un programma con quattro scelte:
1) disegna un quadrato pieno
2) disegna un quadrato vuoto
3) disegna un triangolo rettangolo pieno
4) disegna un quadrato semipieno (tipo bicchiere)

Il programma richiederà di inserire il lato

utilizzare la struttura switch */

#include <stdio.h>

void main(){
    int scelta;
    int i, j, lato;

    printf ("1) Disegna un quadrato pieno\n");
    printf ("2) Disegna un quadrato vuoto\n");
    printf ("3) Disegna un triangolo rettangolo pieno\n");
    printf ("4) Disegna un quadrato semipieno (tipo bicchiere\n");
    printf ("-------------------------------------------------\n");
    printf ("Inserisci scelta (da 1 a 4): ");
    scanf ("%d", &scelta);

    switch (scelta) {
        case 1: printf ("Disegna un quadrato pieno\n");
printf("\n");
                printf("Dammi la dimensione del lato:");
                scanf("%d", &lato);
printf("\n");
                for (i=0; i<lato; i++){
                    for(j=0; j<lato; j++){
                        printf("*");
                }
                printf ("\n");
}
                break;

        case 2: printf ("Disegna un quadrato vuoto\n");
printf("\n");
                printf ("Dammi la dimensione del lato:");
                scanf ("%d", &lato);
printf("\n");
                for(i=0; i<lato; i++){
                    for( j=0; j<lato; j++){
                        if (i==0 || i==lato-1 || j==0 || j==lato-1){
                            printf("*");
                        }else{  
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                break;

        case 3: printf ("Disegna un triangolo rettangolo pieno\n");
printf("\n");
                printf ("Dammi la dimensione del lato:");
                scanf ("%d", &lato);
printf("\n");
                for(i=0; i<lato; i++){
                    for(j=0; j<=i; j++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;

        case 4: printf ("Disegna un Quadrato semipieno(tipo bicchiere)\n");
printf("\n");
                printf ("Dammi la dimnsione del lato:");
                scanf ("%d", &lato);
printf("\n");
                for (i=0; i<lato; i++){
                    for (j=0; j<lato; j++){
                        if ( i > lato / 3 || i==0 || i==lato-1 || j==0 || j==lato-1){
                            printf("*");
                        } else {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                break;
        default: printf("Scelta ERRATA");}
    }
