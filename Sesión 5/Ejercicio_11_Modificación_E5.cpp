/* Programador: Álvaro Fernández García.
Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si 
están ordenados (da igual si es de forma ascendente o descendente) o no lo están. */

// Introducción de recursos:

#include <iostream>
#include <string>

// Declaración de variables:

int valor1, valor2, valor3;							// Variables: Números introducidos por el usuario.
bool orden_ascendente, orden_descendente;			// Variables auxiliares: Booleanas para los cómputos.

// Inicio del programa. 

using namespace std;

int main () {
	
	// Declararión de variables del tipo string.
	
	string verdadero = "Los números están ordenados.\n\n";
	string falso = "Los números no están ordenados.\n\n";
	
	// Introducción de datos.
	
	cout << "Introduzca el valor del primer entero: ";
	cin >> valor1;
	cout << "Introduzca el valor del segundo entero: ";
	cin >> valor2;
	cout << "Introduzca el valor del tercer entero: ";
	cin >> valor3;
	
	// Cómputos:
	
	orden_descendente = valor1 > valor2 && valor2 > valor3;
	orden_ascendente = valor1 < valor2 && valor2 < valor3;
	
	// Muestra de resultados:
		
		
	if (orden_descendente) 
		cout << verdadero;
	else
		if (orden_ascendente)
			cout << verdadero;
		else
			cout << falso;
		

	system ("pause");
	
}
