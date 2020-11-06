// Generar 10 numeros aleatrios en arreglo A y elevarlos al cubo y ponerlos en C
// Carlos Castaneda Ramirez
// 6 de Noviembre 2020

#include<stdio.h>
#include<stdlib.h> //rand()
#define MAX 10

// Esta funcion imprime un arreglo
void imprime(int X[]){
	int i;
	for(i=0; i<MAX; i++) {
		printf("%d ", X[i]);
	}
	printf("\n");
}

// Esta funcion llena un arreglo con numeros aleatorios
void aleatorio(int X[]) {
	int i;
	for(i=0; i<MAX; i++) {
		 X[i]=rand() % 100; // Genera un numero aleatorio entre 1 y 100
	}
}

main() {
	int A[MAX], C[MAX], i; 
	
	printf("\nGenerando numeros aleatorios en A\n");
	aleatorio(A);
	
	// Se eleva al cubo cada elemento de A y se pone en C
	printf("\nElevar al cubo cada elemento de A y ponerlo en C\n");
	for(i=0; i<MAX; i++) {
		C[i] =  A[i] * A[i] * A[i];
	}
	
	printf("\nEl contenido del arreglo A es \n");
	imprime(A);
	
	 
	printf("\nEl contenido del arreglo C es \n");
	imprime(C);
	
}
