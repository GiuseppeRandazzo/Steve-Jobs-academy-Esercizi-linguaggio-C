/*
Data una stringa di testo predefinita (anche con spazi multipli, e anche con spazi iniziali e finali) scrivere un programma in C in grado di stampare le singole parole individuate nella stringa, una per ogni riga. 
Esempio "Facciamo insieme questo esercizio" stamperà:
Facciamo
insieme
questo
esercizio
*/

#include <stdio.h>
#define MAXSTR 100 

int main(){
    char s [MAXSTR] = " devo assolutamente    ricordarmi di  fare  la spesa ";
    int i;

    printf("\n");
    printf("La stringa di partenza \x8a: %s\n", s);
    printf("\n");

    i = 0;
    while(s[i] != '\0'){
        while(s[i] == ' '){
        i++;
    }

    while (s[i] != ' ' && s[i] != '\0'){
       putchar (s[i]);
        i++;
    }

    if (s[i != '\0']){
        putchar('\n');
    }
}

return 0;

}