// Convierte temperaturas de farenheit a centigrados y viceversa
// Carlos Castaneda Ramirez
// 2 de Octubre de 2020

#include<stdio.h>

float CF(float temp) {
	return 	( (temp * 9/5) + 32 );
}

float FC(float temp) {
	return ( (temp - 32) * 5/9 );
}

main() {
	int op;
	float grados, res=0;
	
	printf("Programa que convierte temperaturas de farenheit a centigrados y viceversa\n");
	printf(" Convertir de centigrados a farenheit ............. [ 1 ] \n");
	printf(" Convertir de farenheit a centigrados ............. [ 2 ] \n");
	printf(" Elije ? "); scanf("%d", &op);
	
	switch(op) {
		case 1: 
			printf("\nConvirtiendo de centigrados a farenheit \n");
			printf("Dame la temperatura en centigrados "); scanf("%f", &grados);
			res = CF(grados);
			printf("\nLa temperatura en farenheit es %f", res);
			break;
		case 2: 
			printf("\nConvirtiendo de farenheit a centigrados \n");
			printf("Dame la temperatura en farenheit "); scanf("%f", &grados);
			res = FC(grados);
			printf("\nLa temperatura en centigrados es %f", res);
			break;
	default: printf("\nElegiste una opción invalida");
		
	}
	printf("\nGracias por utilizar nuestro programa ....\n");
}
















