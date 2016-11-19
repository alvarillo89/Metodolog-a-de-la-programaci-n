/* Programador: �Lvaro Fern�ndez Garc�a.
Modificaci�n del ejercicio 33 (factorial y potencial) implementando funciones.
*/

// Inclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int dato;
long long factorial;
double potencia;
int exponente;

// Implementaci�n de funciones:

using namespace std;

int LeeEnteroPositivo (string mensaje) {
	int dato;
	do {
		cout << mensaje;
		cin >> dato;
	} while (dato <= 0 );
	return dato;
}

int Factorial (int dato) {
	long long factorial = 1;
	int multiplicador;
	for (multiplicador = 2 ; multiplicador <= dato ; multiplicador ++)
		factorial = factorial * multiplicador;	
	return factorial;
}

double Potencia (double base , int exponente) {
	double potencia = 1;
	int contador;
	for (contador = 1 ; contador <= exponente ; contador ++)
		potencia = potencia * base;
	return potencia;
}

// Comienzo del programa:

int main () {
	
	dato = LeeEnteroPositivo ("Introduzca un n�mero entero positivo: ");
	
	factorial = Factorial (dato);
	
	cout << "El factorial de " << dato << " es: " << factorial << "\n";
	
	cout << "Introduzca el exponente: ";
	cin >> exponente;
	
	potencia = Potencia (dato , exponente);
	
	cout << "La potencia de " << dato << " elevado a " << exponente << " es: " << potencia << "\n\n";
	
	system ("pause");
	
}
