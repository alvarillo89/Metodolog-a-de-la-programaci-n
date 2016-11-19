/* Programador: Álvaro Fernández García.
Cread un programa que ofrezca en pantalla la siguiente salida: Triángulo.
*/

// Inclusión de recursos:

#include <iostream>

// Declaración de variables:

int contador_fila, contador_numero, numero_inicial;

// Cominzo del programa:

using namespace std;

int main () {

	// Cómputos y salida de datos:

	numero_inicial = 1;

	for (contador_fila = 1 ; contador_fila <= 6 ; contador_fila ++) {
		for (contador_numero = numero_inicial ; contador_numero <= 6 ; contador_numero ++)
			cout << contador_numero << " "; 
		
		numero_inicial ++;
		cout << "\n";
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
