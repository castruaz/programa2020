// Convierte una temperatura a farnheit o centigrados
// Carlos Castaneda Ramirez
// 9 de Sptiembre 2020

Algoritmo temperaturas
	Definir temp, grados Como Real
	Definir op Como Caracter
	
	Escribir "Convertir temperaturas                  "
	Escribir "----------------------------------------"
	Escribir " [ C ] Convertir a grados centigrados   "
	Escribir " [ F ] Convertir a grados farenheit     "
	Escribir "----------------------------------------"
	Escribir "Elige una opcion ? "; Leer op
	op = Mayusculas(op) // convierte a mayusculas
	
	Si op="C" Entonces
		Escribir "Dame la temperatura en grados farenheit "; Leer temp
		grados = (temp - 32) * 5 / 9;
		Escribir temp, " grados farenheit corresponde a ", grados, " grados centigrados"
	SiNo
		Si op="F" Entonces
			Escribir "Dame la temperatura en grados centigrados "; Leer temp
			grados = temp * 9 /5 + 32;
			Escribir temp, " grados centigrados corresponde a ", grados, " grados farenheit"
		SiNo
			Escribir "No puedo calcular"
		FinSI
	FinSi
	
FinAlgoritmo
