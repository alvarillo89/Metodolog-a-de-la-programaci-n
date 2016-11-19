/* Programador: �lvaro Fern�ndez Garc�a.
Modificaci�n del ejercicio 8, separando c�mputos de E/S de datos y utilizando tipos enumerados.
Programa que leer� desde teclado una letra. Si esta letra es may�scula la colocar� en min�scula, si es min�scula
la colocar� en may�scula. Si el car�cter introducido no es una letra, el programa lo indicar�. */

// Introducci�n de recursos:

#include <iostream>

// Declaraci�n de variables:

char letra_original;														// Variable: Letra introducida por el usuario.
char letra_convertida;													// Variable: Resultado que plasmar� el programa.
bool letra_mayuscula, letra_minuscula;								// Variables auxiliares.
const char diferencia_mayuscula_minuscula = 'a' - 'A';

// Comienzo del programa:

using namespace std;

enum class OpcionCaracter 
	{mayuscula, minuscula, caracter_no_alfabetico};

int main () {
	
	// Declaraci�n de variables de Tipo Enumerado:
	
	OpcionCaracter opcion_caracter;
	
	// Introducci�n de datos:
	
	cout << "Introduzca un car�cter: ";
	cin >> letra_original;
	
	// C�mputos:
	
	letra_mayuscula = letra_original >= 'A' && letra_original <= 'Z';
	letra_minuscula = letra_original >= 'a' && letra_original <= 'z';
	
	
	if (letra_mayuscula) {
		letra_convertida = letra_original + diferencia_mayuscula_minuscula;
		opcion_caracter = OpcionCaracter::mayuscula;
	}
	else
		if (letra_minuscula) {
			letra_convertida = letra_original - diferencia_mayuscula_minuscula;
			opcion_caracter = OpcionCaracter::minuscula;
		}
		else {
			letra_convertida = letra_original;
			opcion_caracter = OpcionCaracter::caracter_no_alfabetico;
		}

	
	// Muestra de resutados:
	
	
	if (opcion_caracter == OpcionCaracter::mayuscula)
		cout << "Su letra introducida era May�scula, tras la conversi�n: " << letra_convertida << "\n\n";
	else
		if (opcion_caracter == OpcionCaracter::minuscula)
			cout << "Su letra introducida era Min�scula, tras la conversi�n: " << letra_convertida << "\n\n";
		else
			cout << "Lo sentimos, su car�cter no es una letra: " << letra_convertida << "\n\n";
			
			
	system ("pause");
	
}

	
		

