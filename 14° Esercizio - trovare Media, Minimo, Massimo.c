/* All'operatore verrà richiesto di inserire 5 valori interi (che verranno memorizzati in un vettore).
 Il programma stamperà orizzontalmente il vettore.
 In seguito restituirà il valore Max, Min indicando le relative posizioni di inserimento
 Infine stamperà il valore calcolato della somma */

#include <stdio.h>
#define N 5

int main(){
    int i, massimo, minimo, somma = 0;
    int posizione_massimo, posizione_minimo;
    float media = 0;
    int vett[N] = {0};

    printf("Inserisci %d valori interi:\n", N);
    scanf("%d %d %d %d %d", &vett[0], &vett[1], &vett[2], &vett[3], &vett[4]);

printf("[");
    for(i=0; i<N; i++){
        printf("%d", vett[i]);
    }

printf("]\n");

for(i=0; i<N; i++){
    if (i==0){
        massimo = vett[0];
        minimo = vett[0];
    } else {
        if (massimo<vett[i]){
            massimo = vett[i];
            posizione_massimo = i;
            } else if (minimo>vett[i]){
                minimo = vett[i];
                posizione_minimo = i;
            }

    somma = somma + vett[i];
}
}
    printf("Il massimo \x8a: %d nella posizione %d\n", massimo, posizione_massimo);
    printf("Il minimo \x8a: %d nella posizone %d\n", minimo, posizione_minimo);

    media = (float) somma / N;
    printf("La media \x8a: %f\n", media);
    return 0;
}