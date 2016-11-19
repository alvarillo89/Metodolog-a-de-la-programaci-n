/* Programador: Álvaro Fernández García.
Calcular mediante un programa en C++ el combinatorio con n, m valores enteros */

// Inclusión de recursos:

#include <iostream>

// Declaración de variables:

int numero_n, numero_m, n_menos_m;			// Datos introducidos por el usuario.
int factorial_n, factorial_m;					// Factorial de los datos introducidos.
int factorial_n_menos_m;						
double combinatorio;								// Número combinatorio calculado.
int contador_factorial;							// Variable auxiliar para el cálculo del factorial.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un número entero: n = ";
	cin >> numero_n;
	cout << "Introduzca otro número entero: m = ";
	cin >> numero_m;
	
	// Cómputos:
	
	// N factorial:
	
	factorial_n = 1;
	for (contador_factorial = 1 ; contador_factorial <= numero_n ; contador_factorial ++)
		factorial_n = factorial_n * contador_factorial;
	
	//	M factorial:
	
	factorial_m = 1;
	for (contador_factorial = 1 ; contador_factorial <= numero_m ; contador_factorial ++)
		factorial_m = factorial_m * contador_factorial;
	
	// (N - M) factorial:

	n_menos_m = numero_n - numero_m;
	factorial_n_menos_m = 1;
	for (contador_factorial = 1 ; contador_factorial <= n_menos_m ; contador_factorial ++)
		factorial_n_menos_m = factorial_n_menos_m * contador_factorial;
		
	// Combinatorio:
	
	combinatorio = factorial_n / (factorial_m * factorial_n_menos_m);
	
	// Salida de datos:
	
	cout << "El combinatorio de n sobre m es: " << combinatorio << "\n\n";
	
	system ("pause");
	
}

