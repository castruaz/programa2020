// Imprime la tabla de multiplicar que el usuario decida
// Carlos Castaneda Ramirez
// 9 de Octubre de 2020

#include<stdio.h>
#include<ctype.h> // toupper()
#include<conio.h> // getch()

main() {
	char resp;
	int t,c;
	
	printf("\nImprime la tabla de multiplicar que el usuario decida\n");
	do {
		printf("\nQue tabla quieres ? \n");scanf("%d", &t);
		c=1;
		while(c<=10) {
			printf("%d  x  %d  =  %d\n", t, c, t * c);
			c++;
		}
		printf("\nQuieres otra tabla (S/N) ?");  
		resp = toupper( getch() );

	} while(resp!='N');
	printf("\nProceso terminado ...");
	
}
