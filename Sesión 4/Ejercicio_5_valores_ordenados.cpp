/* Programador: �lvaro Fern�ndez Garc�a.
Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si 
est�n ordenados (da igual si es de forma ascendente o descendente) o no lo est�n. */

// Introducci�n de recursos:

#include <iostream>
#include <string>

// Declaraci�n de variables:

int valor1, valor2, valor3;			// Varibles: N�meros introducidos por el usuario.

// Inicio del programa. 

using namespace std;

int main () {
	
	string verdadero = "Los n�meros est�n ordenados.\n\n";
	string falso = "Los n�meros no est�n ordenados.\n\n";
	
	// Introducci�n de datos.
	
	cout << "Introduzca el valor del primer entero: ";
	cin >> valor1;
	cout << "Introduzca el valor del segundo entero: ";
	cin >> valor2;
	cout << "Introduzca el valor del tercer entero: ";
	cin >> valor3;
	
	// Expresi�nes l�gicas:
	
	if (valor1 > valor2 && valor2 > valor3) 
		cout << verdadero;
	else
		if (valor1 < valor2 && valor2 < valor3)
			cout << verdadero;
		else
			cout << falso;
			
	system ("pause");
	
}
