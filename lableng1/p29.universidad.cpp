// Controla el acceso a la Universidad en base a la edad y el promedio
// Carlos Castaneda R
// 25 Sep 2020

#include<stdio.h>
#include<strings.h> 

main() {
	char nombre[100];
	int edad;
	float c1,c2,c3,prom=0;
	
	printf("\n*********************************************\n");
	printf("* Universidad Kitty Kat, tu mejor opción     *\n");
	printf("\n*********************************************\n");
	printf("\nControl de accesso \n");
	printf("Dame el nombre de la alumna \n"); gets(nombre);
	printf("Dame la edad  ?\n"); scanf("%d", &edad);
	
	if( edad>= 21 ) {
		printf("Dame 3 calificaciones separadas por espacio: \n");
		scanf("%f %f %f", &c1, &c2, &c3);
		prom = (c1 + c2 + c3) / 3;
		if(prom>=8){
			printf("La alumna: ");puts(nombre);
			printf("Ha sido aceptada, dado que cumple con la edad y el promedio\n");
		} else 
		   printf("\nNo se acepta por que el promedio es menor de 8\n");
	} else 
	   printf("\nNo se permite el acceso a menores de 21 años\n");
}

