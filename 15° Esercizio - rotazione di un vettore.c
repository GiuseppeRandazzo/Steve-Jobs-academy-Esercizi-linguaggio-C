/*
All'operatore verrà richiesto di inserire un vettore di 5 elementi  (utilizzare il #define)
Dopo si presenterà un menù che proporrà:
1) Rotazione a destra del vettore
2) Rotazione a sinistra del vettore
3) Uscita
La rotazione a destra funziona che tutti gli elementi del vettore scorrono di una posizione verso destra (verso l'indice più elevato). Il valore che c'era inizialmente nell'indice più elevato verrà riportato nel valore con indice 0.
La rotazione a sinistra funziona che tutti gli elementi del vettore scorrono di una posizione verso sinistra (verso l'indice più basso). Il valore che c'era inizialmente nell'indice 0 verrà riportato nel valore con indice più alto. 
Ogni volta che si fa la scelta 1) o 2) si stamperà il vettore ruotato
esempio:
 -  dato il vettore [ 1, 2, 3, 4, 5 ]  se si selezione rotazione a destra diventa  [5, 1, 2, 3, 4]
 -  dato il vettore [ 1, 2, 3, 4, 5 ]  se si selezione rotazione a sinistra diventa  [2, 3, 4, 5, 1]
Un ciclo for dovrà essere utilizzato per la stampa di ogni vettore/rotazione.
*/

#include <stdio.h>
#define N 5

int main(){
    int i, temp, scelta;
    int vett[N];

    for (i=0;i<N;i++) {
        printf("Inserisci il valore %d: ", i+1);
        scanf("%d", &vett[i]);
    }

do {
    printf("1) Rotazione a destra del vettore\n");
    printf("2) Rotazione a sinistra del vettore\n");
    printf("3) Uscita\n");
    printf("Scegli un'opzione: ");
    scanf("%d", &scelta);

    if(scelta == 1){
        temp=vett[N-1];
        for (i=N-1;i>0;i--) {
            vett[i]=vett[i-1];
	    }
        vett[0]=temp;

    } else if(scelta == 2){
        temp=vett[0];
        for (i=0;i<N-1;i++) {
 		    vett[i] = vett[i+1];
	    }
	    vett[N-1]=temp;
    }
        for(i=0;i<N;i++){
            printf("%d ",vett[i]);
        }
        printf("\n");

} while (scelta != 3);
return 0;
}