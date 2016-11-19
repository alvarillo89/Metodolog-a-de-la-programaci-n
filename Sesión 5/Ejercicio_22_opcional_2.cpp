/* Programador: �lvaro Fern�ndez Garc�a.
Realizar un programa que lea enteros desde teclado y calcule cu�ntos se han introducido y cual es el 
m�nimo de dichos valores (pueden ser positivos o negativos). Se dejar� de leer datos cuando el usuario 
introduzca el valor 0. Realizad la lectura de los enteros dentro de un bucle sobre una �nica variable llamada dato.
*/

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int dato; 						// Variable que almacenar� los datos introducidos por el usuario.
int cantidad_de_enteros;	// Variable que contar� los n�meros introducidos.
int minimo;						// Variable que almacenar� el m�nimo por el momento.

// Comienzo del programa.

using namespace std;

int main () {
	
	// Entrada de datos y c�mputos:
	
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
	
	cout << "La cantidad de n�meros que ha introducido es de: " << cantidad_de_enteros << "\n";
	cout << "El m�nimo entre todos los enteros introducidos es: " << minimo << "\n\n";
	
	system ("pause");
	
}
