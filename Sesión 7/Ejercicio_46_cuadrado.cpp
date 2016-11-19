/* Programador: Álvaro Fernández García.
Cread un programa que ofrezca en pantalla la siguiente salida: cuadrado. */

// Inclusión de recursos:

#include <iostream>

// Declaración de variables:

int numero_inicial, numero_final;			// Valores de la primera fila.
int numero_filas, numero_imprimido;			// Contadores.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Cómputos y salida de datos:
	
	numero_inicial = 1;
	numero_final = 6;

	for (numero_filas = 1 ; numero_filas <= 6 ; numero_filas ++) {
		for (numero_imprimido = numero_inicial ; numero_imprimido <= numero_final ; numero_imprimido ++)
			cout << numero_imprimido << " ";
		
		numero_inicial ++;
		numero_final ++;
		cout << "\n";
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
	
	
	
