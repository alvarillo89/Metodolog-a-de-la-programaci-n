/* Programador: �lvaro Fern�ndez Garc�a.
Modificaci�n del ejercicio 6 de la relaci�n 1.
Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros capital durante un a�o a plazo 
fijo, se dar� un inter�s dado por la variable interes. Realizad un programa que lea una cantidad capital y un 
inter�s interes desde teclado y calcule en una variable total el dinero que se tendr� al cabo de un a�o, aplicando la f�rmula:
*/

// Introducci�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables:

double capital, interes;				// Variables introducidas por el usuario.
int numero_anios, contador_anios;									

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el capital a invertir: ";
	cin >> capital;
	cout << "Introduzca el inter�s a aplicar: ";
	cin >> interes;
	cout << "Introduzca el n�mero de a�os que desea reinvertir el dinero: ";
	cin >> numero_anios;
	
	// C�mputos y salida de datos: 
	
	contador_anios = 1;
	
	
	do{
		capital = capital + capital * (interes / 100);
		cout << "Total en el a�o n�mero " << contador_anios << " = " << capital << "\n";
		contador_anios ++;
	} while (contador_anios <= numero_anios);
	
	
	cout << "\n\n";
	
	system ("pause");
	
}
