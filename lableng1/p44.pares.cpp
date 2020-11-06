// Imprime los numeros pares desde 100 hasta n
// Carlos Castaneda R
// 9 Octubre de 2020

#include<stdio.h>

main() {
	int c, n, s=0;
	
	printf("Imprime los numero pares desde 100 hasta n \n");
	printf("Hasta donde deseas imprimir los impares ? ");
	scanf("%d", &n);
	c=100;
	while(c>=n) {
		printf("%d\n", c);
		s+=c;  // s = s + c
		c-=2;  // c = c - 2;
	}
	printf("\nLa suma de los pares es %d", s);
}
