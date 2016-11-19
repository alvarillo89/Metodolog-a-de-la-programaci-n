/* Programador: �lvaro Fern�ndez Garc�a.
Calcular mediante un programa en C++ la funci�n potencia x^n, y la 
funci�n factorial n! con n un valor entero y x un valor real. */

// Iclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int numero_natural;						// Numero N introducido por el usuario.
double numero_real;						// Numero X introducido por el usuario.
double funcion_potencial;				// Variable que almacena el resultado de la funci�n potencial.
int veces_multiplicado;					// Contador de la funci�n potencial.
int contador_factorial;					// Contador de la funci�n factorial.
int funcion_factorial;					// Variable que almacena el resultado de la funci�n factorial.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un numero real: x = ";
	cin >> numero_real;
	
	do {
		cout << "Introduzca un n�mero natural: n = ";
		cin >> numero_natural;
	} while (numero_natural < 0);
	
	
	// Funci�n potencial.
	
	funcion_potencial = numero_real;
	
	if (numero_natural == 0)
		funcion_potencial = 1;
	else {
		for (veces_multiplicado = 2 ; veces_multiplicado <= numero_natural ; veces_multiplicado ++)
			funcion_potencial = funcion_potencial * numero_real;
			// Iniciado a 2 porque la primera vez que entra al bucle, el n�mero se multiplica por s� mismo (aparece 2 veces).
	}
	
	cout << "La funci�n potencial de (x,n) = " << funcion_potencial << "\n";
	
	
	// Funci�n factorial:
	
	funcion_factorial = 1;
	
	if (numero_natural == 0)
		funcion_factorial = 1;
	else {
		for ( contador_factorial = 1 ; contador_factorial <= numero_natural ; contador_factorial ++)
			funcion_factorial = funcion_factorial * contador_factorial;
	}
	
	cout << "La funci�n factorial es: n! = " << funcion_factorial << "\n\n";
	
	system ("pause");
	
}
