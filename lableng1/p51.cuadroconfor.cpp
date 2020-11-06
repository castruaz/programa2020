// Programa imprime un cuadro de dimension nxn del caracter deseado
// Carlos Castaneda R
// 16 de Ocubre de 2020

#include<stdio.h>

void cuadro(int n, char c) {
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++)
			printf("%c", c);
		printf("\n");
	}
}


main() {
	int n;
	char c;
	
	printf("\nPrograma imprime un cuadro de dimension nxn del caracter deseado)\n");
	printf("De que dimension ? \n"); scanf("%d", &n);
	fflush(stdin);
	printf("\nDe que caracter ?"); scanf("%c", &c);
	cuadro(n, c);
}
