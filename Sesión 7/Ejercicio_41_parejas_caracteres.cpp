/* Programador: �lvaro Fern�ndez Garc�a.
Escribid un programa que lea cuatro valores de tipo char (min_izda, max_dcha, min_dcha, max_dcha) e imprima 
las parejas que pueden formarse con un elemento del conjunto {min_izda ... max_izda}
y otro elemento del conjunto {min_dcha ... max_dcha} */

// Inclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

char min_izda, min_dcha, max_izda, max_dcha;		// L�mites de los intervalos.
char contador_izda, contador_dcha;					// Variables auxiliares para calcular las letras del intervalo.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el valor inicial del primer intervalo: ";
	cin >> min_izda;
	cout << "Introduzca el valor final del primer intervalo: ";
	cin >> max_izda;
	cout << "Introduzca el valor inicial del segundo intervalo: ";
	cin >> min_dcha;
	cout << "Introduzca el valor final del segundo intervalo: ";
	cin >> max_dcha;
	
	// C�mputos y salida de datos:
	
	for (contador_izda = min_izda ; contador_izda <= max_izda ; contador_izda ++) {
		
		for (contador_dcha = min_dcha ; contador_dcha <= max_dcha ; contador_dcha ++)
			cout << contador_izda << contador_dcha << "  ";
	
	cout << "\n";
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
	
