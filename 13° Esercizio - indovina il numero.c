/* Il primo operatore inserisce un numero intero tra 1 e 9. Se viene inserito un numero al di fuori di questo intervallo verrà richiesto al primo operatore di reinserire un numero valido.
Il gioco passa al secondo operatore che tenterà di indovinarlo. 
Se lo indovina il programma esce altrimenti chiede di ritentare.
Quando il secondo operatore indovinerà il valore il programma uscendo stamperà il numero di tentativi effettuati. */

#include <stdio.h>

int main() {
    int numero_da_indovinare, numero_inserito,  tentativi = 0;

    do {
        printf("Primo operatore inserisci un numero tra 1 e 9 da indovinare: \n");
        scanf("%d", &numero_da_indovinare);
        if (numero_da_indovinare <1 || numero_da_indovinare >9){
        printf("Numero non valido inserire un numero valido tra 1 e 9: \n");}

    } while (numero_da_indovinare <1 || numero_da_indovinare >9);

printf("Secondo operatore indovina il numero: \n");
        scanf("%d", &numero_inserito);
        tentativi++;

    do {
        if (numero_da_indovinare != numero_inserito){
            printf("Ritenta, non hai indovinato \n");
            scanf("%d", &numero_inserito);
            tentativi++;  
        }
    } while (numero_da_indovinare != numero_inserito);

    printf("Hai avuto successo!\n");
    printf("Il tuo numero di tentativi \x8a: %d\n", tentativi);
    return 0;
}