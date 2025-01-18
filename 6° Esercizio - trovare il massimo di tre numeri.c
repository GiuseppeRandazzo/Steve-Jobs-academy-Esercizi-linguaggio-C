/* Il programma chiede all'operatore di inserire 3 interi.
Il programma deve indicare il valore del numero massimo tra quelli inseriti */

#include <stdio.h>
#include <math.h>

void main(){
    int n1, n2, n3;

    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &n3);
    
    if( n1 > n2 && n1 > n3){
        printf("Il numero maggiore \x8A: %d\n", n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("Il numero maggiore \x8A: %d\n", n2);
    }        
    else if (n3 > n1 && n3 > n2){
        printf("Il numero maggiore \x8A: %d\n", n3);
    }

}