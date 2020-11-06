// Repaso 2o Parcial

SubProceso Encabezado()
	Limpiar Pantalla
	Escribir "------------------------------------------------------"
	Escribir "Universidad del Bajio, SA"
	Escribir "Curso de Técnicas Avanzadas de Programación"
	Escribir "Inscripción de Participantes"
	Escribir "------------------------------------------------------"
	Escribir ""
FinSubProceso

Algoritmo repasoparcial2	
	Definir resp, nombre, tipo Como Caracter
	Definir ta, td, tt, da, dd, dt, totpar, totdin Como Entero
	Definir sedad, pedad Como Real
	
	// Entrada de Datos
	Repetir
		Encabezado()
		Escribir "Entrada de datos de los participantes"
		Escribir "Nombre   :"; Leer nombre
		Escribir "Edad     :"; Leer edad
		Si edad >= 18 Entonces
			sedad = sedad + edad
			Escribir "Tipo de participante"
			Escribir "[A]lumno:$50    [D]ocente:$80    [T]rabajador: $60" ; Leer tipo; tipo=Mayusculas(tipo)
			Segun tipo Hacer
				"A":	ta = ta + 1
					da = da + 50
				"D":	td = td + 1
					dd = dd + 80
				"T":	tt = tt + 1
					dt = dt + 60
				De Otro Modo:
					Escribir "Tipo de participante invalido - ** Registro anulado **"; Escribir""
			FinSegun 
			Escribir ""; Escribir "Registro PROCESADO ..."; Escribir ""
		SiNo
			Escribir "No se aceptan menores de edad - **Registro anulado **"
		FinSi
		Escribir "Deseas procesar otra inscripción (S/N)"; Leer resp; resp = Mayusculas(resp)
	Hasta Que resp="N" 
	
	totpar = ta + td + tt
	pedad = sedad / totpar
	totdin = da + dd + dt
	
	// Resumen de participantes
	Escribir "------------------------------------"
	Escribir "Resumen de participantes"
	Escribir "------------------------------------"
	Escribir "Alumnos      : ", ta
	Escribir "Docentes     : ", td
	Escribir "Trabajadores : ", tt
	Escribir "Total        : ", totpar
	Escribir "Promedio edad: ", pedad ; Escribir""
	
	// Resumen de ingresos
	Escribir "------------------------------------"
	Escribir "Resumen de Dinero"
	Escribir "------------------------------------"
	Escribir "Resumen de Ingresos"
	Escribir "Dinero Alumnos      : ", da
	Escribir "Dinero Docentes     : ", dd
	Escribir "Dinero Trabajadores : ", dt
	Escribir "Total de Dinero.... : ", totdin; Escribir ""
	
	Escribir "Gracias por usar nuestro sistema"
	
	
FinAlgoritmo



