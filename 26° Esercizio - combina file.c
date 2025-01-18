/*
Un file di testo contiene un elenco di nomi
Un altro file di testo contiene il rispettivo elenco di cognomi

Scrivere un programma n C in grado di generare un altro file di testo contenente l'elenco di Nomi e Cognomi (un nominativo per riga)
*/

#include <stdio.h>

int main() {
    FILE *filenomi, *filecognomi, *filenomiecognomi;
    char buffernomi[100], buffercognomi[100];

    // Apertura dei file di input
    filenomi = fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/Nomi.txt", "r");
    filecognomi = fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/Cognomi.txt", "r");
    if (filenomi == NULL || filecognomi == NULL) {
        printf("Impossibile aprire e leggere i file.\n");
        return 1;
    }

    // Apertura del file di output
    filenomiecognomi = fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/nomiecognomi.txt", "w");
    if (filenomiecognomi == NULL) {
        printf("Impossibile aprire il file.\n");
        return 1;
    }

    // Scrittura dei dati nei file di output
    while (fgets(buffernomi, 100, filenomi) && fgets(buffercognomi, 100, filecognomi)) {
        fprintf(filenomiecognomi, "%s %s\n", buffernomi, buffercognomi);
    }

    // Chiusura dei file
    fclose(filenomi);
    fclose(filecognomi);
    fclose(filenomiecognomi);

    printf("File creato con successo.\n");

    return 0;
}