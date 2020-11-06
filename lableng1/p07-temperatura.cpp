// Programa que convierte grados farenheit a celsius
// Carlos Castañeda Ramírez
// 4 de Septiembre 2020

#include<stdio.h>

main() {
	float gf, gc;
	
	printf("Programa que convierte grados farenheit a celsius\n");
	printf("Dame los grados Farenheit ");
	scanf("%f", &gf);
	
	gc = (gf - 32) * 5/9;
	
	printf("Los grados celcius son : %f", gc);
	 
}
