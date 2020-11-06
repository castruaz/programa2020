// Decidir si un estudiante es aceptado de acuerdo a su edad y 2 calificaciones
// Carlos Castaneda
// 18 de Septiembre de 2020

#include<stdio.h>
#include<strings.h> // gets(), puts()

main() {
	char nombre[90]; 
	int edad;
	float c1, c2;
	
	printf("Universidad Patito S.A. \n");
	printf("Decidir si un estudiante es aceptado de acuerdo a su edad y 2 calificaciones\n");
	printf("Nombre del estudiante  ? \n");gets(nombre);
	printf("Edad                   ? \n");scanf("%d", &edad);
	
	if(edad>=18) {
		printf("Dame calificacion 1 ? \n");scanf("%f", &c1);
		printf("Dame calificacion 2 ? \n");scanf("%f", &c2);
		if(c1>=8 && c2>=8) 
			printf("Eres ACEPTADO por que cumples con todos los requicitos\n");
		else {
		   printf("El estudiante:  ");puts(nombre);
		   printf("No es aceptado por tener bajas calificaciones \n");
		}
	}
	else { 
	   printf("El estudiante:  ");puts(nombre);
	   printf("No es aceptado por que es menor de edad (%d) \n", edad);
	}
	
	printf("\nPrograma terminado, gracias !! \n");
}

