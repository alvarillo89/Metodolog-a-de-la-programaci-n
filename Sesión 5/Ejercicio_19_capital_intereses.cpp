/* Programador: Álvaro Fernández García.
Modificación del ejercicio 6 de la relación 1.
Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros capital durante un año a plazo 
fijo, se dará un interés dado por la variable interes. Realizad un programa que lea una cantidad capital y un 
interés interes desde teclado y calcule en una variable total el dinero que se tendrá al cabo de un año, aplicando la fórmula:
*/

// Introducción de recursos:

#include <iostream>
#include <cmath>

// Declaración de variables:

double capital, interes;				// Variables introducidas por el usuario.
int numero_anios, contador_anios;									

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el capital a invertir: ";
	cin >> capital;
	cout << "Introduzca el interés a aplicar: ";
	cin >> interes;
	cout << "Introduzca el número de años que desea reinvertir el dinero: ";
	cin >> numero_anios;
	
	// Cómputos y salida de datos: 
	
	contador_anios = 1;
	
	
	do{
		capital = capital + capital * (interes / 100);
		cout << "Total en el año número " << contador_anios << " = " << capital << "\n";
		contador_anios ++;
	} while (contador_anios <= numero_anios);
	
	
	cout << "\n\n";
	
	system ("pause");
	
}
