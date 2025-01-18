/*
Scrivere un programma in C che interpreti i numeri a 4 cifre contenuti nel file numeri.txt e li trasformi in valori decimali stampandoli a video.
*/

#include<stdio.h>

int main(){
    FILE *file;
    char buffer[100];
    int temp;

    file=(fopen("c:/Users/giuse/OneDrive/Desktop/ITSSteveJobs/Esercizi_Informatica/Esercizi_in_C_Svolti/numeri.txt", "r"));
    if(file==NULL){
        printf("Impossibile aprire e leggere il file.\n");
        return 1;
    }

    while(fgets(buffer,100,file)!=NULL){
        printf("La stringa \x8a: %s\n",buffer);
        temp=(buffer[0]-48)+1000+(buffer[1]-48)*100+(buffer[2]-48)*10+(buffer[3]-48);
        printf("Il valore \x8a: %d\n",temp);
    }

    fclose(file);
    return 0;
}
