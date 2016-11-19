/* Programador: Álvaro Fernández García.
El siguiente programa, leerá desde teclado una letra o carácter en mayúscula, para posteriormente
transformarlo en una letra minúscula e imprimirlo en pantalla. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

char mayuscula;							// Variable: Letra mayúscula introducida por el usuario.				
int numero_ascii;							// Variable entera que almacena el caracter en ASCII.
char minuscula;							// Variable: Muestra la letra en minúscula.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Introducción de datos:

	cout << "Introduzca una letra mayúscula: ";
	cin >> mayuscula;
	
	// Operaciones:
	
	numero_ascii = mayuscula + 32;	 // Sumamos 32 al valor entero de la mayúscula, para obtener el entero correspondiente a la minúscula. 
	minuscula = numero_ascii;
	
	// Resultados:
	
	cout <<"Su letra en minúscula es: " << minuscula << "\n\n";
	
	system ("pause");
	
}


