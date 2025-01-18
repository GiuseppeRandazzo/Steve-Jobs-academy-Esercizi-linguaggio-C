/* Il programma chiederà all'operatore l'inserimento di a,b,c sotto forma di interi e restituirà le soluzioni.
Gestire il caso Delta<0 e a =0 */

#include <stdio.h>
#include <math.h>

void main() {
    int a,b,c;
    double delta, x1, x2, x;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);
    printf("Inserisci il valore di c: ");
    scanf("%d", &c);
    
    if (a == 0) {
        printf("L'equaizone \x8a di primo grado puoi procedere con la risoluzione dell'equazione\n");
        x = -(c / b);
        printf("x = %lf\n", x);
    }
    else{
        delta = b * b - 4 * a * c;
        printf("Delta = %lf\n", delta);
    if (delta < 0){
        printf("Non ci sono soluzioni reali\n");
    }
   else{
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Le soluzioni sono:\n x1: %lf \n x2: %lf\n", x1, x2);
   }
    }
}