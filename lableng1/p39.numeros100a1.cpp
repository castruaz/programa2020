// Imprime los numeros del 100 al 1 con while 
// Carlos Castaneda Ramirez
// 9 de Octubre de 2020

#include<stdio.h>

main(){
	int c;
	
	printf("Imprimiendo numeros del 100 al 1\n");
	c=100;
	while(c>=1) {
		printf("%d\n", c);
		c--; // c = c - 1
	}
	printf("\nProceso terminado \n");
}
