///////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Cree las siguientes funciones relacionadas con la progresi�n geom�trica que se vio en el ejercicio 36 de la 
relaci�n de problemasII. Analizad cu�les deben ser los par�metros a estas funciones:
SumaHasta, ProductoHasta, SumaHastaInfinito.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

using namespace std;

// Funci�n que calcula la suma de los primeros k valores de la progresi�n geom�trica.

double SumaHasta (double a_inicial, double tope_k, double valor_r) {
	double dato_nuevo, dato_anterior, sumatoria, i;
	
	sumatoria = a_inicial;
	dato_anterior = a_inicial;
	
	for (i = 2 ; i <= tope_k ; i ++) {
		dato_nuevo = dato_anterior * valor_r;
		sumatoria = sumatoria + dato_nuevo;
		dato_anterior = dato_nuevo;
	}
	
	return sumatoria;

/* Algoritmo: 
		Igualar la sumatoria y el dato anterior al valor inicial.
	
		Bucle (iniciado a 2 porque el primer elemento es el introducido ;
		mientras no se alcance el tope)
			-El nuevo valor calculado ser� el anterior por el valor de r.
			-Se a�ade el nuevo valor a la sumatoria.
			-El dato calculado pasa a ser el anterior.
*/
	
}

// Funci�n que calcula el producto de los primeros k valores de la progresi�n geom�trica.

double ProductoHasta (double a_inicial, double tope_k, double valor_r) {
	double a_sub_k, producto;
	
	a_sub_k = a_inicial * pow (valor_r, tope_k - 1.0);
	producto = sqrt (pow ( a_inicial * a_sub_k, tope_k * 1.0) );
	
	return producto;
	
	/* Algoritmo:
		C�lculo del valor que toma la sucesi�n en k.
		C�lculo del producto mediante la f�rmula especificada.
	*/
	
}

// Funci�n que calcula la suma hasta infinito de la progresi�n geom�trica.

double SumaHastaInfinito (double a_inicial, double valor_r) {
	double suma_infinito;
	
	suma_infinito = a_inicial / (1.0 - valor_r);
	
	return suma_infinito;
	
	/* Algoritmo:
		C�lculo de la suma hasta infinito mediante la expresi�n dada.
	*/
	
}

int main () {
	
	double valor_a1, valor_r, valor_k;
	double sumatoria, producto, suma_infinito;
	
	cout << "Introduzca el primer valor de la sucesi�n: a1 = ";
	cin >> valor_a1;
	cout << "Introduzca la raz�n de la sucesi�n: r = ";
	cin >> valor_r;
	cout << "Introduzca el valor tope: k = ";
	cin >> valor_k;
	
	sumatoria = SumaHasta (valor_a1, valor_k, valor_r);
	producto = ProductoHasta (valor_a1, valor_k, valor_r);
	suma_infinito = SumaHastaInfinito (valor_a1, valor_r);
	
	cout << "La suma de los primeros " << valor_k << " valores es: " << sumatoria << "\n";
	cout << "El producto de los primeros " << valor_k << " valores es: " << producto << "\n";
	cout << "La suma de la sucesi�n hasta infinito es: " << suma_infinito << "\n\n";
	
	system ("pause");
	
}
