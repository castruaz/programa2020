// Muestra un menu con los programas realizados
// Carlos Castaneda R.
// 9 de Octubre de 2020


#include<stdio.h> 
#include<stdlib.h>
#include "funciones.h"

int menu() {
	int op;
	system("cls");
	printf("Números impares ascendente .......... [ 1 ]\n");
	printf("Números pares descendente ............[ 2 ]\n"); 
	printf("Promedio de números ..................[ 3 ]\n"); 
	printf("Temperaturas .........................[ 4 ]\n"); 
	printf("Salir del proceso ....................[ 9 ]\n"); 
	printf("Elije ?\n");
	scanf("%d",&op);
	return op;
}

main() {
	int op;
	do {
		op = menu();
		switch(op) {
			case 1: impares();break;
			case 2: pares();break;
			case 3: promedio();break;
			case 4: temperaturas();break;
			case 9: printf("\n Gracias por utilizar nuestro sueper mega chido programa \n\n"); break;
			default: printf("Opcion Invalida \n");
		}
		fflush(stdin);
		printf("\n\n Presiona <Enter> para continuar \n");getchar();
	} while( op!= 9);
	printf("\nProceso terminado ...");
}












