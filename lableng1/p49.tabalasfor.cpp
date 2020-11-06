// Imprime las tablas del 1 al 10, hasta n 
// Carlos Castaneda R
// 16 Octubre de 2020

#include<stdio.h>
#include<ctype.h>
main()
{
	int op,n,i,j;
	char resp;
	
	do {
		printf("Imprime las tablas del 1 al 10, hasta n\n");
		printf("(1) Para una tabla, (2) Para todas las tablas \n");
		scanf("%d", &op);
		switch(op) {
			case 1: printf("\nQue tabla quieres ? \n");
					scanf("%d", &n);
					for(i=1; i<=10; i++)
						printf("%d  x  %d = %d \n",n, i, i * n); 
					break;
					
			case 2: printf("\nHasta donde deseas las tablas del 1 al 10? \n");
					scanf("%d", &n);
					for(i=1; i<=10; i++) {
						printf("Tabla del %d\n", i);
						for(j=1; j<=n; j++)
							printf("%d  x  %d = %d \n",i, j, i * j);
						printf("\n");
					}
					break;
			default: printf("\nOpción Invalida \n");
		}
		
		fflush(stdin);
		printf("\nDeseas Continuar (S/N) ? \n");scanf("%c", &resp);
	} while( toupper(resp) != 'N' );
	
}
