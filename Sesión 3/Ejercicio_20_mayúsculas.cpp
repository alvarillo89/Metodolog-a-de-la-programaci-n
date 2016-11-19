/* Programador: �lvaro Fern�ndez Garc�a.
El siguiente programa, leer� desde teclado una letra o car�cter en may�scula, para posteriormente
transformarlo en una letra min�scula e imprimirlo en pantalla. */

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables:

char mayuscula;							// Variable: Letra may�scula introducida por el usuario.				
int numero_ascii;							// Variable entera que almacena el caracter en ASCII.
char minuscula;							// Variable: Muestra la letra en min�scula.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Introducci�n de datos:

	cout << "Introduzca una letra may�scula: ";
	cin >> mayuscula;
	
	// Operaciones:
	
	numero_ascii = mayuscula + 32;	 // Sumamos 32 al valor entero de la may�scula, para obtener el entero correspondiente a la min�scula. 
	minuscula = numero_ascii;
	
	// Resultados:
	
	cout <<"Su letra en min�scula es: " << minuscula << "\n\n";
	
	system ("pause");
	
}


