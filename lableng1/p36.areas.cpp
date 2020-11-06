// Calcula las areas de un circulo y un triangulo
// Carlos Castaneda R
// 2 de Octubre de 2020

#include<stdio.h>

float AreaCirculo(float r) {
	return ( 3.1416 * r * r );
}

float AreaTriangulo(float b, float a) {
	return ( ( b * a) / 2 );
}

int Menu(void) {
	int op;
	printf("Programa que calcula las areas de un circulo y un triangulo\n");
	printf("-----------------------------------------------------------\n");
	printf(" [ 1 ] Calcular el area de un c�rculo .....................\n");
	printf(" [ 2 ] Calcular el area de un tri�ngulo....................\n");
	printf("-----------------------------------------------------------\n");
	printf("Elije una opci�n del men� = \n"); scanf("%d", &op);
	return op;
}

main() {
	int op;
	float radio, base, altura, res;
	
	op = Menu();
	
	switch(op) {
		case 1:	printf("Calculando el area de un c�rculo \n");
				printf("Dame el radio ? "); scanf("%f", &radio);
				res = AreaCirculo(radio);
				printf("El �rea de c�rculo es %f ", res);
				break;
		case 2: printf("Calculando el �rea de un tri�ngulo \n");
				printf("Dame la base   ? \n"); scanf("%f", &base);
				printf("Dame la altura ? \n"); scanf("%f", &altura);
				res = AreaTriangulo(base, altura);
				printf("El �rea del tri�ngulo es %f", res);
				break;
		default: printf("Opci�n inv�lida ");
	}
	
}




