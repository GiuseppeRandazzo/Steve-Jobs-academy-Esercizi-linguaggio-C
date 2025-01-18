/* Scrivere un programma in C per calcolare l'area di un rettangolo.
nota: utilizzare solo variabili di tipo int */

#include <stdio.h>

void main () {
	int base, altezza;
	
	printf("Inserisci la base: ");
	scanf("%d", &base);
	printf("Inserisci l'altezza: ");
	scanf("%d", &altezza);
	
	printf("L'area del rettangolo vale: %d\n", base * altezza);

}