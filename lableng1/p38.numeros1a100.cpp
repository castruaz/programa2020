// Imprime los numeros del 1 al 100 con while 
// Carlos Castaneda Ramirez
// 9 de Octubre de 2020

#include<stdio.h>

main(){
	int c;
	
	printf("Imprimiendo numeros del 1 al 100\n");
	c=1;
	while(c<=100) {
		printf("%d\n", c);
		c--; // c = c + 1
	}
	printf("\nProceso terminado \n");
}
