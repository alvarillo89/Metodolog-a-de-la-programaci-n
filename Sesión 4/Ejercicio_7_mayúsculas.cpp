/* Programador: Álvaro Fernández García.
Se quiere leer un carácter letra_original desde teclado, y comprobar con una estructura condicional si es una letra mayúscula. 
En dicho caso, hay que calcular la minúscula correspondiente almacenando el resultado en una variable llamada letra_convertida. 
En el caso de que no sea una mayúscula, le asignaremos a letra_convertida el valor que tenga letra_original.
Finalmente, imprimiremos en pantalla el valor de letra_convertida. No pueden usarse las funciones tolower ni toupper de la 
iblioteca cctype. */

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
	
	if (letra_original >= 65 && letra_original <= 90) 
		letra_convertida = letra_original + 32;
	else
		letra_convertida = letra_original;
		
	// Muestra de resultados:	
		
	cout << "Su letra es: " << letra_convertida << "\n\n";
	
	system ("pause");
	
}

	
		

