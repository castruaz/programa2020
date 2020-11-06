// Calcula el promedio de 3 notas y manda un mensaje respectivo
// Carlos Castaneda Ramirez
// 21 de Septiembre de 2020

Algoritmo calculo_notas
	Definir c1,c2,c3,prom Como Real

	Escribir "Calificacion 1";Leer c1
	Escribir "Calificacion 2";Leer c2
	Escribir "Calificacion 3";Leer c3
	
	prom=(c1+c2+c3)/3
	Escribir "Tu promedio es : ", prom
	
	Si prom>=0 Y prom<=10 Entonces
		Si prom>=0 Y prom<=6 Entonces
			Escribir "Quedas reprobado"
		FinSi
		Si prom>=6.1 Y prom<=7 Entonces
			Escribir "Pasaste de panzaso (Panzaste)"
		FinSi
		Si prom>=7.1 Y prom<=8 Entonces
			Escribir "Pasaste muy bien, pero aún puedes mejorar"
		FinSi
		Si prom>=8.1 Y prom<=9 Entonces
			Escribir "Excelente sigue asi"
		FinSi
		Si prom>=9.1 Y prom<=10 Entonces
			Escribir "Perfecto tu esfuerzo valio la pena"
		FinSi
	SiNo
		Escribir "Calificaciones fuera de rango"
	FinSi
FinAlgoritmo
