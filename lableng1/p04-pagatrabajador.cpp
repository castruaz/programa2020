hani// Programa que calcula la paga de un trabajado
// Carlos Castañeda Ramírez
// 4 de Septiembre de 2020

#include<stdio.h>

main() {
	int horas;
	float paga, pagabruta, impuesto, paganeta;
	const float TASA=0.10;
	
	printf("Programa que calcula la paga de un trabajador\n");
	printf("---------------------------------------------\n");
	printf("Horas trabajadas = "); scanf("%d",&horas);
	printf("Paga por hora    = "); scanf("%f",&paga);
	
	pagabruta = horas * paga;
	impuesto  = pagabruta * TASA;
	paganeta  = pagabruta - impuesto;
	
	printf("\n");
	printf("Paga Bruta = %f \n", pagabruta);
	printf("Impuesto   = %f \n", impuesto);
	printf("Paga Neta  = %f \n", paganeta);
	
	printf("Hola mi mismo, eres bien chingon como programador, sigue asi");
	
}
