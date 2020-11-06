// Programa que calcula la cojetura de collatz
// Carlos Castaneda R
// 16 de Octubre de 2020

#include<stdio.h>
#include<ctype.h>  // toupper
#include<stdlib.h> //system

main()
{
	char resp;
	int n;
	
	do {
		system("cls"); // borra la pantalla
		printf("\nPrograma que calcula la cojetura de collatz\n");
		printf("\nDame el numero inicial ?\n");scanf("%d", &n);
		
		for(;n!=1;) { // no hay variable de inicio, tampoco hay incremento
			
			printf("%d ", n);
			
			if( n%2==0 ) 
				n = n / 2;
			else
				n = n * 3 + 1;

		}
		printf("%d ", n);
		printf("\nProceso terminado ....\n");
		
		fflush(stdin);
		printf("Deseas repetir (S/N) ? \n");scanf("%c", &resp);resp=toupper(resp);
	} while(resp!='N');
	
}
