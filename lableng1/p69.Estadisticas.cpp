// Programa que calcula estadisticas con un conjunto de numeros
// Carlos Castaneda Ramirez
// 13 de Noviembre de 2020

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 20

int menu() {
	int op;
	system("cls");
	printf("--------------------------------------------------\n");
	printf("C�lculos estad�sticos sobre un arreglo de n�meros \n");
	printf("--------------------------------------------------\n");
	printf("Leer los elementos del arreglo ............... [1]\n");
	printf("Mostrar los elementos en el arreglo .......... [2]\n");
	printf("Calcular y mostrar estad�sticas .............. [3]\n");
	printf("Salir ...................................... [4]..\n");
	printf("Elije una opcion ? ");
	scanf("%d", &op);
	return op;
}

void leerarreglo(double A[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Numero[%d]= ", i);
		scanf("%lf", &A[i]);
	}
}

void mostrararreglo(double A[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%.2lf ", A[i]);
	}
}

double mayor(double A[], int n) {
	int i;
	double m;
	m = A[0];
	for(i=0; i<n; i++) {
		if(A[i] > m)
			m = A[i];
	}
	return m;
}

double menor(double A[], int n) {
	int i;
	double m;
	m = A[0];
	for(i=0; i<n; i++) {
		if(A[i] < m)
			m = A[i];
	}
	return m;
}

double media(double A[], int n) {
	int i;
	double s=0;
	for(i=0; i<n; i++) {
		s = s + A[i];
	}
	return s / n;
}

double varianza(double A[], double m, int n) {
	int i;
	double s=0;
	for(i=0; i<n; i++) {
		s = s +  pow( A[i] - m, 2) ;
	}
	return s / n;
}


main() {
	int op,n=0;
	char pausa;
	double A[MAX];
	double may, men, med, var, des;
	
	do {
		op = menu();
		switch(op) {
			case 1:	printf("Leyendo los elementos del arreglo\n");
					printf("Cuantos elementos ?");scanf("%d",&n);
					leerarreglo(A, n);
					break;
			case 2:	printf("Mostrando los elementos en el arreglo\n");
					mostrararreglo(A, n);
					break;
			case 3:	printf("Calculando estad�sticas en base a los numeros en el arreglos\n\n");
					may = mayor(A, n);
					men = menor(A, n);
					med = media(A, n);
					var = varianza(A, med, n);
					des = sqrt(var);
					printf("El elemento mayor del arreglo es           %.2lf\n", may);
					printf("El elemento menor del arreglo es           %.2lf\n", men);
					printf("La media de los elementos en el arreglo es %.2lf\n", med);
					printf("La varianza es                             %.2lf\n", var);
					printf("La desviaci�n estandar es                  %.2lf\n", des);
					break;
			case 4:	printf("\nGracias por utilizar nuestro sistema \n"); break;
			default:
				printf("\nElegiste una opci�n inv�lida\n");
		}
		printf("\nPresiona <Enter> para continuar ...\n");fflush(stdin);scanf("%c", &pausa);
	} while(op!=4);
	 
	printf("\n\nEso es todo por el semestre , te deseamos mucha suerte \n\n");
	
	
}
