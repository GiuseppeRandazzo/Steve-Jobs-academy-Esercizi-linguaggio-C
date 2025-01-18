/* Il programma richiede di inserire i coefficienti a,b,c di tipo intero e restituirà le due soluzioni

Gestire la condizione con delta minore di 0 */

#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c;
    double delta, x1, x2;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);
    printf("Inserisci il valore di c: ");
    scanf("%d", &c);

    delta = b * b - 4 * a * c;
    if (delta < 0){
        printf("Non ci sono soluzioni reali\n");
    }
   else{
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Le soluzioni sono:\n x1: %lf \n x2: %lf\n", x1, x2);
   }

}