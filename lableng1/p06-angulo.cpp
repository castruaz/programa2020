// Programa que calcula el tercer angulo de un tringulo
// Carlos Castañeda Ramírez
// 4 de Septiembre 2020

#include<stdio.h>

main() {
	float angulo1, angulo2;
	float angulo3;
	
	printf("Programa para calcular el tercer angulo de un trinagulo \n");
	printf("Angulo 1 \n");
	scanf("%f", &angulo1);
	printf("Angulo 2 \n");
	scanf("%f", &angulo2);
	
	angulo3 = 180 - (angulo1 + angulo2);
	
	printf("\n\nEl valor de Angulo3 es %f\n", angulo3);
}
