// Calcula la suma de n numeros introducidos por el usuario
// Carlos Castaneda R
// 9 de Octubre de 2020

#include<stdio.h>

main() {
	int c, n, s, cp, cn, cz;
	
	n=c=s=cp=cn=cz=0; // Inicializa todas las variables en 0
	
	printf("Calculando la suma de n numeros introducidos por el usuario\n");
		
	do {
		printf("Dame un numero ?");scanf("%d",&n);
		if(n!=999) {
			c++;
			s+=n; // s = s + n;
			if(n>0) cp++;
			if(n<0)  cn++;
			if(n==0) cz++;
		}
	} while(n!=999);
	if(c==0) 
		printf("\nNo intodujiste ningun numero, no te hagas el vivo\n");
	else {
		printf("\nSe introdujeron %d números\n", c);
		printf("\nLa suma es % d \n", s);
		printf("\nPositivos %d\n", cp);
		printf("\nNegativos %d\n", cn);
		printf("\nCeros     %d\n", cz);
		printf("\nProceso terminado \n");
	}
		
}
