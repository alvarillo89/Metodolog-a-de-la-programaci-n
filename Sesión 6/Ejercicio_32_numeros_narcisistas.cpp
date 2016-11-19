/* Programador: �lvaro Fern�ndez Garc�a.
Construir un programa que, dado un n�mero entero positivo, 
nos indique si el n�mero es o no narcisista. */

// Inclusi�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables:

int dato;							// N�mero introducido por el usuario.
int copia_dato;					// Variable que copia el n�mero introducido.
int numero_digitos;				// Digitos del n�mero introducido.
int cociente_diez;				// Potencia de diez necesaria para extraer los d�gitos uno a uno.
int sumatoria;						// Variable para comprobar el narcisismo.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un entero positivo: ";
	cin >> dato;
	
	// Conteo del n�mero de d�gitos:
	
	copia_dato = dato;
	numero_digitos = 0;
	
	while (copia_dato != 0) {
		copia_dato = copia_dato / 10;
		numero_digitos ++;
	}
	
	// Comprobaci�n del narcisismo:
	
	copia_dato = dato;
	sumatoria = 0;
	cociente_diez = pow (10, numero_digitos - 1);
	
	while (cociente_diez != 0) {
		copia_dato = dato / cociente_diez;
		copia_dato = copia_dato % 10;
		sumatoria = sumatoria + (pow (copia_dato, numero_digitos));
		cociente_diez = cociente_diez / 10;
	}
	
	// Salida de datos:
	
	if (sumatoria == dato)
		cout << dato << " es un n�mero narcisista."  << "\n\n";
	else
		cout << dato << " no es un n�mero narcisista." << "\n\n";
		
	system ("pause");
	
}

