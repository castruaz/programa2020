// Imprime la tabla de multiplicar que el usuario decida, hasta donde el decida
// Carlos Castaneda Ramirez
// 9 de Octubre de 2020

#include<stdio.h>
#include<ctype.h> // toupper()

main() {
	char resp;
	int t,c,f;
	
	printf("\nImprime la tabla de multiplicar que el usuario decida\n");
	do {
		printf("\nQue tabla quieres ? \n");scanf("%d", &t);
		printf("\nHasta donde quieres la tabla ? \n");scanf("%d", &f);
		c=1;
		while(c<=f) {
			printf("%d  x  %d  =  %d\n", t, c, t * c);
			c++;
		}
		fflush(stdin); // borrar buffer de entrada para permitir leer caracteres y numeros a la vez
		printf("\nQuieres otra tabla (S/N) ?");scanf("%c", &resp);
		resp = toupper(resp);
		 

	} while(resp!='N');
	printf("\nProceso terminado ...");
	
}
