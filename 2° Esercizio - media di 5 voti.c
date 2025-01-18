/* Il programma deve richiedere l'introduzione di 5 voti di tipo intero e restituire la media matematica */

#include <stdio.h>

void main() {
    int voto1, voto2, voto3, voto4, voto5;
    float media; 

    printf("Inserisci il primo voto: ");
    scanf("%d", &voto1);
    printf("Inserisci il secondo voto:");
    scanf("%d", &voto2);
    printf("Inserisci il terzo voto: ");
    scanf("%d", &voto3);
    printf("Inserisci il quarto voto: ");
    scanf("%d", &voto4);
    printf("Inserisci il quinto voto: ");        
    scanf("%d", &voto5);

    media = (voto1 + voto2 + voto3 + voto4 + voto5) / 5.0;
    printf("La media dei voti e': %.1f\n", media);

}