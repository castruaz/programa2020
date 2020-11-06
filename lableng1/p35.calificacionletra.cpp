// Regresa la calificacion numerica como letra (A,B,C,D,E,F)
// Carlos Castaneda R
// 2 de Octubre de 2020

#include<stdio.h>

char CalifLetra(float c) {
	char letra;
	if(c>=0 && c<=100) {
		if(c>=90 && c<=100) letra='A';
		if(c>=80 && c<=89)  letra='B';
		if(c>=70 && c<=79)  letra='C';
		if(c>=60 && c<=69)  letra='D';
		if(c>=0 && c<=59)   letra='F';
	}
	else letra='X';
	
	return letra;
}

main() {
	float cal;
	char r;
	
	printf("Programa que regresa la calificacion numerica como letra (A,B,C,D,E,F) X es error\n");
	printf("Dame una calificacion ? \n");
	scanf("%f", &cal);
	
	r = CalifLetra(cal);
	
	if(r!='X')
		printf("La calificación %f equivale a la letra %c", cal, r);
	else
		printf("La calificacion estaba en un rango incorrecto");
	
}
