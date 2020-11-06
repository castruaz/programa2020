// Programa de ejemplo de constantes definidas y constantes declaradas
// Carlos Castañeda Ramirez
// 11 de Septiembre 2020

#include<stdio.h>

#define MSJ "Constantes definidas (en la parte de arriba)"
#define PI 3.1416
#define ISR 0.10
#define IVA 0.16

main()
{
	//Ejemplo de constantes declaradas en el cuerpo del programa 
	const float factor = 35.4511;
	const int INCREMENTO = 12;
	const char ERROR[]="Se termino el espacio en disco";
	
	// No se puede modificar el valor de una constante, esto esta mal
	//factor = 10.34;
	//ISR = 12.56;
	
	printf("\nLos valores de las constantes #define son :\n");
	printf("El mensaje es: %s \n", MSJ);
	printf("El valor de PI     = %.4f \n", PI);
	printf("El valor de ISR    = %.4f \n", ISR);
	printf("El valor de IVA    = %.4f \n", IVA);
	
	printf("\nLos valores de las consantes const son: \n");
	printf("factor \t INCREMENTO \t ERROR \n");
	printf("%.4f \t %d \t %s \n", factor, INCREMENTO, ERROR);
}
