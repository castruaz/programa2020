// Verifica si 3 numeros son consecutivos
// Carlos Castaneda R.
// 21 de Septiembre de 2020
// Caso 1 :  3 4 5 << si
// Caso 2 : 10 12 14 << si
// Caso 3:  6 5 7 << no

Algoritmo numeros_consecutivos
	Definir n1, n2, n3 Como Entero
	
	Escribir "Dame el primer numero  " ; Leer n1
	Escribir "Dame el segundo numero " ; Leer n2
	Escribir "Dame el tercer numero  " ; Leer n3
	
	//	Si n1 < n2 Y n2 < n3 Entonces
	//		Escribir "Si son consecutivos "
	//	SiNo
	//		Escribir "NO son consecutivos"
	//	FinSi
	
	Si n2-n1=1 Y n3-n2=1 Entonces
		Escribir "Si son consecutivos "
	SiNo
		Escribir "NO son consecutivos"
	FinSi
	
FinAlgoritmo
