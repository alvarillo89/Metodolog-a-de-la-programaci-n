///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Leer dos n�meros naturales e indicar si son o no amigos. A continuaci�n leer� otro n�mero natural,
n, e informar� si existe alg�n n�mero amigo de n en el intervalo centrado en n y de radio 3. 
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

// Variables globales:

const int RADIO = 3;
bool existe_valor_intervalo = false;

// Funci�n que obliga a introducir un n�mero natural:

int NumeroNatural (string mensaje) {
	int dato;
	
	do {
		cout << mensaje;
		cin >> dato;
	} while (dato < 0);
	
	return dato;

/* Algoritmo:
	Bucle: Vuelve a pedir un n�mero mientras este sea negativo.	
	(No sea natural)
*/
}
	
// Funci�n que calcula la sumatoria de los divisores propios:

int SumatoriaDivisoresPropios (int numero) {
	int i, sumatoria = 0;
	
	for (i = 2; i < numero; i ++) {
		if (numero % i == 0)
			sumatoria = sumatoria + i;
	}

return sumatoria;

/* Algoritmo:
	Contador: recorre todos los n�meros menores que el introducido.
		Si el el resto de dividir el n�mero y el contador es 0, a�ade dicho
		n�mero a la sumatoria, si no no hace nada.
*/

}

// Funci�n que comprueba si los dos n�mero introducidos son, o no, amigos.

bool SonNumerosAmigos (int numero_1, int numero_2) {
	
	if (SumatoriaDivisoresPropios(numero_1) + 1 == numero_2 &&
		 SumatoriaDivisoresPropios(numero_2) + 1 == numero_1)
		return true;
	else
		return false;	

	/* Algoritmo: 
		Si se cumple la condici�n de n�meros amigos, devuelve true,
		si no devuelve false. */
}

// Funci�n que comprueba si hay n�meros amigos en el intervalo de n.

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
	o igual que el m�ximo del intervalo.
		Si el contador y el n�mero n son amigos asigna dicho dicho valor a una variable
		y activa la opci�n existe un valor en el intervalo. Si no, la funci�n no
		realiza nada.
*/
}

int main () {
	
	int numero_1, numero_2, numero_n, numero_intervalo;
	
	// Entrada de datos:
	
	numero_1 = NumeroNatural ("Introduzca un n�mero natural: ");
	numero_2 = NumeroNatural ("Introduzca otro n�mero natural: ");
	
	
	// Salida de datos (son amigables o no):
	
	if (SonNumerosAmigos (numero_1, numero_2))
		cout << "Los n�meros " << numero_1 << " y " << numero_2 << " son n�meros amigos.\n";
	else 
		cout << "Los n�meros " << numero_1 << " y " << numero_2 << " NO son n�meros amigos.\n";
		

	// Entrada del dato n:
	
	numero_n = NumeroNatural ("Introduzca un tercer n�mero natural: ");
	numero_intervalo = NumerosAmigosIntervalo (numero_n);
	
	
	// Salida de datos (existe o no n�mero amigable en el intervalo):
	
	if (existe_valor_intervalo) {
		cout << "Los n�meros que son amigables con " << numero_n << " en un intervalo de radio " << RADIO << " son: ";
		cout << numero_intervalo << "\n\n"; 
	}
	else
		cout << "No existen n�meros que sean amigables con " << numero_n << " en un intervalo de radio " << RADIO << ".\n\n"; 
	
	
	system ("pause");
	
}
