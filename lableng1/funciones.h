// Funciones de libreria creadas por mi mismo

#include<stdio.h> 
#include<stdlib.h>

// Imprimir los impares 
void impares() {
	int c, n, s=0;
	
	printf("Imprime los numero impares desde 1 hasta n \n");
	printf("Hasta donde deseas imprimir los impares ? ");
	scanf("%d", &n);
	c=1;
	while(c<=n) {
		printf("%d\n", c);
		s+=c;  // s = s + c
		c+=2;  // c = c + 2;
	}
	printf("\nLa suma de los impares es %d", s);
}

// Imprimir los pares 
void pares() {
	int c, n, s=0;
	
	printf("Imprime los numero pares desde 100 hasta n \n");
	printf("Hasta donde deseas imprimir los impares ? ");
	scanf("%d", &n);
	c=100;
	while(c>=n) {
		printf("%d\n", c);
		s+=c;  // s = s + c
		c-=2;  // c = c - 2;
	}
	printf("\nLa suma de los pares es %d", s);
}

// Calcular promedio
void promedio() {
	float c, s, p, n;
	
	c=s=p=n=0;
	
	printf("\nCalcula el promedio de n calificaciones\n");
	
	do {
		printf("Dame una calificación ? ");scanf("%f", &n);
		s+=n;
		c++;
	} while(n!=0);
	p = s / (c-1);
	printf("\nLa suma de las calificaciones es %.2f \n", s);
	printf("\nEl promedio de las calificaciones es %.2f\n",p);
}

// Convertir temperaturas
void temperaturas() {
	float ini, fin, r;
	int c;
	
	ini=fin=r=0;
	c=0;
	
	printf("Convierte un rango de temperaturas de cenigrados a farnheit\n");
	printf("Dame Temperatura Inicial ?\n");scanf("%f",&ini);
	printf("Dame Temperatura Final   ?\n");scanf("%f",&fin);
	
	c=ini;
	printf("Centigrados\t\tFarenheit\n");
	while(c<=fin) {
		r = (c * 9/5) + 32;
		printf("%d\t\t\t%.2f\n",c,r);
		c++;
	}
}
