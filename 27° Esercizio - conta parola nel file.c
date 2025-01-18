/*
Dato il file allegato "articolo_giornale.txt", scrivere un programma in C che restituisca il numero di occorrenze della parola "alunni" nel file.
Proporre una soluzione senza l'uso della libreria string.h
*/

#include <stdio.h>

int main() {
    FILE *file;
    char c;
    int count = 0;

    file = fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/articolo_giornale.txt", "r");
    if (file == NULL) {
        printf("Impossibile trovare e aprire il file.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == 'a' && fgetc(file) == 'l' && fgetc(file) == 'u' && fgetc(file) == 'n' && fgetc(file) == 'n' && fgetc(file) == 'i') {
            count++;
        }
    }

    printf("Il numero di occorrenze della parola 'alunni' all'interno del file \x8a: %d\n", count);

    fclose(file);

    return 0;
}