// Calcular las funciones trigonometricas de un angulo en radianes
// Carlos Castañeda Ramirez
// 31 de Agosto de 2020

Algoritmo funcionestrigonometricas
	Definir angulo Como Real
	Definir seno, coseno, tangente, lognatural Como Real
	
	Escribir "Dame el angulo (en radianes) "; Leer angulo
	
	seno = sen(angulo)
	coseno = cos(angulo)
	tangente = tan(angulo)
	lognatural = ln(angulo)
	
	Escribir "El angulo es de ", angulo
	Escribir "---------------------------------------"
	Escribir "Seno       : " , seno
	Escribir "Coseno     : " , coseno
	Escribir "Tangente   : " , tangente
	Escribir "Log Natural: " , lognatural
	Escribir "---------------------------------------"
	Escribir "Gracias por utilizar este programa tan chido"
	
FinAlgoritmo
