// Programa que calcula la hipotenusa de un triangulo
// Carlos Castañeda Ramírez
// 4 de Septiembre 2020

#include<stdio.h>
#include<math.h>

main() {
	float longitudlado1, longitudlado2;
	float hipotenusa;
	
	printf("Programa que calcula la hipotenusa de un triangulo \n");
	printf("Dame las longitudes de los lados ");
	scanf("%f %f", &longitudlado1, &longitudlado2);
	
	hipotenusa = sqrt( longitudlado1*longitudlado1 + longitudlado2*longitudlado2 );
	
	printf("\nLa hipotenusa es %f ", hipotenusa);
		
}
