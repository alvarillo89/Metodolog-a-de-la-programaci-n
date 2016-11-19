/* Programador: �lvaro Fern�ndez Garc�a. 
El siguiente programa nos pide que introduzcamos tes n�meros enteros, a continuaci�n dicho programa
imprime dichos d�gitos separados por tres espacios. */

// Introducci�n de recursos.

#include <iostream>
#include <cmath>

// Declaraci�n de variables.

int numero;								// Variable: N�mero de tres d�gitos introducido por el usuario.
int primer_digito;					// Variable: El primer entero de los tres n�meros.
int segundo_digito;					// Variable: El segundo entero de los tres n�meros.
int tercer_digito;					// Variable: El tercer entero de los tres n�meros.

// Inicio del programa.

using namespace std;

int main (){
	
	// Introducci�n de datos.
	
	cout << "Introduzca un n�mero entero de tres d�gitos: ";
	cin >> numero;
	
	// Operaciones necesarias. Separaci�n de los tres digitos y almacenamiento en variables.
	
	primer_digito = (numero / 100) % 10;
	segundo_digito = (numero / 10) % 10;
	tercer_digito = numero % 10;
	
	// Muestra de los tres d�gitos separados.
	
	cout << primer_digito << "   " << segundo_digito << "   " << tercer_digito << "\n\n";
	
	system ("pause");
	
}
