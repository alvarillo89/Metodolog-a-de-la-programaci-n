/* Programador: Álvaro Fernández García.
Se pide crear un programa que lea desde teclado r, el primer elemento a1 
y el tope k y calcule la suma de los primeros k valores de la serie. */

// Inclusión de recursos:

#include <iostream>

// Declaración de variables:

int valor_a1;							// Número inicial de la sucesión.
int valor_r;							// Razón de la sucesión.
int valor_k;							// Tope de valores de la sucesión
int sumatoria;							// Sumatoria de los primeros k valores.
int contador_elementos_serie;		// Variable auxiliar que cuenta los valores calculados.
int dato_nuevo, dato_anterior;	// Variables auxiliares para el cálculo de los elementos.

// Comienzo del programa:


using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el primer valor de la suceción: a1 = ";
	cin >> valor_a1;
	cout << "Introduzca la razón de la sucesión: r = ";
	cin >> valor_r;
	cout << "Introduzca el valor tope: k = ";
	cin >> valor_k;
	
	// Cómputos:
	
	sumatoria = valor_a1;
	dato_anterior = valor_a1;
	
	for ( contador_elementos_serie = 2 ; contador_elementos_serie <= valor_k ; contador_elementos_serie ++) {
		// Igualado a dos porque, el primer dato, ya está incorporado a la suma.
		dato_nuevo = dato_anterior * valor_r;
		sumatoria = sumatoria + dato_nuevo;
		dato_anterior = dato_nuevo;
	}
	
	// Salida de datos: 
	
	cout << "La sumatoria de los primeros " << valor_k << " digitos de la sucesión es : " << sumatoria << "\n\n";
	
	system ("pause");
	
}

/* Es más eficiente este segundo método ya que el programa realiza menos cálculos y la expresión
es más sencilla. */
