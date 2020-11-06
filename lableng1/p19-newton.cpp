// Programa que calcula la 2da Ley de Newton
// Carlos Castaneda
// 18 Septiembre de 2020

#include<stdio.h>

main() {
	float f, m, a;
	int op;
	
	printf("Programa que calcula la 2da Ley de Newton\n");
	printf("-----------------------------------------\n");
	printf("Calcular fuerza ................... [ 1 ]\n");
	printf("Calcular masa ..................... [ 2 ]\n");
	printf("Calcular aceleracion .............. [ 3 ]\n");
	printf("-----------------------------------------\n");
	printf("Elige una opcion ? "); 
	scanf("%d", &op);
	
	if(op==1) {
		printf("\nCalculando la fuerza ...\n");
		printf("Masa        ? ");scanf("%f", &m);
		printf("Aceleración ? ");scanf("%f", &a);
		f = m * a;
		printf("\nLa fuerza es %f \n", f);
	} 
	if(op==2) {
		printf("\nCalculando la masa ...\n");
		printf("Fuerza      ? ");scanf("%f", &f);
		printf("Aceleración ? ");scanf("%f", &a);
		m = f / a;
		printf("\nLa masa es %f \n", m);
	} 
	if(op==3) {
		printf("\nCalculando la aceleracion ...\n");
		printf("Fuerza    ? ");scanf("%f", &f);
		printf("Masa      ? ");scanf("%f", &m);
		a = f / m;
		printf("\nLa aceleración es %f \n", a);
	} 
	
}
