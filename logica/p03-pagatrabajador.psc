// Calcular la paga de un trabajador
// Carlos Castañeda Ramírez
// 26 de Agosto 2020

Algoritmo paga_trabajador
	// Definir variables
	Definir nombre Como Caracter
	Definir horas  Como Entero
	Definir paga, tasa Como Real
	Definir pagabruta, paganeta, impuesto Como Real
	
	// Entrada de datos
	Escribir "Nombre del trabajador" 
	Leer nombre
	Escribir "Horas trabajadas" 
	Leer horas
	Escribir "Paga por hora"
	Leer paga
	tasa = 0.10 // se asume el 10% para todos
	
	// Proceso 
	pagabruta = horas * paga
	impuesto = pagabruta * tasa
	paganeta  = pagabruta - impuesto
	
	// Salida
	Escribir "Nombre del trabajador ", nombre
	Escribir "Horas trabajadas      ", horas
	Escribir "Paga por hora         ", paga
	Escribir "Paga bruta            ", pagabruta
	Escribir "Impuesto              ", impuesto
	Escribir "Paga neta             ", paganeta
	
FinAlgoritmo
