// Programa que imprime n reglones de asteriscos (piramide)
// Carlos Castaneda R
// 16 de Ocubre de 2020

#include<stdio.h>
main() {
	int n;
	
	printf("\nPrograma que imprime n reglones de asteriscos (piramide)\n");
	printf("Cuantos renglones ? \n");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++)
			printf("&");
		printf("\n");
	}
	
}
