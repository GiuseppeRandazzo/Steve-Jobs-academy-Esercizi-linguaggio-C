/* Creare due matrici che contengono le tabelline una seguendo l'esempio dell'allegato 1 e l'altra seguendo l'esempio dell'allegato 2.

Il programma stamperà entrambe le due matrici */


#include <stdio.h>

int main() {

    // Matrice 1 (Allegato 1)
    printf("Matrice 1:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }

    printf("\n");

    // Matrice 2 (Allegato 2)
    printf("Matrice 2:\n");
    for (int i = 0; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%2d ", i * j + 1);
        }
        printf("\n");
    }

    return 0;  
}