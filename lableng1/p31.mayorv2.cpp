// Calcula el mayor de 3 numeros
// Carlos Castaneda Ramirez
// 2 Octubre 2020

#include<stdio.h>

float Mayor(float n1, float n2, float n3) {
	float m=0;
	
	if(n1>n2 && n1>n3) m=n1;
	if(n2>n1 && n2>n3) m=n2;
	if(n3>n1 && n3>n2) m=n3;
	
	return m;
}

main() {
	float n1, n2, n3, r;
	
	printf("Programa que calcula el mayor de 3 numeros \n");
	printf("Dame numero 1 \n"); scanf("%f", &n1);
	printf("Dame numero 2 \n"); scanf("%f", &n2);
	printf("Dame numero 3 \n"); scanf("%f", &n3);
	
	r = Mayor(n1, n2, n3);
	
	printf("\nEl mayor de los 3 numeros es %.2f", r);
	printf("\nEl mayor de los 3 numeros es %.2f", Mayor(1.1,7.2,12.5) );
	printf("\nEl mayor de los 3 numeros es %.2f", Mayor(-10,0.25,-20) );
	
}
