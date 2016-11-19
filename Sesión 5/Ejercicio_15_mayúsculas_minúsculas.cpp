/* Programador: Álvaro Fernández García.
Modificación del ejercicio 8, separando cómputos de E/S de datos y utilizando tipos enumerados.
Programa que leerá desde teclado una letra. Si esta letra es mayúscula la colocará en minúscula, si es minúscula
la colocará en mayúscula. Si el carácter introducido no es una letra, el programa lo indicará. */

// Introducción de recursos:

#include <iostream>

// Declaración de variables:

char letra_original;														// Variable: Letra introducida por el usuario.
char letra_convertida;													// Variable: Resultado que plasmará el programa.
bool letra_mayuscula, letra_minuscula;								// Variables auxiliares.
const char diferencia_mayuscula_minuscula = 'a' - 'A';

// Comienzo del programa:

using namespace std;

enum class OpcionCaracter 
	{mayuscula, minuscula, caracter_no_alfabetico};

int main () {
	
	// Declaración de variables de Tipo Enumerado:
	
	OpcionCaracter opcion_caracter;
	
	// Introducción de datos:
	
	cout << "Introduzca un carácter: ";
	cin >> letra_original;
	
	// Cómputos:
	
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
		cout << "Su letra introducida era Mayúscula, tras la conversión: " << letra_convertida << "\n\n";
	else
		if (opcion_caracter == OpcionCaracter::minuscula)
			cout << "Su letra introducida era Minúscula, tras la conversión: " << letra_convertida << "\n\n";
		else
			cout << "Lo sentimos, su carácter no es una letra: " << letra_convertida << "\n\n";
			
			
	system ("pause");
	
}

	
		

