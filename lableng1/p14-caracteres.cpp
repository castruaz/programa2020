// Programa de ejemplo de constantes literales de caracter 
// Carlos Castaneda Ramirez
// 11 de Septimebre de 2020
#include<stdio.h>
#include<string.h> // gets, puts
main()
{
	// Declaracion de variables de caracter (char)
	char respuesta='N';
	char letra1, letra2, letra3;
	char a, b;
	char ca, cb, cc;
	char cd, ce, cf;
	
	// Declaracion de variabes de cadena
	char mensaje[]="Ya casi es hora de irnos";
	char nombre[100];
	char encabezado[]="primero \t segundo \t tercero \n";
	
	// Asignar constantes literales de caracter y enteros
	a='X'; b='3';
	ca=201; cb=205; cc=187;
	cd=200; ce=186; cf=188;
	
	// Ejemplo de entrada de caracteres y cadenas
	
	printf("\'hola\'\\mundo"); // secuencias de escape \ 
	//printf("'hola' \ mundo");
	
	printf("Cual es tu nombre  ? "); gets(nombre);
	printf("Teclea 3 letras separadas por espacios ? ");
	scanf("%c %c %c", &letra1, &letra2, &letra3);
	
	// Salida de caracteres y cadenas
	printf("\n");
	printf("%c%c%c%c\n", ca, cb, cb, cc);
	printf("%c  %c\n", ce, ce);
	printf("%c%c%c%c\n", cd, cb, cb, cf);
	
	
	printf("Nombre:     ");puts(nombre);
	printf("Mensaje     ");puts(mensaje);
	printf("Encabezado  %s ", encabezado);
	
	printf("\nLas letras como enteros    son:  %d   %d   %d \n", letra1, letra2, letra3);
	printf("\nLas letras como caracteres son:  %c   %c   %c \n", letra1, letra2, letra3);
	
	printf("\nEl valor a = %c , El valor de b %c \n", a, b);
	
	
		
	
}
