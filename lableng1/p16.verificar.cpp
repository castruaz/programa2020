// Programa que verifica si la suma de 2 numeros es igual al tercero
// Carlos Castaneda
// 18 Septiembre de 2020

#include<stdio.h>

main() {
	float n1, n2, n3, suma=0;
	
	printf("Programa que verifica si la suma de 2 numeros es igual al tercero\n");
	printf("Numero 1 "); scanf("%f",&n1);
	printf("Numero 2 "); scanf("%f",&n2);
	printf("Numero 3 "); scanf("%f",&n3);
	
	suma = n1 + n2;
	
	if(suma==n3) 
		printf("La suma de %f + %f = %f", n1, n2, n3);
	else
		printf("La suma es distinta ");
	
	printf("\n Programa terminado ");
	
	
}
