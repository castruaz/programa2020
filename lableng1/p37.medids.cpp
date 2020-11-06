// Convierte pulagas a centimetros y pies a metros  
// Carlos Castaneda R
// 2 de Octubre de 2020

#include<stdio.h>

float PC(float pulgadas) {
	return pulgadas * 2.54;
}

float PM(float pies) {
	return pies * 0.3048;
}

int Menu(void) {
	int op;
	printf("Programa que convierte pulagas a centimetros y pies a metros\n");
	printf("------------------------------------------------------------\n");
	printf(" [ 1 ] Convertir pulagas a centimetros .....................\n");
	printf(" [ 2 ] Convertir pies a metros .............................\n");
	printf("------------------------------------------------------------\n");
	printf("Elije una opción del menú = \n"); scanf("%d", &op);
	return op;
}

main() {
	int op;
	float m, res;
	
	op = Menu();
	
	switch(op) {
		case 1:	printf("Convirtiendo pulgadas a centimetros \n");
				printf("Dame las pulgadas ? "); scanf("%f", &m);
				res = PC(m);
				printf("Los centimetros son %f ", res);
				break;
		case 2: printf("Convirtiendo pies a metros \n");
				printf("Dame los pies ? \n"); scanf("%f", &m);
				res = PM(m);
				printf("Los metros son %f", res);
				break;
		default: printf("Opción inválida ");
	}
	
}




