/* Programador: �lvaro Fern�ndez Garc�a.
Realizar un programa que lea desde teclado un entero tope e imprima en pantalla todos sus divisores propios. 
Para obtener los divisores, basta recorrer todos los enteros menores que el valor introducido y comprobar si lo dividen. 
A continuaci�n, mejorar el ejercicio obligando al usuario a introducir un entero positivo, usando un filtro con un bucle post test.
*/

// Introducci�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables.

int tope; 								// Variable: Valor introducido por el usuario. 
int divisor;							// Variable: Divisores que mostrar� el programa.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	do {
		cout << "Introduzca un entero positivo distinto de 0: ";
		cin >> tope;
	} while (tope <= 0);
	
	// C�mputos y salida de datos:
	
	cout << "Los divisores propios son: ";
	
	divisor = tope;
	
	
	do {
		if (tope % divisor == 0) {
			cout << divisor << " ";
			divisor = divisor - 1;
		}
		else
			divisor = divisor - 1;	
 	} while (divisor > 0);
	 
	 
	 cout << "\n\n";
	 
	system ("pause");
	
}
	
	
	
	
	
	
