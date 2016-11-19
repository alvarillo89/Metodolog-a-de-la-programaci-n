/* Programador: Álvaro Fernández García.
Construir un programa que, dado un número entero positivo, 
nos indique si el número es o no narcisista. */

// Inclusión de recursos:

#include <iostream>
#include <cmath>

// Declaración de variables:

int dato;							// Número introducido por el usuario.
int copia_dato;					// Variable que copia el número introducido.
int numero_digitos;				// Digitos del número introducido.
int cociente_diez;				// Potencia de diez necesaria para extraer los dígitos uno a uno.
int sumatoria;						// Variable para comprobar el narcisismo.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un entero positivo: ";
	cin >> dato;
	
	// Conteo del número de dígitos:
	
	copia_dato = dato;
	numero_digitos = 0;
	
	while (copia_dato != 0) {
		copia_dato = copia_dato / 10;
		numero_digitos ++;
	}
	
	// Comprobación del narcisismo:
	
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
		cout << dato << " es un número narcisista."  << "\n\n";
	else
		cout << dato << " no es un número narcisista." << "\n\n";
		
	system ("pause");
	
}

