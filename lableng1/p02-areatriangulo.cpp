// Programa que calcula el area de un triangulo
// Carlos Castañeda Ramírez
// 4 de Septiembre 2020

#include<stdio.h>

main() {
	//Declaracion de variables
	int base, altura;
	float area;
	
	// Entrada
	printf("Programa que calcula el area de un triangulo\n");
	printf("--------------------------------------------\n");
	printf("Cual es la base ? \n");
	scanf("%d",&base);
	printf("Cual es la altura ? \n");
	scanf("%d",&altura);
	
	// Proceso
	area = ( base * altura ) / 2;
	
	// Salida
	printf("\nLa base %d y la altura %d ", base, altura);
	printf("\nEl area del triangulo es %f ", area);
	
	
}
