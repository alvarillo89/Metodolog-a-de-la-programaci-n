/* Programador: �lvaro Fern�ndez Garc�a.
Modificaci�n del ejercicio 45. Hacer que el programa lea desde teclado el n�mero inicial
y el n�mero de filas.
*/

// Inclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int contador_fila, contador_numero, contador_tope;
int numero_inicial, numero_filas, numero_tope;			
int copia_numero_inicial;

// Comienzo del programa:

using namespace std;

int main () {

	// Entrada de datos:
	
	cout << "Introduzca el n�mero inicial: ";
	cin >> numero_inicial;
	cout << "Introduzca el n�mero de filas que desea imprimir: ";
	cin >> numero_filas;

	// C�mputos y salida de datos:

	// Bucle que calcula el n�mero tope.
		
		numero_tope = numero_inicial;
		for (contador_tope = 1 ; contador_tope < numero_filas ; contador_tope ++)
			numero_tope ++;
			
	// Bucle que realiza el tri�ngulo:

	copia_numero_inicial = numero_inicial;			
	for (contador_fila = 1 ; contador_fila <= numero_filas ; contador_fila ++) {
		for (contador_numero = copia_numero_inicial ; contador_numero <= numero_tope ; contador_numero ++)
			cout << contador_numero << " "; 
		copia_numero_inicial ++;
		cout << "\n";
	}
		
	cout << "\n\n";
	
	// Bucle que realiza el cuadrado;
	
	copia_numero_inicial = numero_inicial;
	for (contador_fila = 1 ; contador_fila <= numero_filas ; contador_fila ++) {
		for (contador_numero = copia_numero_inicial ; contador_numero <= numero_tope ; contador_numero ++)
			cout << contador_numero << " "; 
		copia_numero_inicial ++;
		numero_tope ++;
		cout << "\n";
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}

/* Para calcular el valor tope, se podr�a haber empleado el algoritmo, (numero_inicial + numero_filas) - 1.
No obstante he considerado m�s correcto y formal, emplear un bucle para dicha tarea. */ 
