/* Programador: �lvaro Fern�ndez Garc�a.
Cread un programa que ofrezca en pantalla la siguiente salida: cuadrado. */

// Inclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int numero_inicial, numero_final;			// Valores de la primera fila.
int numero_filas, numero_imprimido;			// Contadores.

// Comienzo del programa:

using namespace std;

int main () {
	
	// C�mputos y salida de datos:
	
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
	
	
	
