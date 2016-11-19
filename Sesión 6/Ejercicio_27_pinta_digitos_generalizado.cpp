/* Programador: �lvaro Fern�ndez Garc�a.
En el ejercicio 14 de la Relaci�n de Problemas I se ped�a escribir un programa que leyese un valor 
entero de tres d�gitos e imprimiese los d�gitos separados por un espacio en blanco. Haced lo mismo 
pero para un n�mero entero arbitrario. */

// Introducci�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables:

int numero_introducido;					// Variable: N�mero introducido por el usuario.
int copia_numero_introducido;			// Variable auxiliar: Copia del n�mero introducido.
int numero_cifras;						// Variable auxiliar: Cifras del n�mero introducido.
int cociente_de_diez;					/* Variabe auxiliar que determina el n�mero por el que hay que comenzar
												a extraer las cifras*/
												
// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un n�mero entero cualquiera: ";
	cin >> numero_introducido;
	
	// C�mputos y salida de datos.
	
	numero_cifras = 0;
	copia_numero_introducido = numero_introducido;
	
	while (copia_numero_introducido != 0) {									
	copia_numero_introducido = copia_numero_introducido / 10;
	numero_cifras ++;
	}
	
	copia_numero_introducido = numero_introducido;
	cociente_de_diez = pow(10, numero_cifras - 1);		/* La potencia de diez ser� 10 elevado al n�mero de cifras menos uno
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
