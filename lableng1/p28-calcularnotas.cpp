// Calcular las notas de un estudiante y mandar un mensaje segun el promedio
// Carlos Castaneda R.
// 25 de Septiembre de 2020

#include<stdio.h>

main() {
	float c1, c2, c3, prom=0;
	
	printf("\nCalcular las notas de un estudiante y mandar un mensaje segun el promedio\n");
	printf("Dame 3 califiaciones separadas por espacio \n");
	scanf("%f %f %f", &c1, &c2, &c3);
	
	prom = ( c1 + c2 + c3 ) / 3;
	
	printf("\nTu promedio es %.2f", prom);
	
	if( prom>=0 && prom<=10 ) {
		if( prom>=0 && prom<=6   ) printf("\nQuedas Reprobado\n");
		if( prom>=6.1 && prom<=7 ) printf("\nPasas de panzaso (panzaste)\n");
		if( prom>=7.1 && prom<=8 ) printf("\nMuy bien, puedes mejorar\n");
		if( prom>=8.1 && prom<=9 ) printf("\nExcelente sigue así\n");
		if( prom>=9.1 && prom<=10) printf("\nPerfecto tu esfuerzo valió la pena\n");
	}
	else
	   printf("\nLas calificaciones deben estar en la escala del 1 al 10\n");
	
	
	
	
}
