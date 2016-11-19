/* Programador: �lvaro Fern�ndez Garc�a.
Escriba una funci�n en C++ LeeOpcion2Alternativas que imprima en pantalla un mensaje, lea una opci�n como 
un car�cter y s�lo permita aceptar los caracteres 'S' o 'N' (may�scula o min�scula). �Qu� deber�a devolver 
la funci�n? �El car�cter le�do o un bool?. Aplique esta funci�n en la soluci�n del ejercicio 13 (Renta bruta y neta) 
de la relaci�n de problemas II, para leer si una persona es pensionista o si es aut�nomo. */

// Introducci�n de recursos. 

#include <iostream>
#include <cctype>
#include <string>

// Declaraci�n de variables:

char estado_civil;					// Variable: Pregunta el estado civil del usuario.
double renta_bruta;					// Variable: Cantidad de dinero que el trabajador gana.
double retencion;						// Variable: Retenci�n aplicada por el Estado.
double renta_neta;					// Variable: Dinero que le queda al trabajador tras los c�lculos.

// Inicio del programa.

using namespace std;

// Declaraci�n de funciones:

bool LeeOpcion2Alternativas ( string mensaje ) {
	char respuesta;
	
	do {
		cout << mensaje;
		cin >> respuesta;
		respuesta = toupper (respuesta);
	} while (respuesta != 'S' && respuesta != 'N');
	
	if (respuesta == 'S')
		return true;
	else
		return false;
		
	/* Algoritmo:
		Bucle: Lee un car�cter cualquiera y lo convierte a may�scula. Vuelve a realiar el 
		bucle si la letra introducida es distinta de S o N (tambi�n admite min�scula). 
		Si la letra introducida es S, devuelve verdadero. En cualquier otro caso
		devuelve falso. */
}

// Debe devolver un tipo bool para as� aplicarla dentro de los condicionales.

int main () {
	
	// Introducci�n de datos:
	
	cout << "Est� usted casado o soltero? (C / S): ";
	cin >> estado_civil;
	cout << "Introduzca su Renta Bruta: ";
	cin >> renta_bruta;
	cout << "Introduzca la retenci�n inicial del Estado: ";
	cin >> retencion;
	
	// Operaciones y expresiones l�gicas.
	
	if (LeeOpcion2Alternativas ("�Es usted aut�nomo? (S / N): "))
		retencion = retencion - 3;
	else {
		
		if (LeeOpcion2Alternativas ("�Es usted pensionista? (S / N): "))
			retencion = retencion + 1;
		else {
			retencion = retencion + 2;
			
			if (renta_bruta < 20000)
				retencion = retencion + 2;
			else {
				
				if (estado_civil == 'C')
					retencion = retencion + 2.5;
				else
					retencion = retencion + 3;
			} 
		}
	}

renta_neta = renta_bruta - renta_bruta * retencion / 100;

// Muestra de resultados: 

cout << "Su renta neta tras las aplicaciones es de: " << renta_neta << " �" << "\n\n";

system ("pause");

}


	
	
