/* Programador: Álvaro Fernández García.
Programa que leerá desde teclado una letra. Si esta letra es mayúscula la colocará en minúscula, si es minúscula
la colocará en mayúscula. Si el carácter introducido no es una letra, el programa lo indicará. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

char letra_original;					// Variable: Letra introducida por el usuario.
char letra_convertida;				// Variable: Resultado que plasmará el programa.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Introducción de datos:
	
	cout << "Introduzca un carácter: ";
	cin >> letra_original;
	
	// Operaciones a realizar:
	
	if (letra_original >= 65 && letra_original <= 90) {
		letra_convertida = letra_original + 32;
		cout << "Su letra introducida era Mayúscula, tras la conversión: " << letra_convertida << "\n\n";
}
	else
		if (letra_original >= 97 && letra_original <= 122) {
			letra_convertida = letra_original - 32;
			cout << "Su letra introducida era Minúscula, tras la conversión: " << letra_convertida << "\n\n";
	}
		else 	{
			letra_convertida = letra_original;
			cout << "Lo sentimos, su carácter no es una letra: " << letra_convertida << "\n\n";
		}
	
	system ("pause");
	
}

	
		

