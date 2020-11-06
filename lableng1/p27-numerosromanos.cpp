// Dado un numero entero entre 1 y 10 imprime su equivalente en romano
// Carlos Castañeda
// 25 Septiembre 2020

#include<stdio.h>
main() {
	int n;
	
	printf("\nDado un numero entero entre 1 y 10 imprime su equivalente en romano\n");
	printf("Dame un numero ?\n");
	scanf("%d", &n);
	
	switch(n) {
		case 1 :printf("I");break;
		case 2 :printf("II");break;
		case 3 :printf("III");break;
		case 4 :printf("IV");break;
		case 5 :printf("V");break;
		case 6 :printf("VI");break;
		case 7 :printf("VII");break;
		case 8 :printf("VIII");break;
		case 9 :printf("IX");break;
		case 10:printf("X");break;
		default: printf("\nNumero fuera de rango\n"); 
	}
	printf("\n Gracias por utilizar este programa\n");	
}
