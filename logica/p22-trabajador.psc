// Calcular la paga de un trabajador tomando en cuenta horas extra al doble
// Carlos Castaneda R
// 14 de Septiembre 2020

// Caso 1 - 35 horas a 50 pesos la hora  = 1750
// Caso 2 - 45 horas a 50 pesos la hora =  (45x50) 2000 + (5*(2x50))= 500 = 2500

Algoritmo trabajador
	Definir nombre Como Caracter
	Definir horas Como Entero
	Definir paga, salario Como Real
	
	Escribir "Nombre del trabajador "; Leer nombre
	Escribir "Horas trabajadas      "; Leer horas
	Escribir "La paga x hora        "; Leer paga
	
	Si horas <= 40 Entonces
		salario = horas * paga
	SiNo
		salario = (40*paga) +  ( (horas-40) * (paga *2) )
	FinSi
	
	Escribir "El salario es ", salario
	
FinAlgoritmo
