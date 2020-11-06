// Dado un angulo en grados decir el tipo de angulo que es
// Carlos Castaneda
// 14 de Septiembre 2014

Algoritmo angulos
	Definir angulo Como Real
	
	Escribir "Dame el angulo "
	Leer angulo
	
	Si angulo<0 O angulo>360 Entonces
		Escribir "El angulo es incorrecto"
	SiNo
		Si angulo<90 Entonces 
			Escribir "Agudo"
		FinSi
		Si angulo=90 Entonces 
			Escribir "Recto"
		FinSi
		Si angulo>90 Y angulo<180 Entonces 
			Escribir "Obtuso"
		FinSi
		Si angulo=180 Entonces 
			Escribir "Llano"
		FinSi
		Si angulo>180 Y angulo<=360 Entonces 
			Escribir "Cóncavo"
		FinSi
	FinSi
FinAlgoritmo
