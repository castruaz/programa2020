// Programa que convierte temperaturas entre grados Centigrados y Farenheit
// Carlos Castaneda
// 18 Septiembre de 2020

#include<stdio.h>
#include<ctype.h> // toupper()

main() {
	float temp, res;
	char resp;
	
	printf("Programa que convierte temperaturas entre grados Centigrados y Farenheit\n");
	printf("========================================================================\n");
	printf("[ C ] Convertir de Farenheit a Centigrados \n");
	printf("[ F ] Convertir de Centigrados a Farenheit \n");
	printf("========================================================================\n");
	printf("Elije una opcion ? ");
	scanf("%c", &resp);
	resp = toupper(resp); // convierte un caracter a mayusculas
	
	if(resp=='C') {
		printf("\nDame la temperatura en Farenheit ? ");
		scanf("%f", &temp);
		res = ( temp - 32 ) * 5 / 9;
		printf("%f grados farenheit, equivale a %f grados centigrados", temp, res); 
	} 
	else {
		if(resp=='F') {
			printf("\nDame la temperatura en Centigrados ? ");
			scanf("%f", &temp);
			res = ( temp * 9 / 5) + 32;
			printf("%f grados cetigrados, equivale a %f grados farenheit", temp, res);
		}
		else {
			printf("\nOpción incorrecta \n");
		}
	}	
	printf("\n\nPrograma Terminado ...\n");		
}
