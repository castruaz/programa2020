// Programa que calcula mayor, menor, promedio de n numeros
// Carlos Castaneda R
// 16 de Octubre de 2020

#include<stdio.h>
#include<ctype.h>  // toupper
#include<stdlib.h> //system

main()
{
	char resp;
	int n;
	float num, sum, prom, may, men;
	
	do {
		sum=prom=0;
		men=9999;
		may=-9999;
		system("cls"); // borra la pantalla
		printf("\nPrograma que calcula mayor, menor, promedio de n numeros\n");
		printf("\nCuantos numeros deseas procesar ?\n"); scanf("%d", &n);
		for(int i=1; i<=n; i++) {
			printf("Dame un numero ? ");
			scanf("%f", &num);
			sum = sum + num;
			if(num<men) men = num;
			if(num>may) may = num;
		}
		prom = sum / n;
		printf("La suma es     %f\n", sum);
		printf("El menor es    %f\n", men);
		printf("El mayor es    %f\n", may);
		printf("El promedio es %f\n", prom);
		fflush(stdin);
		printf("Deseas repetir (S/N) ? \n");scanf("%c", &resp);resp=toupper(resp);
	} while(resp!='N');
	
}
