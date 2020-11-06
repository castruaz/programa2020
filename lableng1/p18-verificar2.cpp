// Programa que verifica si la suma de 2 numeros es igual a un tercero
// Carlos Castaneda
// 18 Septiembre de 2020

// caso 1:  3  6  9
// caso 2:  8  10 2
// caso 3:  20  5  15

#include<stdio.h>

main() {
	int n1, n2, n3;
	
	printf("Programa que verifica si la suma de 2 numeros es igual a un tercero\n");
	printf("Dame tres numeros enteros separados por un espacio ?\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1+n2==n3) printf("%d + %d = %d", n1, n2, n3);
	
	if(n1+n3==n2) printf("%d + %d = %d", n1, n3, n2);
	
	if(n2+n3==n1) printf("%d + %d = %d", n2, n3, n1);
	
}
