/* Programador: Álvaro Fernández García.
Modificación del ejercicio 3. No mezclar cómputos con E/S de datos.
Realizar un programa que lea desde teclado la edad y el salario de una persona. Si se cumplen unas determinadas condiciones
la persona recibirá un aumento del 5%. En caso contrario, no recibirá nada. Mostrar en ambos casos el resultado en pantalla */

// Introducción de recursos.

#include <iostream>
#include <cmath>

// Declaración de variables.

int edad; 										// Variable: Edad introducida por el usuario.
double salario;								// Variable: Salario introducido por el usuario.
bool condicion_aumento_salario; 			// Variable auxiliar: Condición que debe cumplirse para el aumento de salario.
const int limite_edad = 65;				// Variables auxiliares para determinar algunas constantes.
const double limite_sueldo = 300;
const double aumento = 1 + 0.05;

// Comienzo del programa:

using namespace std;

int main () {
	
	// Introducción de datos:
	
	cout << "Introduzca la edad del empleado: ";
	cin >> edad;
	cout << "Introduzca el salario del empleado: ";
	cin >> salario;
	
	// Cómputos:
	
	condicion_aumento_salario = salario < limite_sueldo && edad > limite_edad;

	
	if (condicion_aumento_salario) 
		salario = salario * aumento;
	else
		salario = salario;

	
	// Salida de datos:


	if (condicion_aumento_salario)
		cout << "Tras la comprobación, el salario es: " << salario << "\n\n";
	else
		cout << "No es aplicable la subida: " << salario << "\n\n";


	system ("pause");
	
}
	
	


