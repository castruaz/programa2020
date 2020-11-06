// Tarea 4 - Ejemplo 14 . Descomponer un numero de 4 cifras (millares, centenas, decenas, unidades)
// Carlos Castaneda Ramirez
// 31 Ago 2020  -  5678

Algoritmo descomponer
	Definir num Como Entero
	Definir millares, centenas, decenas, unidades Como Entero
	
	Escribir "Dame un numero de 4 cifras entero "
	Leer num
	
	millares = trunc( num / 1000 )  // trunc elimina los decimales
	centenas =  trunc( (num - (millares * 1000) ) / 100) 
	decenas  =  trunc( ( (num - (millares*1000)) - (centenas*100)) / 10 )
	unidades =   ((num - (millares*1000)) - (centenas*100)) - decenas * 10
	
	
	Escribir "Millares ", millares
	Escribir "Centenas ", centenas
	Escribir "Decenas  ", decenas
	Escribir "Unidades ", unidades
	
FinAlgoritmo
