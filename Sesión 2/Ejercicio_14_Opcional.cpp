/* Programador: Álvaro Fernández García. 
El siguiente programa nos pide que introduzcamos tes números enteros, a continuación dicho programa
imprime dichos dígitos separados por tres espacios. */

// Introducción de recursos.

#include <iostream>
#include <cmath>

// Declaración de variables.

int numero;								// Variable: Número de tres dígitos introducido por el usuario.
int primer_digito;					// Variable: El primer entero de los tres números.
int segundo_digito;					// Variable: El segundo entero de los tres números.
int tercer_digito;					// Variable: El tercer entero de los tres números.

// Inicio del programa.

using namespace std;

int main (){
	
	// Introducción de datos.
	
	cout << "Introduzca un número entero de tres dígitos: ";
	cin >> numero;
	
	// Operaciones necesarias. Separación de los tres digitos y almacenamiento en variables.
	
	primer_digito = (numero / 100) % 10;
	segundo_digito = (numero / 10) % 10;
	tercer_digito = numero % 10;
	
	// Muestra de los tres dígitos separados.
	
	cout << primer_digito << "   " << segundo_digito << "   " << tercer_digito << "\n\n";
	
	system ("pause");
	
}
