// Suma e imprime un arreglo de temperaturas
// Carlos Castaneda R
// 30 de Octubre de 2020

#include<stdio.h>

main() {
	float temps[] = { 2.34, 4.56, 7.89,   
				  0.5,   2.5,   4.67,  
		          40.3,  22.35,  56.22 };
	int i;
	float suma=0;
	
	printf("Las temperaturas son : \n");
	for(i=0; i<=8; i++) {
		printf("%.2f\n",temps[i]);
		suma = suma + temps[i];
	}
	printf("\nLa suma de las temperaturas es: %.2f", suma);
	
	
}
