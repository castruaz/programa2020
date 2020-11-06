// Verifica que tres numeros sean consecutivos
// Carlos Castañeda
// 25 Septiembre 2020

// Caso 1: 3 4 5 
// Caso 2: 10 15 11
// Caso 3: -1 0 1

#include<stdio.h>
main() {
	int n1, n2, n3;
	
	printf("\nVerifica que tres numeros sean consecutivos\n");
	printf("Dame numero 1 \n");scanf("%d", &n1);
	printf("Dame numero 2 \n");scanf("%d", &n2);
	printf("Dame numero 3 \n");scanf("%d", &n3);
	
	if( (n2-n1)==1 && (n3-n2)==1 )
		printf("\nLos numeros son consecutivos\n");
	else
		printf("\nNO SON Consecutivos\n");
		
}
