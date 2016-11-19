/* Programador: Álvaro Fernández García.
En un programa de ventas, si la cantidad vendida es mayor de 100 unidades, 
se le aplica un descuento del 3%. Por otra parte, si el precio final de la venta es mayor de 700 euros,
se aplica un descuento del 2%. Ambos descuentos son acumulables. Vamos a cambiar el criterio de los descuentos.
Supondremos que sólo se aplicará el descuento del 2% (por una venta mayor de 700 euros) cuando se hayan vendido más de 100 unidades,
es decir, para ventas de menos de 100 unidades no se aplica el descuento del 2% aunque el importe sea mayor de 700 euros. */

// Introducción de recursos.

#include <iostream>
#include <cmath>

// Declaración de variables:

int numero_unidades;									// Variable: Número de ventas del producto.
double ganancias_totales;							// Variable: Cantidad final de dinero acumulada.
double precio_unidad;								// Variable: Precio de una unidad.
const int minimo_ventas = 100;					// Variables auxiliares.
const double minimo_ganancias = 700.0;
const double descuento_unidades_vendidas = 1 - 0.03;
const double descuento_precio_total = 1 - 0.02;

// Inicio del programa.

using namespace std;

int main () {
	
	// Introducción de datos:
	
	cout << "Introduzca el número de unidades vendidas: ";
	cin >> numero_unidades;
	cout << "Introduzca el precio por unidad: ";
	cin >> precio_unidad;
	
	// Operaciones a realizar.
	
	if (numero_unidades >= minimo_ventas) {
		precio_unidad = precio_unidad * descuento_unidades_vendidas;
		ganancias_totales = precio_unidad * numero_unidades;
	
		if (ganancias_totales >= minimo_ganancias)
			ganancias_totales = ganancias_totales * descuento_precio_total;
		else
			ganancias_totales = ganancias_totales;
}
	else
		ganancias_totales = precio_unidad * numero_unidades;
		
	// Muestra de resultados:
	
	cout << "Las ganancias totales adquiridas son: " << ganancias_totales << "\n\n";
	
	system ("pause");
	
}
		
 	
