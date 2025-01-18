/* Il programma richiederà all'operatore la dimensione del lato. 
Successivamente il programma stamperà, tramite una serie di caratteri *, un quadrato pieno e dopo un quadrato vuoto (cioè stamperà solo i lati del quadrato) */

#include <stdio.h>

void main(){
    int i, j, lato;
    printf("Dammi la dimensione del lato:");
    scanf("%d", &lato);

//Stampa quadrato pieno

    for (i=0; i<lato; i++){
        for(j=0; j<lato; j++){
            printf("*");
        }
        printf ("\n");
}

printf("\n");

//Stampa quadrato vuoto

for(i=0; i<lato; i++){
    for( j=0; j<lato; j++){
        if (i==0 || i==lato-1 || j==0 || j==lato-1){
            printf("*");
        }else{  
            printf(" ");
        }
    }
    printf("\n");
}

}