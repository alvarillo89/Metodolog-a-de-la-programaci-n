////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Recuperad la soluci�n del ejercicio 15 de la Relaci�n de Problemas II( pasar de may�scula a min�scula y viceversa 
usando un enumerado). Para que el tipo de dato enumerado sea accesible desde dentro de las funciones, debemos 
ponerlo antes de definir �stas, es decir, en un �mbito global a todo el fichero. Se pide definir las siguientes 
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

// Funci�n que analiza el tipo de caracter introducido:

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
		Comprueba en qu� intervalo de la tabla ASCII esta situado el car�cter y 
		asigna el valor del enum class correspondiente. */
}

// Funci�n que convierte la letra introducida a may�scula si esta es min�scula.

char Convierte_a_Mayuscula (char caracter) {
	
	if (Capitalizacion (caracter) == TipoCaracter::es_minuscula)
		caracter = caracter - AMPLITUD;
	else
		caracter = caracter;
		
	return caracter;
	
	/* Algoritmo:
		Si la letra es min�scula, la convierte a may�scula, si no, la
		deja como est�. */
		
}
	
// Funci�n que convierte la letra introducida a min�scula si esta es may�scula.

char Convierte_a_Minuscula (char caracter) {
	
	if (Capitalizacion (caracter) == TipoCaracter::es_mayuscula)
		caracter = caracter + AMPLITUD;
	else
		caracter = caracter;
		
	return caracter;	
	
	/* Algoritmo:
		Si la letra es may�scula, la convierte a min�scula, si no, la
		deja como est�. */
}

// Funci�n que realiza todos los c�mputos relacionados con el cambio de may�scula/min�scula.

char CambiaMayusculaMinuscula (char caracter) {
	
	if (Capitalizacion (caracter) == TipoCaracter::es_minuscula)
		caracter = Convierte_a_Mayuscula (caracter);
	else
		caracter = Convierte_a_Minuscula (caracter);
		
	return caracter;

	/* Algoritmo:
		Comprueba la letra. Si es min�scula, la pone ma�uscula.
		En cualquier otro caso le apliga el algotirmo de convierte a min�scula:
		(Si la letra es may�scula, la convierte a min�scula, si no, la
		deja como est�). */		
}

int main () {
	char caracter;
	
	cout << "Introduzca un car�cter cualquiera: ";
	cin >> caracter;
	
	caracter = CambiaMayusculaMinuscula (caracter);
	
	cout << "Tras la conversi�n, su nuevo car�cter es: " << caracter << "\n\n";
	
	system ("pause");
	
}
