// Dado un numero entero 1 .. 4 decir con letra la estacion del año
// Carlos Castaneda Ramirez
// 14 de Septiembre 2020

Algoritmo estacion_del_año
	Definir estacion Como Entero
	
	Escribir "Dame un numero entre 1 y 4 y te dire que estacion es "
	Leer estacion
	
	Si (estacion>=1) Y (estacion<=4) Entonces
		Si estacion=1 Entonces
			Escribir "Pimavera"
		FinSi
		Si estacion=2 Entonces
			Escribir "Verano"
		FinSi
		Si estacion=3 Entonces
			Escribir "Otoño"
		FinSi
		Si estacion=4 Entonces
			Escribir "Invierno"
		FinSi
	SiNo
		Escribir "Estacion invalida"
	FinSi
	
FinAlgoritmo
