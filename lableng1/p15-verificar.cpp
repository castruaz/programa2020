// Programa que verifica si un numero es pos, neg, o cero
// Carlos Castaneda
// 18 Septiembre de 2020

#include<stdio.h>

main() {
	int numero;
	
	printf("Programa para verificar si un numero es pos, neg, o cero\n");
	scanf("%d", &numero);
	
	if(numero>0)  printf("El numero %d es positivo", numero);
	if(numero<0)  printf("El numero %d es negativo", numero);
	if(numero==0) printf("El numero %d es cero    ", numero);
	
	printf("\nPrograma terminado");
}
