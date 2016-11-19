////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Recuperad la solución del ejercicio 15 de la Relación de Problemas II( pasar de mayúscula a minúscula y viceversa 
usando un enumerado). Para que el tipo de dato enumerado sea accesible desde dentro de las funciones, debemos 
ponerlo antes de definir éstas, es decir, en un ámbito global a todo el fichero. Se pide definir las siguientes 
funciones y cread un programa principal de ejemplo que las llame.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

enum class TipoCaracter 
			{es_minuscula, es_mayuscula, no_es_caracter};

// Variables globales:

const int AMPLITUD = 'a' - 'A';

/* Al implementar la constante antes de las funciones, pueden emplearse
en todo el programa, incluso dentro de funciones, al igual que sucede con el 
enum class. */

// Función que analiza el tipo de caracter introducido:

TipoCaracter Capitalizacion (char una_letra) {
	TipoCaracter tipo_caracter;
	
	if ('a' <= una_letra && una_letra <= 'z')
		tipo_caracter = TipoCaracter::es_minuscula;
	else
		if ('A' <= una_letra && una_letra <= 'Z')
			tipo_caracter = TipoCaracter::es_mayuscula;
		else
			tipo_caracter = TipoCaracter::no_es_caracter;
			
	return tipo_caracter;
	
	/* Algoritmo:
		Comprueba en qué intervalo de la tabla ASCII esta situado el carácter y 
		asigna el valor del enum class correspondiente. */
}

// Función que convierte la letra introducida a mayúscula si esta es minúscula.

char Convierte_a_Mayuscula (char caracter) {
	
	if (Capitalizacion (caracter) == TipoCaracter::es_minuscula)
		caracter = caracter - AMPLITUD;
	else
		caracter = caracter;
		
	return caracter;
	
	/* Algoritmo:
		Si la letra es minúscula, la convierte a mayúscula, si no, la
		deja como está. */
		
}
	
// Función que convierte la letra introducida a minúscula si esta es mayúscula.

char Convierte_a_Minuscula (char caracter) {
	
	if (Capitalizacion (caracter) == TipoCaracter::es_mayuscula)
		caracter = caracter + AMPLITUD;
	else
		caracter = caracter;
		
	return caracter;	
	
	/* Algoritmo:
		Si la letra es mayúscula, la convierte a minúscula, si no, la
		deja como está. */
}

// Función que realiza todos los cómputos relacionados con el cambio de mayúscula/minúscula.

char CambiaMayusculaMinuscula (char caracter) {
	
	if (Capitalizacion (caracter) == TipoCaracter::es_minuscula)
		caracter = Convierte_a_Mayuscula (caracter);
	else
		caracter = Convierte_a_Minuscula (caracter);
		
	return caracter;

	/* Algoritmo:
		Comprueba la letra. Si es minúscula, la pone maýuscula.
		En cualquier otro caso le apliga el algotirmo de convierte a minúscula:
		(Si la letra es mayúscula, la convierte a minúscula, si no, la
		deja como está). */		
}

int main () {
	char caracter;
	
	cout << "Introduzca un carácter cualquiera: ";
	cin >> caracter;
	
	caracter = CambiaMayusculaMinuscula (caracter);
	
	cout << "Tras la conversión, su nuevo carácter es: " << caracter << "\n\n";
	
	system ("pause");
	
}
