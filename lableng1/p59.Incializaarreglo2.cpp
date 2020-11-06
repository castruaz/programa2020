// Imprime los elementos de un arreglo inicializado en la declaracion
// Carlos Castaneda Ramirez
// 30 de Octubre 2020

#include<stdio.h>

main() {                 
	float temps[] = {3.5, 5, 10, 9.7, 12, 12.5, 15, 23, 22, 15};
	int pos;
	
	pos=0;
	
	temps[pos]=-3;
	pos++;
	temps[pos]=12.3;
	temps[++pos]=8;
	
	printf("Primer elemento : %f \n", temps[0]);
	printf("Ultimo elemento : %f \n", temps[9]);
	
	for(pos=0; pos<=9; pos++) {
		printf("%.2f \n", temps[pos]);
	}
	
	
	
	
	
}
