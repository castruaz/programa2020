// Programa de ejemplo de constantes literales floatantes
// Carlos Castañeda Ramirez
// 11 de spetiembre de 2020

#include<stdio.h>

main()
{
	// Declaracion de variables de coma flotante
	float superficie;
	float tasa, impuesto;
	float descuento=0.010, ret=123.5678;
	double direccion, potencia;
	
	// Asignar constates literales de coma flotante
	superficie = .34567;
	potencia   = 1234.34e10;
	direccion  = 0.345;

	// Entrada de datos de coma flotante
	printf("Teclea \n Los datos \n Siguientes \n");
	printf("Tasa     =  "); scanf("%f", &tasa);
	printf("Impuesto =  "); scanf("%f", &impuesto);
	
	// Salida de datos de como flotante
	printf("\n\n Tasa %.2f \n Impuesto %.2f \n", tasa, impuesto);
	printf("\n Superficie    = %f ", superficie);
	printf("\n Potencia      = %.2e", potencia);
	printf("\n Direccion     = %f", direccion);
	
}
