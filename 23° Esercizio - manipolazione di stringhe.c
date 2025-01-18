/* 
Definire una stringa di 100 char inizializzata come segue: "Oggi è una bella giornata"
1) contare le parole e stampare il valore
2) sostituire le vocali con la seguente logica:
sostituire a con e
sostituire e con i
sostituire i con o
sostituire o con u
sostituire u con a
infine stampare la nuova stringa
*/

#include <stdio.h>
#include <string.h>
#define MAXSTR 100

int main (){
    char parole [MAXSTR] = "devo assolutamente ricordarmi di fare la spesa";
    int i, contatore = 0;
    int lunghezza;
    lunghezza = strlen(parole);
    
    printf("\n");

    printf("La stringa iniziale \x8a: %s\n", parole);

    printf("\n");

    for(i=0; i<lunghezza; i++){
        if(parole[i] == ' '){
            contatore++;
        }
    }

    printf("Il numero di parole all'interno della tua stringa %d\n", contatore+1);

    printf("\n");

    for(i=0; parole[i] != '\0'; i++){
        if (parole[i] == 'a'){
            parole[i] = 'e';
        }
        else if (parole[i] == 'e'){
            parole[i] = 'i';
        }
        else if (parole[i] == 'i'){
            parole[i] = 'o';
        }
        else if (parole[i] == 'o'){
            parole[i] = 'u';
        }
        else if (parole[i] == 'u'){
            parole[i] = 'a';
        }    
    }

    printf("La stringa modificata \x8a: %s\n", parole);
    printf("\n");

    return 0;
}

