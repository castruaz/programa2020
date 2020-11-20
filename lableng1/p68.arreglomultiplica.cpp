// Arreglos al cubo

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5

void imprime(float X[]) {
	int i;
	for(i=0; i<MAX; i++) {
		printf("%.2f ",X[i]);
	}
	printf("\n\n");
}

void leer(float X[]) {
	int i;
	for(i=0; i<MAX;i++) {
		printf("valor %d = ", i);
		scanf("%f",&X[i]);  
	}
}


main() {
	float A[5],B[5], C[5];
	int i;
	
	printf("\nIntroduce los elementos de A\n");
	leer(A);
	printf("\nIntroduce los elementos de B\n");
	leer(B);
 
	
	for(i=0; i<MAX;i++) {
		C[i] = A[i]  * B[(4-i)];
	}
	
	
	printf("Contenido del arreglo A\n");
	imprime(A);
	
	printf("Contenido del arreglo A\n");
	imprime(B);
	 
	printf("Contenido del arreglo C\n");
	imprime(C);
	
	
	printf("\nProceso terminado ....\n");
	
}
