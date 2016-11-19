/* Programador: Álvaro Fernández García.
Calcular mediante un programa en C++ la función potencia x^n, y la 
función factorial n! con n un valor entero y x un valor real. */

// Iclusión de recursos:

#include <iostream>

// Declaración de variables:

int numero_natural;						// Numero N introducido por el usuario.
double numero_real;						// Numero X introducido por el usuario.
double funcion_potencial;				// Variable que almacena el resultado de la función potencial.
int veces_multiplicado;					// Contador de la función potencial.
int contador_factorial;					// Contador de la función factorial.
int funcion_factorial;					// Variable que almacena el resultado de la función factorial.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un numero real: x = ";
	cin >> numero_real;
	
	do {
		cout << "Introduzca un número natural: n = ";
		cin >> numero_natural;
	} while (numero_natural < 0);
	
	
	// Función potencial.
	
	funcion_potencial = numero_real;
	
	if (numero_natural == 0)
		funcion_potencial = 1;
	else {
		for (veces_multiplicado = 2 ; veces_multiplicado <= numero_natural ; veces_multiplicado ++)
			funcion_potencial = funcion_potencial * numero_real;
			// Iniciado a 2 porque la primera vez que entra al bucle, el número se multiplica por sí mismo (aparece 2 veces).
	}
	
	cout << "La función potencial de (x,n) = " << funcion_potencial << "\n";
	
	
	// Función factorial:
	
	funcion_factorial = 1;
	
	if (numero_natural == 0)
		funcion_factorial = 1;
	else {
		for ( contador_factorial = 1 ; contador_factorial <= numero_natural ; contador_factorial ++)
			funcion_factorial = funcion_factorial * contador_factorial;
	}
	
	cout << "La función factorial es: n! = " << funcion_factorial << "\n\n";
	
	system ("pause");
	
}
