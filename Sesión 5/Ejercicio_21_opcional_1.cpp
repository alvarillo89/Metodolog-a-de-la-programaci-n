/* Programador: �lvaro Fern�ndez Garc�a.
Se pide leer un car�cter desde teclado, obligando al usuario a que sea una letra may�scula. 
Para ello, habr� que usar una estructura repetitiva do while, de forma que si el usuario introduce un 
car�cter que no sea una letra may�scula, se le volver� a pedir otro car�cter. Calculad la min�scula 
correspondiente e imprimidla en pantalla. */

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables:

char letra_introducida, letra_convertida;							// Variables: letra introducida y letra ya may�scula.
const int diferencia_mayuscula_minuscula = 'a' - 'A';			// Variable auxiliar: diferencia entre may�sucla y min�scula en ASCII.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	
	do {
		cout << "Introduzca una letra may�scula: ";
		cin >> letra_introducida;
	} while (!('A' <= letra_introducida && letra_introducida <= 'Z'));
	
	
	// C�mputos:
	
	letra_convertida = letra_introducida + diferencia_mayuscula_minuscula;
	
	// Salida de datos:
	
	cout << "Tras la conversi�n, su letra es: " << letra_convertida << "\n\n";
	
	system ("pause");
	
}
