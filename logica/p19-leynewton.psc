// Convierte una temperatura a farnheit o centigrados
// Carlos Castaneda Ramirez
// 9 de Sptiembre 2020

Algoritmo temperaturas
	Definir f, m, a Como Real
	Definir op Como Caracter
	
	Escribir "Segunda Ley de Newton        "
	Escribir "-----------------------------"
	Escribir " [ F ] Calcular Fuerza       "
	Escribir " [ M ] Calcular Masa         "
	Escribir " [ A ] Calcular Aceleracion  "
	Escribir "-----------------------------"
	Escribir "Elige una opcion ? "; Leer op
	op = Mayusculas(op) // convierte a mayusculas
	
	Si op="F" Entonces
		Escribir "Dame la masa "; leer m
		Escribir "Dame la aceleracion "; leer a
		f = m * a
		Escribir "La fuerza es ", f
	SiNo
		Si op="M" entonces 
			Escribir "Dame la fuerza "; leer f
			Escribir "Dame la aceleracion "; leer a
			m = f / a
			Escribir "La masa es ", m
		SiNo
			Si op="A" entonces
				Escribir "Dame la fuerza "; leer f
				Escribir "Dame la masa "; leer m
				a = f /m
				Escribir "La aceleracion es ", m
			SiNo
				Escribir "No se puede calcular"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
