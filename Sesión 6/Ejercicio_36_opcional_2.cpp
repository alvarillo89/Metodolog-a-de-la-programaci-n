/* Programador: �lvaro Fern�ndez Garc�a.
Se pide crear un programa que lea desde teclado r, el primer elemento a1 
y el tope k y calcule la suma de los primeros k valores de la serie. */

// Inclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

int valor_a1;							// N�mero inicial de la sucesi�n.
int valor_r;							// Raz�n de la sucesi�n.
int valor_k;							// Tope de valores de la sucesi�n
int sumatoria;							// Sumatoria de los primeros k valores.
int contador_elementos_serie;		// Variable auxiliar que cuenta los valores calculados.
int dato_nuevo, dato_anterior;	// Variables auxiliares para el c�lculo de los elementos.

// Comienzo del programa:


using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el primer valor de la suceci�n: a1 = ";
	cin >> valor_a1;
	cout << "Introduzca la raz�n de la sucesi�n: r = ";
	cin >> valor_r;
	cout << "Introduzca el valor tope: k = ";
	cin >> valor_k;
	
	// C�mputos:
	
	sumatoria = valor_a1;
	dato_anterior = valor_a1;
	
	for ( contador_elementos_serie = 2 ; contador_elementos_serie <= valor_k ; contador_elementos_serie ++) {
		// Igualado a dos porque, el primer dato, ya est� incorporado a la suma.
		dato_nuevo = dato_anterior * valor_r;
		sumatoria = sumatoria + dato_nuevo;
		dato_anterior = dato_nuevo;
	}
	
	// Salida de datos: 
	
	cout << "La sumatoria de los primeros " << valor_k << " digitos de la sucesi�n es : " << sumatoria << "\n\n";
	
	system ("pause");
	
}

/* Es m�s eficiente este segundo m�todo ya que el programa realiza menos c�lculos y la expresi�n
es m�s sencilla. */
