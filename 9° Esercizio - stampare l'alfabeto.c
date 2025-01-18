/* Il programma richiederà all'utente se si desidera l'alfabeto con lettere piccole o lettere maiuscole.
Dopo il programma stamperà l'alfabeto su una riga separando ogni lettera dall'altra con un spazio. */

#include <stdio.h>

void main(){
    int i, lettere, ascii;
    char scelta;
printf("Lettere minuscole o maiuscole? (scelta m/M): ");
scanf("%c", &scelta);

if(scelta == 'm'){
    ascii = 97;
} else if (scelta == 'M'){
    ascii = 65;
    } else{
        printf("Scelta non valida");
    }

for(i=0; i<26; i++){
    lettere = ascii + i;
    printf("%c ", lettere);
}
}