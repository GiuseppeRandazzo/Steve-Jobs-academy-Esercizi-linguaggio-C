/*
Data una stringa prefissata creare una funzione che conta le parole considerando le seguenti eccezioni:
1) la stringa può contenere spazi multipli
2) la stringa può avere uno spazio iniziale
3) la stringa può avere lunghezza nulla
4) la striga può avere spazi in coda
*/

#include <stdio.h>
#define MAXSTR 100

int main (){
    char s [MAXSTR] = " devo assolutamente    ricordarmi di  fare  la spesa ";
    int i , contatore;

    printf("\n");

    printf("La stringa iniziale \x8a: %s\n", s);

    printf("\n");

    i = 0;
    contatore = 0;
    while(s[i]!='\0'){
        if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\0')){
            contatore++;
        }
        i++;
    }

    printf("Il numero di parole all'interno della tua stringa \x8a: %d\n", contatore);
    printf("\n");

    return 0;
}