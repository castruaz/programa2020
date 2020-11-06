// Inicializa e imprime los elementos de un arreglo
// Carlos Castaneda R
// 30 de Octubre de 2020

#include<stdio.h>

main() {
	int numeros[5];
	
	numeros[0]=10;
	numeros[1]=5;
	numeros[2]=8;
	numeros[3]=20;
	numeros[4]=80;
	
	printf("Primer elemento: %d \n", numeros[0]);
	printf("Ultimo elemento: %d \n", numeros[4]);
	
	for(int i=0; i<5; i++) {
		printf("numeros[%d]= %d \n", i,numeros[i]);
	}
	
	
}
