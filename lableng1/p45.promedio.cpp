// Calcular el promedio de n calificaciones
// Carlos Castaneda R
// 9 de Octubre de 2020

#include<stdio.h>

main() {
	float c, s, p, n;
	
	c=s=p=n=0;
	
	printf("\nCalcula el promedio de n calificaciones\n");
	
	do {
		printf("Dame una calificación ? ");scanf("%f", &n);
		s+=n;
		c++;
	} while(n!=0);
	p = s / (c-1);
	printf("\nLa suma de las calificaciones es %.2f \n", s);
	printf("\nEl promedio de las calificaciones es %.2f\n",p);
		
}
