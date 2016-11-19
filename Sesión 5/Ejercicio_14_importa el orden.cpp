/* Programador: �lvaro Fern�ndez Garc�a.
Modificacion del ejercicio 5, en este caso el programa nos dir� el tipo de orden de los car�cteres.
Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si 
est�n ordenados (da igual si es de forma ascendente o descendente) o no lo est�n. */

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int valor1, valor2, valor3;							// Variables: N�meros introducidos por el usuario.
bool orden_ascendente, orden_descendente;			// Variables auxiliares: Booleanas para los c�mputos.

// Inicio del programa. 

using namespace std;

enum class TipoDeOrden									// Creaci�n de un tipo enumerado.
	{orden_ascendente, orden_descendente, no_ordenado};

int main () {
	
	// Declaraci�n de variables del tipo enumerado:
	
	TipoDeOrden tipo_de_orden;
	
	// Introducci�n de datos.
	
	cout << "Introduzca el valor del primer entero: ";
	cin >> valor1;
	cout << "Introduzca el valor del segundo entero: ";
	cin >> valor2;
	cout << "Introduzca el valor del tercer entero: ";
	cin >> valor3;
	
	// C�mputos:
	
	orden_descendente = valor1 > valor2 && valor2 > valor3;
	orden_ascendente = valor1 < valor2 && valor2 < valor3;
	

	if (orden_descendente)
		tipo_de_orden = TipoDeOrden::orden_descendente;
	else
		if (orden_ascendente)
			tipo_de_orden = TipoDeOrden::orden_ascendente;
		else
			tipo_de_orden = TipoDeOrden::no_ordenado;
	

	// Muestra de resultados:


	if (tipo_de_orden == TipoDeOrden::orden_descendente) 
		cout << "Los n�meros est�n ordenados descendentemente.\n\n";
	else
		if (tipo_de_orden == TipoDeOrden::orden_ascendente)
			cout << "Los n�meros est�n ordenados ascendentemente.\n\n";
		else
			cout << "Los n�meros no est�n ordenados.\n\n";
		

	system ("pause");
	
}
