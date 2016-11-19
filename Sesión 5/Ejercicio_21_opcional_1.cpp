/* Programador: Álvaro Fernández García.
Se pide leer un carácter desde teclado, obligando al usuario a que sea una letra mayúscula. 
Para ello, habrá que usar una estructura repetitiva do while, de forma que si el usuario introduce un 
carácter que no sea una letra mayúscula, se le volverá a pedir otro carácter. Calculad la minúscula 
correspondiente e imprimidla en pantalla. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

char letra_introducida, letra_convertida;							// Variables: letra introducida y letra ya mayúscula.
const int diferencia_mayuscula_minuscula = 'a' - 'A';			// Variable auxiliar: diferencia entre mayúsucla y minúscula en ASCII.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	
	do {
		cout << "Introduzca una letra mayúscula: ";
		cin >> letra_introducida;
	} while (!('A' <= letra_introducida && letra_introducida <= 'Z'));
	
	
	// Cómputos:
	
	letra_convertida = letra_introducida + diferencia_mayuscula_minuscula;
	
	// Salida de datos:
	
	cout << "Tras la conversión, su letra es: " << letra_convertida << "\n\n";
	
	system ("pause");
	
}
