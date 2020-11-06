// Dado un numero entre 1..4 decir la estacion de año con letra
// Carlos Castaneda
// 18 de Septiembre de 2020

#include<stdio.h>
main() {
	int n;
	
	printf("Dado un numero entre 1..4 decir la estacion de año con letra\n");
	scanf("%d",&n);
	
	if( n>=1 && n<=4 ) {
		if(n==1) printf("Primavera \n");
		if(n==2) printf("Verano    \n");
		if(n==3) printf("Otoño     \n");
		if(n==4) printf("Invierno  \n");
	} 
	else 
	   printf("\nEstacion Invalida");
	
	printf("\nPrograma terminado \n");

}
