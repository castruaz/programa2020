// Imprime numeros en el rango indicado ( ini .... fin )
// Carlos Castaneda R
// 16 de Octubre 2020

#include<stdio.h>

main() {
	int ini, fin,s=0, i;
	
	printf("\nImprime numeros en el rango indicado ( ini .... fin)\n");
	printf("Dame inicio ? \n");scanf("%d", &ini);
	printf("Dame fin    ? \n");scanf("%d", &fin);
	
	if(ini<fin) {
		for( i=ini ; i<=fin; i++) {
			printf("%d ", i);
			s = s + i;
		}
		print("\nLa suma es %d ", s);
	}
	else printf("\nEl rango de valores es inválido\n");
	
	
}
