/* Programador: Álvaro Fernández García.
Programa establecido para calcular el dinero que obtendrán cuatro personas (diseñador y tres fabricantes) a 
partir de las ganancias obtenidas por la venta del producto. Dato: El diseñador cobra el doble que los 
fabricantes. */

// Introducción de recursos.

#include <iostream>
#include <cmath>

// Declaración de variables.

double ganancias;									// Dinero obtenido por la venta del producto.
double disenador;									// Dinero que obtendrá el diseñador.
double fabricantes;								// Dinero que obtendrán los fabricantes.
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
	
	cout << "El dinero que recibirá el diseñador es: " << disenador << "\n";
	cout << "El dinero para cada uno de los tres fabricantes es: " << fabricantes << "\n\n";
	
	system ("pause");
	
}
