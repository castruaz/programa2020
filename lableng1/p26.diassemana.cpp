// Dado un numero entero entre 1 y 7 da el dia con letra
// Carlos Castañeda
// 25 Septiembre 2020
 

#include<stdio.h>
main() {
	int dia;
	
	printf("\nDado un numero entero entre 1 y 7 da el dia con letra\n");
	printf("\nDame el dia (1 a 7) ? \n");
	scanf("%d", &dia);
	
	if( dia>=1 && dia<=7 ) {
		if(dia==1) printf("\nDomingo\n");
		if(dia==2) printf("\nLunes\n");
		if(dia==3) printf("\nMartes\n");
		if(dia==4) printf("\nMiércoles\n");
		if(dia==5) printf("\nJueves\n");
		if(dia==6) printf("\nViernes\n");
		if(dia==7) printf("\nSabado\n");
	}
	else printf("\nDia invalido\n");
	
}
