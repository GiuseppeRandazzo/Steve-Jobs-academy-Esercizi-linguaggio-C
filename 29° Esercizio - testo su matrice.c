/*
Dato il file "articolo_giornale.txt" ricopiare le prime 30 parole su una matrice 30x50 di char. Le parole vano ricopiate una per riga e vanno memorizzate in formato stringa.
Il programma infine stamperà le stringhe (una per riga) memorizzate nella matrice
*/

#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main(){
    FILE *file;
    char stringa[50];
    char mx[30][50];
    int i, j;

    file = fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/articolo_giornale.txt", "r");
    if(file == NULL){
        printf("Impossibile aprire e leggere il file\n");
        return 1;
    }

    i = 0;
    while(i < 30 && fscanf(file, "%s", stringa) != EOF){
        my_strcpy(mx[i], stringa);
        i++;
    }

    for(j = 0; j < i; j++){
        printf("%s\n", mx[j]);
    }

    fclose(file);
    return 0;
}