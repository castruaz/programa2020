// Programa de ejemplo de variables y constantes literales enteras
// Carlos Castaneda Ramirez
// 11 de Septiembre de 2020
#include <stdio.h>

main() 
{
	// Declaracion de variables enteras
	int base;
	int altura;
	int alto, ancho;
	int largo, profundidad;
	int lado1=10;
	int lado2=20, lado3=30;
	
	// Asignacion de constantes literales enteras
	alto=0x41;  // hexadecimal 0x
	ancho=0x7e; // hexadecimal 0x
	lado1=0177;  // Octal   0
	
	// Entrada de datos enteros
	printf("Teclea la base   = "); scanf("%d",&base);
	printf("Teclea la altura = "); scanf("%d",&altura);
	printf("Teclea largo y profundidad separados por espacio = ");
	scanf("%d %d", &largo, &profundidad);
	
	// Salida de datos enteros
	printf("\n\n");
	printf("lado 1 = %o, lado 2 = %d, lado 3 = %d, suma de los lados = %d\n", 
		   lado1, lado2, lado3, lado1+lado2+lado3);
	printf("La base es = %d \t La altura es = %d \n\n", base, altura);
	printf("El alto = %x, el ancho = %x como hexadecimales \n\n", alto, ancho);
	printf("El alto = %c, el ancho = %c como caracteres    \n\n", alto, ancho);
	printf("El largo = %o , La profundidad = %o expresados como octal", largo, profundidad);
		
}
