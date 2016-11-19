/* Programador: Álvaro Fernández García.
Modificación del ejercicio 19:
Construid un programa para calcular cuántos años han de pasar hasta llegar a doblar, 
como mínimo, el capital inicial. Los datos que han de leerse desde teclado son el capital inicial 
y el interés anual.
*/


// Introducción de recursos:

#include <iostream>
#include <cmath>

// Declaración de variables:

double capital, interes, capital_inicial;				// Variables introducidas por el usuario.
int contador_anios;									

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el capital a invertir: ";
	cin >> capital;
	cout << "Introduzca el interés a aplicar: ";
	cin >> interes;
	
	// Cómputos y salida de datos: 
	
	contador_anios = 0;
	capital_inicial = capital;
	
	do{
		capital = capital + capital * (interes / 100);
		contador_anios ++;
	} while (capital < (capital_inicial * 2));
	
	
	cout << "Los años mínimos para doblar su capital invertido son " << contador_anios << "\n\n";
	
	system ("pause");
	
}
