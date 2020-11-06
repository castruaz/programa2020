// Imprime arreglos constantes usando funciones
// Carlos Castaneda Ramirez
// 6 de Noviembre 2020

#include<stdio.h>

void imprime(int X[]){
	int i;
	for(i=0; i<5; i++) {
		printf("%d\n", X[i]);
	}
	printf("\n\n");
}


main() {
	int A[]={10,20,30,40,50};
	int B[]={25,35,45,55,65};
	
	printf("\nEl contenido del arreglo A es \n");
	imprime(A);
	
	printf("\nEl contenido del arreglo B es \n");
	imprime(B);
	
}
