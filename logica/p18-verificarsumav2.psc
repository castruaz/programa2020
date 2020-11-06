// dados 3 numeros verifica si la suma de dos de ellos es igual al otro
// Carlos Castaneda Ramirez
// 9 Septiembre 2020
//                   n1  n2 n3
// Caso de prueba:   11  8   3

Algoritmo verifica_suma
	Definir n1, n2, n3 Como Entero
	
	Escribir "Numero 1 ? "; Leer n1
	Escribir "Numero 2 ? "; Leer n2
	Escribir "Numero 3 ? "; Leer n3
	
	Si (n1 + n2) = n3 Entonces
		Escribir n1, " + ", n2, " = ", n3
	FinSi
	
	Si (n2 + n3) = n1 Entonces
		Escribir n2, " + ", n3, " = ", n1
	FinSi
	
	Si (n1 + n3) = n2 Entonces
		Escribir n1, " + ", n3, " = ", n2
	FinSi
			
FinAlgoritmo
