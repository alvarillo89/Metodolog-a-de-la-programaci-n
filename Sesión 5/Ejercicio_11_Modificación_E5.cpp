/* Programador: �lvaro Fern�ndez Garc�a.
Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si 
est�n ordenados (da igual si es de forma ascendente o descendente) o no lo est�n. */

// Introducci�n de recursos:

#include <iostream>
#include <string>

// Declaraci�n de variables:

int valor1, valor2, valor3;							// Variables: N�meros introducidos por el usuario.
bool orden_ascendente, orden_descendente;			// Variables auxiliares: Booleanas para los c�mputos.

// Inicio del programa. 

using namespace std;

int main () {
	
	// Declarari�n de variables del tipo string.
	
	string verdadero = "Los n�meros est�n ordenados.\n\n";
	string falso = "Los n�meros no est�n ordenados.\n\n";
	
	// Introducci�n de datos.
	
	cout << "Introduzca el valor del primer entero: ";
	cin >> valor1;
	cout << "Introduzca el valor del segundo entero: ";
	cin >> valor2;
	cout << "Introduzca el valor del tercer entero: ";
	cin >> valor3;
	
	// C�mputos:
	
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
