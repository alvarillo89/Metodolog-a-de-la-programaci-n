/* Programador: �lvaro Fern�ndez Garc�a.
Modificaci�n del ejercicio 19.
Mostrar el capital obtenido cada a�o aplicando todos los intereses posibles hasta alcanzar el 
introducido. */

// Introducci�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables:

double capital, copia_capital;				
int numero_anios, interes, contador_anios, contador_interes;									

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el capital a invertir: ";
	cin >> capital;
	cout << "Introduzca el inter�s a aplicar: ";
	cin >> interes;
	cout << "Introduzca el n�mero de a�os que desea reinvertir el dinero: ";
	cin >> numero_anios;
	
	// C�mputos y salida de datos: 
	
	
	for (contador_interes = 1 ; contador_interes <= interes ; contador_interes ++) {
		cout << "\n" << "C�lculos realizados al " << contador_interes << " %" << "\n\n";	
		
		copia_capital = capital;
	
		for (contador_anios = 1 ; contador_anios <= numero_anios ; contador_anios ++ ) {
			copia_capital = copia_capital + copia_capital * contador_interes / 100;
			cout << "Total en el a�o n�mero " << contador_anios << " = " << copia_capital << "\n";
		}	
		
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
