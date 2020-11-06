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
	printf(" [ 1 ] Calcular el area de un círculo .....................\n");
	printf(" [ 2 ] Calcular el area de un triángulo....................\n");
	printf("-----------------------------------------------------------\n");
	printf("Elije una opción del menú = \n"); scanf("%d", &op);
	return op;
}

main() {
	int op;
	float radio, base, altura, res;
	
	op = Menu();
	
	switch(op) {
		case 1:	printf("Calculando el area de un círculo \n");
				printf("Dame el radio ? "); scanf("%f", &radio);
				res = AreaCirculo(radio);
				printf("El área de círculo es %f ", res);
				break;
		case 2: printf("Calculando el área de un triángulo \n");
				printf("Dame la base   ? \n"); scanf("%f", &base);
				printf("Dame la altura ? \n"); scanf("%f", &altura);
				res = AreaTriangulo(base, altura);
				printf("El área del triángulo es %f", res);
				break;
		default: printf("Opción inválida ");
	}
	
}




