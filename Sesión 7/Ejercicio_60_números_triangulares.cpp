/* Programador: �lvaro Fern�ndez Garc�a.
Se dice que un n�mero es triangular si se puede poner como la suma de los primeros m valores enteros, 
para alg�n valor de m. Por ejemplo, 6 es triangular ya que 6 = 1 + 2 + 3.  Se pide construir un programa 
que obtenga todos los n�meros triangulares que hay menores que un entero tope introducido desde teclado.
*/

// Inclusi�n de variables:

#include <iostream>

// Declaraci�n de variables:

int tope;						// N�mero m�ximo.
int dato;						// N�mero que se va comprobando.
int sumatoria, sumando;		// Valores auxiliares para los c�mputos.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el valor tope: ";
	cin >> tope;
	
	// C�mputos y salida de datos:
	
	cout << "Los n�meros triangulares menores que " << tope << " son:\n";
	
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
