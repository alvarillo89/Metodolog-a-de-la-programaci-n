/* Programador: �lvaro Fern�ndez Garc�a.
Elaboraci�n de una serie de programas que trabajan con expresiones l�gicas. */

// Introducci�n de recursos y m�s.

#include <iostream>

// Declaraci�n de variables:

char letra;							// Car�cter introducido por el usuario.
bool mayuscula_minuscula;		// Primera expresi�n l�gica.
int edad;   						// Edad introducida por el usuario.
bool intervalo_edad;				// Segunda expresi�n l�gica.
int anio;							// A�o introducido por el usuario.
bool bisiesto;						// Tercera expresi�n l�gica.

// Comienzo del programa:

using namespace std;

int main () {
	
	cout << "Introduzca una letra: ";
	cin >> letra;
	
	mayuscula_minuscula = letra >= 97 && letra <= 122;		// Primera expresi�n l�gica.
	
	cout << "Introduzca la edad correspondiente: ";
	cin >> edad;
	
	intervalo_edad = edad < 18 || edad > 65;					// Segunda expresi�n l�gica.
	
	cout << "Introduzca el a�o: ";
	cin >> anio;
	
	bisiesto = (anio % 4) == 0 && (anio % 100) != 0;		// Tercera expresi�n l�gica.
	
	// Muestra de resultados:
	
	cout << "�Es su letra may�scula o min�scula?: " << mayuscula_minuscula << "\n";
	cout << "�Est� su edad en el intervalo?: " << intervalo_edad << "\n";
	cout << "�Es su a�o bisiesto?: " << bisiesto << "\n\n";
	
	system ("pause");
	
}
