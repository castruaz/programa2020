// Verifica cual es el mayor de 3 numeros
// Carlos Castañeda
// 25 Septiembre 2020

//         n1 n2 n3
// Caso 1: 3  4  5 
// Caso 2: 10 15 11
// Caso 3: -1 20 -4

#include<stdio.h>
main() {
	int n1, n2, n3;
	
	printf("\nVerifica cual es el mayor de 3 numeros\n");
	printf("Dame numero 1 \n");scanf("%d", &n1);
	printf("Dame numero 2 \n");scanf("%d", &n2);
	printf("Dame numero 3 \n");scanf("%d", &n3);
	
	if( n1>n2 && n1>n3 ) printf("\nEl numero %d es el mayor", n1);
	if( n2>n1 && n2>n3 ) printf("\nEl numero %d es el mayor", n2);
	if( n3>n1 && n3>n2 ) printf("\nEl numero %d es el mayor", n3);
}
