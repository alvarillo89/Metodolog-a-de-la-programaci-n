/* Programador: �lvaro Fern�ndez Garc�a.
Modificaci�n del ejercicio 19:
Construid un programa para calcular cu�ntos a�os han de pasar hasta llegar a doblar, 
como m�nimo, el capital inicial. Los datos que han de leerse desde teclado son el capital inicial 
y el inter�s anual.
*/


// Introducci�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables:

double capital, interes, capital_inicial;				// Variables introducidas por el usuario.
int contador_anios;									

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el capital a invertir: ";
	cin >> capital;
	cout << "Introduzca el inter�s a aplicar: ";
	cin >> interes;
	
	// C�mputos y salida de datos: 
	
	contador_anios = 0;
	capital_inicial = capital;
	
	do{
		capital = capital + capital * (interes / 100);
		contador_anios ++;
	} while (capital < (capital_inicial * 2));
	
	
	cout << "Los a�os m�nimos para doblar su capital invertido son " << contador_anios << "\n\n";
	
	system ("pause");
	
}
