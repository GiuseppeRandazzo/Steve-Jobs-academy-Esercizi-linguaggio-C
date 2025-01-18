/*
Dato il file di testo allegato, scrivere un programma in C in grado di sostituire la parola "alunni" con la parola "allievi" in tutto il file generando un nuovo file denominato articolo_giornale_new.txt
Non utilizzare la libreria string.h
*/

#include <stdio.h>

int main(){
    FILE *file_allegato, *articolo_giornale_new;
    char buffer[1000], buffer_out[1000];
    int i, j;

    // Apertura del file di input
    file_allegato = fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/articolo_giornale.txt", "r");
    if (file_allegato == NULL){
        printf("Impossibile trovare e aprire il file.\n");
        return 1;
    }

    // Apertura del file di output
    articolo_giornale_new = fopen("c:/users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/articolo_giornale_new.txt", "w");
    if(articolo_giornale_new == NULL){
        printf("Impossibile aprire il file.\n");
        fclose(file_allegato);
        return 1;
    }

    while (fgets(buffer, 1000, file_allegato) != NULL){
        i = 0;
        j = 0;
        while (buffer[i] != '\0'){
            if (i > 5 && buffer[i-5] == 'a' && buffer[i-4] == 'l' && buffer[i-3] == 'u' && buffer[i-2] == 'n' && buffer[i-1] == 'n' && buffer[i] == 'i'){
                buffer_out[j-5] = 'a';
                buffer_out[j-4] = 'l';
                buffer_out[j-3] = 'l';
                buffer_out[j-2] = 'i';
                buffer_out[j-1] = 'e';
                buffer_out[j] = 'v';
                buffer_out[j+1] = 'i';
                j += 2;
            } else {
                buffer_out[j] = buffer[i];
            }
            i++;
            j++;
        }
        buffer_out[j] = '\0';
        fputs(buffer_out, articolo_giornale_new);
    }

    // Chiusura dei file
    fclose(file_allegato);
    fclose(articolo_giornale_new);

    printf("Nuovo File creato con successo.\n");
    return 0;
}