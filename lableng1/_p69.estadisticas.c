// Estadisticas
 
#include<stdio.h>
#include<math.h>
#define MAX 20

void leer(double a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Numero %d: ", i);
		scanf("%lf", &a[i]);
	}
}

void imprime(double a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%.2lf ", a[i]);
	}
}

double mayor(double a[] , int n) {
	double m=a[0];
	for(int i=0; i<n; i++)
		if(a[i]>m) m=a[i];
	return m;
}

double menor(double a[], int n) {
	double m=a[0];
	for(int i=0; i<n; i++)
		if(a[i]<m) m=a[i];
	return m;
}

double media(double a[], int n) {
	double s=0;
	for(int i=0; i<n; i++)
		s+=a[i];
	return s/n;
}

double varianza(double a[], double m, int n) {
	double s=0;
	for(int i=0; i<n; i++)
		s += pow((a[i] - m),2);
	return s / n;
}

int menu() {
	int op;
	printf("--------------------------------------------------\n");
	printf("Calculos estadísticos sobre un arreglo de números \n");
	printf("--------------------------------------------------\n");
	printf("Leer los elementos en el arreglo.............[ 1 ]\n");
	printf("Mostrar los elementos en el arreglo..........[ 2 ]\n");
	printf("Calcular y mostrar estadisticas..............[ 3 ]\n");
	printf("Salir.....................................[ 4 ]\n");
	printf("--------------------------------------------------\n");
	printf("Elije ? ");scanf("%d", &op);
	return op;
}

int main() {
	int op, n;
	double nums[MAX], med, var, may, men;
	
	do {
		op = menu();
		switch(op) {
			
			case 1: printf("\nLeyendo los elementos del arreglo \n");
					printf("Cuantos numeros deseas procesar ?\n");scanf("%d",&n);
					leer(nums,n);
					printf("\n\n");
					break;
				
			case 2:	printf("\nLos elementos del arrelo son: \n");
					imprime(nums,n);
					printf("\n\n");
					break;
				
			case 3: printf("\nLas estadisticas son: \n");
					may = mayor(nums,n);
					men = menor(nums,n);
					med = media(nums,n);
					var = varianza(nums,med,n);
					printf("El elemento mayor es      : %.2f\n", may);
					printf("El elemento menor es      : %.2f\n", men);
					printf("El promedio es            : %.2f\n", med);
					printf("La varianza  es           : %.2f\n", var);
					printf("La desviación estandar es : %.2f\n", sqrt(var));
					printf("\n\n");
					break;
				
			case 4: printf("\n\nGracias por utilizar el sistema, adios \n\n");break;
			
			default: printf("\n\nOpción Inválida\n\n"); 
		}
	} while(op!=4);
	return 0;
}





















