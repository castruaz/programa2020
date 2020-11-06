// Imprime numeros de 1 a n o de n a 1 con el ciclo for
// Carlos Castaneda R
// 16 Octubre de 2020

#include<stdio.h>
#include<ctype.h>
main()
{
	int op,n,i;
	char resp;
	
	do {
		printf("Imprime numeros de 1 a n o de n a 1 con for\n");
		printf("[ 1 ] Imprimir numeros de 1 a n (ascendente) \n");
		printf("[ 2 ] Imprimir numeros de n a 1 (descendente)\n");
		printf("Elige ?");scanf("%d",&op);
		switch(op) {
			case 1: printf("\nImprimiendo numeros de 1 a n \n");
					printf("Hasta donde deseas imprimir (n) ?\n");
					scanf("%d", &n);
					for(i=1; i<=n; i++)
						printf("%d ",i);
					break;
			case 2: printf("\nImprimiendo numeros de n a 1 \n");
					printf("Desede donde deseas imprimir (n) ?\n");
					scanf("%d", &n); 
					for(i=n; i>=1; i--)
						printf("%d ",i);
					break;
			default: printf("\nOpción Inválida \n");
		}
		fflush(stdin);
		printf("\nDeseas Continuar (S/N) ? \n");scanf("%c", &resp);
	} while( toupper(resp) != 'N' );
	
}
