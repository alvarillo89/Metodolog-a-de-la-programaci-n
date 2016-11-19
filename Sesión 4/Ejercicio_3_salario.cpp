/* Programador: Álvaro Fernández García.
Realizar un programa que lea desde teclado la edad y el salario de una persona. Si se cumplen unas determinadas condiciones
la persona recibirá un aumento del 5%. En caso contrario, no recibirá nada. Mostrar en ambos casos el resultado en pantalla */

// Introducción de recursos.

#include <iostream>
#include <cmath> 

// Declaración de variables.

int edad; 								// Variable: Edad introducida por el usuario.
double salario;						// Variable: Salario introducido por el usuario.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Introducción de datos:
	
	cout << "Introduzca la edad del empleado: ";
	cin >> edad;
	cout << "Introduzca el salario del empleado: ";
	cin >> salario;
	
	// Operaciones:
	
	if (salario < 300 && edad > 65) {
	salario = salario * (1 + 0.05);
	cout << "Tras la comprobación, el salario es: " << salario << "\n\n";
	}
	
	else
	cout << "Tras la comprobación, el salario es: " << salario << ". No es aplicable la subida." << "\n\n";
	
	/* En este caso no sería necesario declarar otra variable llamada salario_final, puesto que si el porcentaje no es aplicable, no es
	necesario modificar el valor inicial de la variable salario. */
	
	system ("pause");
	
}
	
	


