// Generar 10 numeros aleatorios en los arreglos A y B, luego sumarlos en C
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
		 X[i]=rand() % 100; 
	}
}

main() {
	int A[MAX], B[MAX], C[MAX], i; 
	
	printf("\nGenerando numeros aleatorios en A y B\n");
	aleatorio(A);
	aleatorio(B);
	
	printf("\nSumando arreglo A + B en C\n");
	for(i=0; i<MAX; i++) {
		C[i] = A[i] + B[i];
	}
	
	printf("\nEl contenido del arreglo A es \n");
	imprime(A);
	
	printf("\nEl contenido del arreglo B es \n");
	imprime(B);
	
	printf("\nEl contenido del arreglo C es \n");
	imprime(C);
	
}
