/* Programador: Álvaro Fernández García.
Se dice que un número es triangular si se puede poner como la suma de los primeros m valores enteros, 
para algún valor de m. Por ejemplo, 6 es triangular ya que 6 = 1 + 2 + 3.  Se pide construir un programa 
que obtenga todos los números triangulares que hay menores que un entero tope introducido desde teclado.
*/

// Inclusión de variables:

#include <iostream>

// Declaración de variables:

int tope;						// Número máximo.
int dato;						// Número que se va comprobando.
int sumatoria, sumando;		// Valores auxiliares para los cómputos.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el valor tope: ";
	cin >> tope;
	
	// Cómputos y salida de datos:
	
	cout << "Los números triangulares menores que " << tope << " son:\n";
	
	for (dato = 1 ; dato <= tope ; dato ++) {
		
		sumatoria = 0;
		sumando = 1;
		
		while (sumatoria < dato ) {
			sumatoria = sumatoria + sumando;
			sumando ++;
		}
	
		if (sumatoria == dato) 
			cout << dato << " ";
		
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
