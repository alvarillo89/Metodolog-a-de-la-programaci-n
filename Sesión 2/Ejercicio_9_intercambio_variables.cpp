/* Programador: Álvaro Fernández García.
Programa que intercambia los valores de dos variables */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

int edad_Pedro;						// Se trata de la edad introducida para Pedro.
int edad_Juan;							// Se trata de la edad introducida para Juan.
int nueva_edad_Pedro;				// Variable auxiliar para intercambiar el valor de la edad.
int nueva_edad_Juan;					// Variable auxiliar para intercambiar el valor de la edad.

// Inicio del programa.

using namespace std;

int main () {
	
	// Introducción de datos.
	
	cout << "Introduzca la edad de Pedro: ";
	cin >> edad_Pedro;
	cout << "Introduzca la edad de Juan: ";
	cin >> edad_Juan;
	
	// Cambios de variable.
	
	nueva_edad_Pedro = edad_Juan;
	nueva_edad_Juan = edad_Pedro;
	
	// Muestra de Resultados.
	
	cout << "La nueva edad de Pedro es: " << nueva_edad_Pedro << "\n";
	cout << "La nueva edad de Juan es: " << nueva_edad_Juan << "\n\n";
	
	system("pause");
	
}
