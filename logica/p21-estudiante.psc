// Verifica que el estudiante sea mayor de edad y con calificaciones aprobatorias
// Carlos Castaneda
// 14 de Septiembre 2020

Algoritmo estudiante
	Definir nombre Como Caracter
	Definir edad Como Entero
	Definir cal1, cal2 Como Real
	
	Escribir "Dame el nombre del estudiante "; Leer nombre
	Escribir "Dame la edad "; Leer edad
		
	Si edad >= 18 Entonces
		Escribir "Dame Calificación 1 "; Leer cal1
		Escribir "Dame Calificación 2 "; Leer cal2
		Si cal1 >= 8 Y cal2 >= 8  Entonces
			Escribir nombre, " HA SIDO ACEPTADO(A) para estudiar con nosotros"
		SiNo
			Escribir nombre, " NO ACEPTADO(A) por tener bajas calificaciones"
		FinSi
	SiNo
		Escribir nombre, " NO ACEPTADO(A) por ser menor de edad"
	FinSi
	
FinAlgoritmo
 