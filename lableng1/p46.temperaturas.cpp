// Convierte un rango de temperaturas de centigrados a farenheit
// Carlos Castaneda Ramirez
// 9 de octubre de 2020

#include<stdio.h>

main() {
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
