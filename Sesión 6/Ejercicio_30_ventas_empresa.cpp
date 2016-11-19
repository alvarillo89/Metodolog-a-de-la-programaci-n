/* Programador: Álvaro Fernández García.
Una empresa que tiene tres sucursales decide llevar la contabilidad de las ventas
de sus productos a lo largo de una semana. Para ello registra cada venta con
tres números, el identificador de la sucursal (1, 2 o 3), el código del producto codificado
como un carácter (a, b ó c) y el número de unidades vendidas. Diseñar
un programa que lea desde el teclado una serie de registros compuestos por
sucursal, producto, unidades y diga cuál es la sucursal que más productos
ha vendido. La serie de datos termina cuando la sucursal introducida vale -1. */

// Introducción de recursos:

#include <iostream>
#include <string>

// Decalración de variables:

char codigo;										// Variable: Identificación del producto.
int sucursal, unidades;							// Variables: Sucursal y unidades vendidas.
int unidades_1, unidades_2, unidades_3;	// Variable que almacena las ventas de cada sucursal.
int sucursal_con_mas_ventas;					// Variable que almacena la sucursal con más ventas.

// Comienzo del programa.

using namespace std;

int main () {
	
	// Número de unidades iniciales vendidas por cada sucursal:
	
	unidades_1 = 0;
	unidades_2 = 0;
	unidades_3 = 0;
	
	// Entrada de datos; Lectura anticipada:
	
	do {
		cout << "Introduzca el identificador de la sucursal: ";
		cin >> sucursal;
	} while (sucursal != 1 && sucursal != 2 && sucursal != 3 && sucursal != -1);	
	
	// Bucle:
	
	while (sucursal != -1) {
			
		do {
			cout << "Introduzca el código del producto: ";
			cin >> codigo;
		} while (codigo != 'a' && codigo != 'b' && codigo != 'c');
		
		cout << "Introduzca el número de unidades vendidas: ";
		cin >> unidades;
		
	// Calcular las unidades totales vendidas por cada sucursal:	
		
		if	(sucursal == 1)
			unidades_1 = unidades_1 + unidades;
		else
			if (sucursal == 2)
				unidades_2 = unidades_2 + unidades;
			else
				unidades_3 = unidades_3 + unidades;
				
		do {
				cout << "Introduzca el identificador de la sucursal: ";
				cin >> sucursal;
			} while (sucursal != 1 && sucursal != 2 && sucursal != 3 && sucursal != -1);			
	} 
	
	// Comparación entre las unidades vendidas:
	
	if (unidades_1 > unidades_2 && unidades_1 > unidades_3)
		sucursal_con_mas_ventas = 1;
	else 
		if (unidades_2 > unidades_1 && unidades_2 > unidades_3)
			sucursal_con_mas_ventas = 2;
		else
			if (unidades_3 > unidades_2 && unidades_3 > unidades_1)
				sucursal_con_mas_ventas = 3;
			else 
				sucursal_con_mas_ventas = 4;	
			
	
	// Salida de datos:
	
	if (sucursal_con_mas_ventas == 4)
		cout << "No se han introducido suficientes datos." << "\n\n";
	else
		cout << "La sucursal que más unidades ha vendido es la número " << sucursal_con_mas_ventas << ".\n\n";
	
	system ("pause");
	
}
		


