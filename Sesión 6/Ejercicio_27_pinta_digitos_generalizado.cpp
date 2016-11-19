/* Programador: Álvaro Fernández García.
En el ejercicio 14 de la Relación de Problemas I se pedía escribir un programa que leyese un valor 
entero de tres dígitos e imprimiese los dígitos separados por un espacio en blanco. Haced lo mismo 
pero para un número entero arbitrario. */

// Introducción de recursos:

#include <iostream>
#include <cmath>

// Declaración de variables:

int numero_introducido;					// Variable: Número introducido por el usuario.
int copia_numero_introducido;			// Variable auxiliar: Copia del número introducido.
int numero_cifras;						// Variable auxiliar: Cifras del número introducido.
int cociente_de_diez;					/* Variabe auxiliar que determina el número por el que hay que comenzar
												a extraer las cifras*/
												
// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un número entero cualquiera: ";
	cin >> numero_introducido;
	
	// Cómputos y salida de datos.
	
	numero_cifras = 0;
	copia_numero_introducido = numero_introducido;
	
	while (copia_numero_introducido != 0) {									
	copia_numero_introducido = copia_numero_introducido / 10;
	numero_cifras ++;
	}
	
	copia_numero_introducido = numero_introducido;
	cociente_de_diez = pow(10, numero_cifras - 1);		/* La potencia de diez será 10 elevado al número de cifras menos uno
																		puesto que no nos interesa la primera cifra significativa. */
	
	while (cociente_de_diez != 0) {
		copia_numero_introducido = numero_introducido / cociente_de_diez;
		copia_numero_introducido = copia_numero_introducido % 10;
		cout << copia_numero_introducido << "   ";
		cociente_de_diez = cociente_de_diez / 10;
	}
		
	
	cout << "\n\n";
	
	system ("pause");
	
}
