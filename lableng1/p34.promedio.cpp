// Calcula el promedio de 3 numeros
// Carlos Castaneda Ramirez
// 2 Octubre 2020

#include<stdio.h>

float Promedio(float n1, float n2, float n3) {
	return ( ( n1 + n2 + n3 ) / 3 );
}

main() {
	float n1, n2, n3, r;
	
	printf("Programa que calcula el Promedio de 3 numeros \n");
	printf("Dame numero 1 \n"); scanf("%f", &n1);
	printf("Dame numero 2 \n"); scanf("%f", &n2);
	printf("Dame numero 3 \n"); scanf("%f", &n3);
	
	r = Promedio(n1, n2, n3);
	
	printf("\nEl Promedio de los 3 numeros es %.2f", r);
	printf("\nEl Promedio de los 3 numeros es %.2f", Promedio(9,8,7) );
	printf("\nEl Promedio de los 3 numeros es %.2f", Promedio(6,6,5) );
	
}
