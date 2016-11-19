/* Programador: Álvaro Fernández García.
Elaboración de una serie de programas que trabajan con expresiones lógicas. */

// Introducción de recursos y más.

#include <iostream>

// Declaración de variables:

char letra;							// Carácter introducido por el usuario.
bool mayuscula_minuscula;		// Primera expresión lógica.
int edad;   						// Edad introducida por el usuario.
bool intervalo_edad;				// Segunda expresión lógica.
int anio;							// Año introducido por el usuario.
bool bisiesto;						// Tercera expresión lógica.

// Comienzo del programa:

using namespace std;

int main () {
	
	cout << "Introduzca una letra: ";
	cin >> letra;
	
	mayuscula_minuscula = letra >= 97 && letra <= 122;		// Primera expresión lógica.
	
	cout << "Introduzca la edad correspondiente: ";
	cin >> edad;
	
	intervalo_edad = edad < 18 || edad > 65;					// Segunda expresión lógica.
	
	cout << "Introduzca el año: ";
	cin >> anio;
	
	bisiesto = (anio % 4) == 0 && (anio % 100) != 0;		// Tercera expresión lógica.
	
	// Muestra de resultados:
	
	cout << "¿Es su letra mayúscula o minúscula?: " << mayuscula_minuscula << "\n";
	cout << "¿Está su edad en el intervalo?: " << intervalo_edad << "\n";
	cout << "¿Es su año bisiesto?: " << bisiesto << "\n\n";
	
	system ("pause");
	
}
