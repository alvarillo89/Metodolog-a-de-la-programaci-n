/* Programador: �lvaro Fern�ndez Garc�a.
Programa establecido para calcular el dinero que obtendr�n cuatro personas (dise�ador y tres fabricantes) a 
partir de las ganancias obtenidas por la venta del producto. Dato: El dise�ador cobra el doble que los 
fabricantes. */

// Introducci�n de recursos.

#include <iostream>
#include <cmath>

// Declaraci�n de variables.

double ganancias;									// Dinero obtenido por la venta del producto.
double disenador;									// Dinero que obtendr� el dise�ador.
double fabricantes;								// Dinero que obtendr�n los fabricantes.
double reparticion;								// Variable auxiliar que establece la manera en que se reparte el dinero.

// Comienzo del programa.

using namespace std;

int main (){
	
	cout << "Introduzca las ganancias obtenidas este mes \npor las ventas del producto: ";
	cin >> ganancias;
	
	// Operaciones.

	reparticion = ganancias / 5;
	disenador = reparticion * 2;
	fabricantes = reparticion;
	
	// Resultado.
	
	cout << "El dinero que recibir� el dise�ador es: " << disenador << "\n";
	cout << "El dinero para cada uno de los tres fabricantes es: " << fabricantes << "\n\n";
	
	system ("pause");
	
}
