/* Dato un vettore precaricato di 10 elementi, implementare l'algoritmo Selection sort e stampare via via il vettore ad ogni giro di scansione alla ricerca del minimo */


#include <stdio.h>
#define N 10
void stampavett (int vett[], int dimensione){
    int i;

    printf("[");
    for(i=0; i<dimensione; i++){
    printf("%d ", vett[i]);
}
    printf("]\n");
};
int main(){
    int vett[N] = {9,1,2,5,6,10,0,4,6,4};
    int i,j;
    int temp;
    int punta_minimo;

    printf("Il vettore precaricato \x8a: ");
    stampavett(vett, N);

    for (i=0; i<N; i++){
        punta_minimo = i;
        for(j=i+1;j<N;j++){
            if(vett[j]<vett[punta_minimo]){
                punta_minimo = j;
            }
        }

        //scambio valori

        temp=vett[i];
        vett[i]=vett[punta_minimo];
        vett[punta_minimo]=temp;
        printf("%d) ",i+1);

        stampavett(vett, N);
    } 
    return 0;
}