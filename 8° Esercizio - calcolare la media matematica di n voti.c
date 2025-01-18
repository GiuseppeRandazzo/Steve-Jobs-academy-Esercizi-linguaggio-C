/* Il programma all'avvio chiederà all'utente il numero di voti da mediare. Successivamente tramite un ciclo FOR verrà richiesto l'inserimento dei voti. Il programma infine restituirà il valore della media (il valore in generale sarà un numero decimale con virgola) */

#include <stdio.h>
#include <math.h>

void main (){
    int i, numero_voti, voti, accumulatore;
    double media;

    printf("Quanti voti vuoi inserire?:" );
    scanf("%d", &numero_voti);

    for(i=0; i<numero_voti; i++){
        printf("Inserisci il voto: ");
        scanf("%d", &voti);
    if (i==0){
        accumulatore = voti;
    }
    else{
        accumulatore = accumulatore + voti;
    }
}
    media = accumulatore/numero_voti;
    printf("La media dei voti inseriti \x8a: %.2f", media);
}