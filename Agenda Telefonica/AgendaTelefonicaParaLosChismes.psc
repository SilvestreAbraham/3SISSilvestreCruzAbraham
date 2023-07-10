Proceso Agenda_Telefonica_de_Chismes
	
	Definir lisnombre,listelofi,listelcel,listelcasa,listelper Como Caracter
	Dimension lisnombre(9)
	Dimension listelper(9)
	Dimension listelcel(9)
	Dimension listelcasa(9)
	Dimension listelofi(9)
	Definir numer,i,k,j,da,co,ax,op Como Entero
	j <- 0
	k <- 0
	i <- 0
	op <- 0
	co <- 0
	
	inicializar(lisnombre,listelper,listelcel,listelcasa,listelofi)
	Repetir
		Escribir "AGENDA TELEFONICA PARA LOS CHISMES"
		Escribir "Elija una Opcion"
		Escribir "(1) Crear Contacto Chismoso"
		Escribir "(2) Ver Contacto Registrado del Chismoso"
		Escribir "(3) Eliminar Contacto por Numero del Chismoso"
		Escribir "(4) Salir para ir al chisme a otro lado"
		Leer op
		Segun op Hacer
			1:
				Para j <- 0 Hasta 1 Hacer
					si lisnombre(0) = "0" Entonces
						co <- co + 1
						k <- j
						j <- 8
					FinSi
				Fin Para
				si i < 3 o co > 8 Entonces
					ax <- i 
					i <- k 
					GuardarContacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i)
					co <- 0
					i <- ax
					i <- i + 1
				FinSi
			2:
				VerContacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i)
				
			3:
				EliminarContacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i)
				
		Fin Segun
	Hasta Que op = 4
	Esperar Tecla
FinProceso

SubProceso Inicializar(lisnombre,listelper,listelcel,listelcasa,listelofi)
	Definir a Como Entero
	Para a <- 0 Hasta 1 Hacer
		lisnombre(a) <- "0"
		listelper(a) <- "0"
		listelcel(a) <- "0"
		listelcasa(a) <- "0"
		listelofi(a) <- "0"
	Fin Para
FinSubProceso

SubProceso GuardarContacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i)
	Definir numer Como Caracter
	Definir co,val Como Entero
	co <- 0 
	val <- 0
	Escribir "Ingrese Nombre del Contacto a Guardar"
	Leer lisnombre(i)
	Mientras val = 0 Hacer
		Escribir "Ingrese el Numero de Telefono Personal"
		Leer numer
		Escribir "Ingrese el Numero de Telefono Celular"
		Leer numer
		Escribir "Ingrese el Numero de Telefono de Casa"
		Leer numer
		Escribir "Ingrese el Numero de Telefono de Oficina"
		Leer numer
		
		si Longitud(numer) = 10 Entonces
			listelper(i) <- numer
			listelcel(i) <- numer
			listelcasa(i) <- numer
			listelofi(i) <- numer
			val <- 1
		SiNo
			Escribir "Numero Invalido, Vuelva a Ingresar el Numero No Mayor a 10 Digitos"
			val <- 0
			co <- 0
		FinSi
	Fin Mientras
FinSubProceso

SubProceso VerContacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i)
	Definir j Como Entero
	j <- 0 
	Para j <- 0 Hasta 1 Hacer
		si listelper(j) <> "0" Entonces
			Escribir " " lisnombre(j)
			Escribir listelper(j)
			Escribir listelcel(j)
			Escribir listelcasa(j)
			Escribir listelofi(j)
		FinSi
	Fin Para
FinSubProceso

SubProceso EliminarContacto(lisnombre,listelper,listelcel,listelcasa,listelofi,i)
	Definir j Como Entero
	Definir numer Como Caracter
	j <- 0 
	Escribir "Ingrese el Numero de Telefonon del Contacto"
	Leer numer
	Para j <- 0 Hasta i - 1 Hacer
		si (listelper(j)= numer) o (listelcel(j)= numer) o (listelcasa(j)= numer) o (listelofi(j)= numer) Entonces
			listelper(j) <- "0"
			listelcel(j) <- "0"
			listelcasa(j) <- "0"
			listelofi(j) <- "0"
		FinSi
	Fin Para
	
FinSubProceso



