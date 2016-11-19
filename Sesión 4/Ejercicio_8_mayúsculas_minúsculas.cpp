/* Programador: �lvaro Fern�ndez Garc�a.
Programa que leer� desde teclado una letra. Si esta letra es may�scula la colocar� en min�scula, si es min�scula
la colocar� en may�scula. Si el car�cter introducido no es una letra, el programa lo indicar�. */

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables:

char letra_original;					// Variable: Letra introducida por el usuario.
char letra_convertida;				// Variable: Resultado que plasmar� el programa.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Introducci�n de datos:
	
	cout << "Introduzca un car�cter: ";
	cin >> letra_original;
	
	// Operaciones a realizar:
	
	if (letra_original >= 65 && letra_original <= 90) {
		letra_convertida = letra_original + 32;
		cout << "Su letra introducida era May�scula, tras la conversi�n: " << letra_convertida << "\n\n";
}
	else
		if (letra_original >= 97 && letra_original <= 122) {
			letra_convertida = letra_original - 32;
			cout << "Su letra introducida era Min�scula, tras la conversi�n: " << letra_convertida << "\n\n";
	}
		else 	{
			letra_convertida = letra_original;
			cout << "Lo sentimos, su car�cter no es una letra: " << letra_convertida << "\n\n";
		}
	
	system ("pause");
	
}

	
		

