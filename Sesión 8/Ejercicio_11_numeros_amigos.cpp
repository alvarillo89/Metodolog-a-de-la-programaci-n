///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Leer dos números naturales e indicar si son o no amigos. A continuación leerá otro número natural,
n, e informará si existe algún número amigo de n en el intervalo centrado en n y de radio 3. 
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

// Variables globales:

const int RADIO = 3;
bool existe_valor_intervalo = false;

// Función que obliga a introducir un número natural:

int NumeroNatural (string mensaje) {
	int dato;
	
	do {
		cout << mensaje;
		cin >> dato;
	} while (dato < 0);
	
	return dato;

/* Algoritmo:
	Bucle: Vuelve a pedir un número mientras este sea negativo.	
	(No sea natural)
*/
}
	
// Función que calcula la sumatoria de los divisores propios:

int SumatoriaDivisoresPropios (int numero) {
	int i, sumatoria = 0;
	
	for (i = 2; i < numero; i ++) {
		if (numero % i == 0)
			sumatoria = sumatoria + i;
	}

return sumatoria;

/* Algoritmo:
	Contador: recorre todos los números menores que el introducido.
		Si el el resto de dividir el número y el contador es 0, añade dicho
		número a la sumatoria, si no no hace nada.
*/

}

// Función que comprueba si los dos número introducidos son, o no, amigos.

bool SonNumerosAmigos (int numero_1, int numero_2) {
	
	if (SumatoriaDivisoresPropios(numero_1) + 1 == numero_2 &&
		 SumatoriaDivisoresPropios(numero_2) + 1 == numero_1)
		return true;
	else
		return false;	

	/* Algoritmo: 
		Si se cumple la condición de números amigos, devuelve true,
		si no devuelve false. */
}

// Función que comprueba si hay números amigos en el intervalo de n.

int NumerosAmigosIntervalo (int numero_n) {
	int i, numero_amigo = 0;
	
	for (i = numero_n - RADIO; i <= numero_n + RADIO; i ++) {
		
		if (SonNumerosAmigos (i, numero_n)) {
			existe_valor_intervalo = true;
			numero_amigo = i;
		}	
	}
	
	return numero_amigo;

/* Algoritmo:
	Bucle: inicio desde el minimo del intervalo, mientras el contador sea menor
	o igual que el máximo del intervalo.
		Si el contador y el número n son amigos asigna dicho dicho valor a una variable
		y activa la opción existe un valor en el intervalo. Si no, la función no
		realiza nada.
*/
}

int main () {
	
	int numero_1, numero_2, numero_n, numero_intervalo;
	
	// Entrada de datos:
	
	numero_1 = NumeroNatural ("Introduzca un número natural: ");
	numero_2 = NumeroNatural ("Introduzca otro número natural: ");
	
	
	// Salida de datos (son amigables o no):
	
	if (SonNumerosAmigos (numero_1, numero_2))
		cout << "Los números " << numero_1 << " y " << numero_2 << " son números amigos.\n";
	else 
		cout << "Los números " << numero_1 << " y " << numero_2 << " NO son números amigos.\n";
		

	// Entrada del dato n:
	
	numero_n = NumeroNatural ("Introduzca un tercer número natural: ");
	numero_intervalo = NumerosAmigosIntervalo (numero_n);
	
	
	// Salida de datos (existe o no número amigable en el intervalo):
	
	if (existe_valor_intervalo) {
		cout << "Los números que son amigables con " << numero_n << " en un intervalo de radio " << RADIO << " son: ";
		cout << numero_intervalo << "\n\n"; 
	}
	else
		cout << "No existen números que sean amigables con " << numero_n << " en un intervalo de radio " << RADIO << ".\n\n"; 
	
	
	system ("pause");
	
}
