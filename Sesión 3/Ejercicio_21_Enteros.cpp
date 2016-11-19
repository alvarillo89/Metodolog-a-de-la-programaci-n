/* Programador: �lvaro Fern�ndez Garc�a.
Programa establecido para comprender la equivalencia en C++ entre tipos enteros
y de car�cter. */

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables

int entero;								// N�mero entero que mostrar� el programa.
char caracter;							// N�mero introducido por el usuario.

// Inicio del programa:

using namespace std;

int main () {
	
	// Introducci�n de datos:
	
	cout << "Introduzca un numero del 0 al 9: ";
	cin >> caracter;
	
	// Operaciones:
	
	entero = caracter - 48;			// Tambi�n se podr�a haber colocado - '0', ya que al tratarse de un tipo de dato entero, almacena el ASCII correspondiente.
	
	// Resultados:
	
	cout << " El valor num�rico correspondiente es: " << entero << "\n\n";

	system ("pause");
	
}
