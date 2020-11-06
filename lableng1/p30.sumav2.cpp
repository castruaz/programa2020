// Suma 2 numeros usando funciones
// Carlos Castañeda R
// 2 de Octubre 2020

#include<stdio.h>

int Suma(int a, int b) {
	int s=0;
	s = a + b;
	return s;
}

main() {
	int n1, n2, res=0;
	
	printf("Programa que suma 2 numeros usando funciones\n");
	printf("Dame un   numero ? \n"); scanf("%d",&n1);
	printf("Dame otro numero ? \n"); scanf("%d",&n2);
	
	res = Suma(n1,n2);
	
	printf("\n La suma es %d", res);
	printf("\n La suma es %d", Suma(100, 200) );
	printf("\n La suma es %d", Suma(500, 800) );
	
}
