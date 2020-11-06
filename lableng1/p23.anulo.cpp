// Dado un angulo en radianes, mostrar su tipo
// Carlos Castaneda R
// 18 de Septiembre 2020
#include<stdio.h>

main(){
	float angulo;
	
	printf("Dado un angulo en radianes, mostrar su tipo \n");
	printf("Dame un angulo en radianes \n");
	scanf("%f", &angulo);
	
	// angulo = ( angulo * 180 ) / 3.1416; // asumiendo que viene en radianes
	
	if(angulo<90)  
		printf("El angulo es AGUDO\n");
	if(angulo==90) 
		printf("El angulo es RECTO\n");
	if(angulo>90 && angulo<180) 
		printf("El angulo es OBTUSO\n");
	if(angulo==180)
		printf("El angulo es LLANO\n");
	if(angulo>180 && angulo<=360)
		printf("El angulo es concavo");
	
	
}
