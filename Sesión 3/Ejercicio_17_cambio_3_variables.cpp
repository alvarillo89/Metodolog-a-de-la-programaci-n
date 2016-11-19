/* Programador: Álvaro Fernández García.
Programa que leerá tres variables introducidas por el usuario, para posteriormente
intercambiarlas entre si. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

int digito_x = 10;							// Variable: Número que ocupará la posición x.
int digito_y = 20;							// Variable: Número que ocupará la posición y.
int digito_z = 30;							// Variable: Número que ocupará la posición z.
int copia_x;									// Variable auxiliar que almacenará el valor de x.

// Inicio del programa.

using namespace std;

int main () {
	
	// Datos iniciales:
	
	cout << "El valor de la variable x es:   x = ";
	cout << digito_x << "\n";
	cout << "El valor de la variable y es:   y = ";
	cout << digito_y << "\n";
	cout << "El valor de la variable z es:   z = ";
	cout << digito_z << "\n\n";
	
	// Operaciones de asignación de variables:
	
	copia_x = digito_x;
	digito_x = digito_z;
	digito_z = digito_y;
	digito_y = copia_x;
	
	// Muestra de resultados:
	
	cout << "Los resultados tras el cambio son:\n"  << "x = " << digito_x << "   y = " << digito_y << "   z = " << digito_z << "\n\n";
	
	system ("pause");
	
}

