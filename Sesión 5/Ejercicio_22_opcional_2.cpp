/* Programador: Álvaro Fernández García.
Realizar un programa que lea enteros desde teclado y calcule cuántos se han introducido y cual es el 
mínimo de dichos valores (pueden ser positivos o negativos). Se dejará de leer datos cuando el usuario 
introduzca el valor 0. Realizad la lectura de los enteros dentro de un bucle sobre una única variable llamada dato.
*/

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

int dato; 						// Variable que almacenará los datos introducidos por el usuario.
int cantidad_de_enteros;	// Variable que contará los números introducidos.
int minimo;						// Variable que almacenará el mínimo por el momento.

// Comienzo del programa.

using namespace std;

int main () {
	
	// Entrada de datos y cómputos:
	
	cantidad_de_enteros = 0;
	
	
	do {	
		cout << "Introduzca un entero: ";
		cin >> dato;
		cantidad_de_enteros ++;
		
		if (cantidad_de_enteros == 1)
			minimo = dato;
		else	
			if (dato < minimo && dato != 0)
				minimo = dato;
	
	} while (dato != 0);
	
	
	// Salida de datos:
	
	cout << "La cantidad de números que ha introducido es de: " << cantidad_de_enteros << "\n";
	cout << "El mínimo entre todos los enteros introducidos es: " << minimo << "\n\n";
	
	system ("pause");
	
}
