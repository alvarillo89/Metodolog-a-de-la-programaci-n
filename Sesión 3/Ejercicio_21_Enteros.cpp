/* Programador: Álvaro Fernández García.
Programa establecido para comprender la equivalencia en C++ entre tipos enteros
y de carácter. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables

int entero;								// Número entero que mostrará el programa.
char caracter;							// Número introducido por el usuario.

// Inicio del programa:

using namespace std;

int main () {
	
	// Introducción de datos:
	
	cout << "Introduzca un numero del 0 al 9: ";
	cin >> caracter;
	
	// Operaciones:
	
	entero = caracter - 48;			// También se podría haber colocado - '0', ya que al tratarse de un tipo de dato entero, almacena el ASCII correspondiente.
	
	// Resultados:
	
	cout << " El valor numérico correspondiente es: " << entero << "\n\n";

	system ("pause");
	
}
