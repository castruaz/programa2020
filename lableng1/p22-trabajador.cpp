// Calcular la paga de un trabajador y su paga por horas extra
// Carlos Castaneda
// 18 de Septiembre de 2020

#include<stdio.h>
#include<strings.h> // gets(), puts()

// Caso1 :   8 horas x 100 pesos = 800
// Caso2 :  45 horas x 100 pesos =  ( 40 x 100) + ( 5 x 100*2) = 4000 + 1000 = 5000

main() {
	char nombre[100];
	int horas, hextra=0;
	float paga, sueldo=0;
	
	printf("Calcular la paga de un trabajador y su paga por horas extra\n");
	printf("Nombre ? \n");gets(nombre);
	printf("Horas  ? \n");scanf("%d", &horas);
	printf("Paga   ? \n");scanf("%f", &paga);
	
	if(horas<=40)
		sueldo = horas * paga; // pago norma no hay extra
	else {
		hextra = horas - 40; // calculo horas extra
		sueldo = (40 * paga ) + (hextra * ( paga * 2));
	}
	
	printf("\nEl trabajador     : ");puts(nombre);
	printf("\nTiene un sueldo de:%f", sueldo);
	printf("\nHoras extra       :%d", hextra);
	
}
