/* Programador: Álvaro Fernández García.
Modificacion del ejercicio 5, en este caso el programa nos dirá el tipo de orden de los carácteres.
Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si 
están ordenados (da igual si es de forma ascendente o descendente) o no lo están. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

int valor1, valor2, valor3;							// Variables: Números introducidos por el usuario.
bool orden_ascendente, orden_descendente;			// Variables auxiliares: Booleanas para los cómputos.

// Inicio del programa. 

using namespace std;

enum class TipoDeOrden									// Creación de un tipo enumerado.
	{orden_ascendente, orden_descendente, no_ordenado};

int main () {
	
	// Declaración de variables del tipo enumerado:
	
	TipoDeOrden tipo_de_orden;
	
	// Introducción de datos.
	
	cout << "Introduzca el valor del primer entero: ";
	cin >> valor1;
	cout << "Introduzca el valor del segundo entero: ";
	cin >> valor2;
	cout << "Introduzca el valor del tercer entero: ";
	cin >> valor3;
	
	// Cómputos:
	
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
		cout << "Los números están ordenados descendentemente.\n\n";
	else
		if (tipo_de_orden == TipoDeOrden::orden_ascendente)
			cout << "Los números están ordenados ascendentemente.\n\n";
		else
			cout << "Los números no están ordenados.\n\n";
		

	system ("pause");
	
}
