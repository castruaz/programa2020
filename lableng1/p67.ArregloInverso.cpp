// Generar 10 numeros aleatrios en arreglo A y los inverte y pone en C
// Carlos Castaneda Ramirez
// 6 de Noviembre 2020

#include<stdio.h>
#include<stdlib.h> //rand()
#define MAX 5

// Esta funcion imprime un arreglo
void imprime(int X[]){
	int i;
	for(i=0; i<MAX; i++) {
		printf("%d ", X[i]);
	}
	printf("\n");
}

// Esta funcion llena un arreglo con numeros introducidos por el usuario
void llena(int X[]) {
	int i;
	for(i=0; i<MAX; i++) {
		printf("Valor %d =", i);
		scanf("%d", &X[i]);
	}
	printf("\n");
}

main() {
	int A[MAX],B[MAX], C[MAX], i; 
	
	printf("\nLeyendo elemetos de A\n");
	llena(A);
	printf("\nLeyendo elementos de B\n");
	llena(B);
	
	// Invierte los valores de A y los pone en C
	printf("\nSuma invertida de A y B \n");
	for(i=0; i<MAX; i++) {
		C[i] =  A[i] * B[4-i];
	}
	
	printf("\nEl contenido del arreglo A es \n");
	imprime(A);
	printf("\nEl contenido del arreglo B es \n");
	imprime(B);
	 
	printf("\nEl contenido del arreglo C es \n");
	imprime(C);
	
}
