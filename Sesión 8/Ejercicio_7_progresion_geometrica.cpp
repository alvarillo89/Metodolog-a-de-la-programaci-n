///////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Cree las siguientes funciones relacionadas con la progresión geométrica que se vio en el ejercicio 36 de la 
relación de problemasII. Analizad cuáles deben ser los parámetros a estas funciones:
SumaHasta, ProductoHasta, SumaHastaInfinito.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

using namespace std;

// Función que calcula la suma de los primeros k valores de la progresión geométrica.

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
			-El nuevo valor calculado será el anterior por el valor de r.
			-Se añade el nuevo valor a la sumatoria.
			-El dato calculado pasa a ser el anterior.
*/
	
}

// Función que calcula el producto de los primeros k valores de la progresión geométrica.

double ProductoHasta (double a_inicial, double tope_k, double valor_r) {
	double a_sub_k, producto;
	
	a_sub_k = a_inicial * pow (valor_r, tope_k - 1.0);
	producto = sqrt (pow ( a_inicial * a_sub_k, tope_k * 1.0) );
	
	return producto;
	
	/* Algoritmo:
		Cálculo del valor que toma la sucesión en k.
		Cálculo del producto mediante la fórmula especificada.
	*/
	
}

// Función que calcula la suma hasta infinito de la progresión geométrica.

double SumaHastaInfinito (double a_inicial, double valor_r) {
	double suma_infinito;
	
	suma_infinito = a_inicial / (1.0 - valor_r);
	
	return suma_infinito;
	
	/* Algoritmo:
		Cálculo de la suma hasta infinito mediante la expresión dada.
	*/
	
}

int main () {
	
	double valor_a1, valor_r, valor_k;
	double sumatoria, producto, suma_infinito;
	
	cout << "Introduzca el primer valor de la sucesión: a1 = ";
	cin >> valor_a1;
	cout << "Introduzca la razón de la sucesión: r = ";
	cin >> valor_r;
	cout << "Introduzca el valor tope: k = ";
	cin >> valor_k;
	
	sumatoria = SumaHasta (valor_a1, valor_k, valor_r);
	producto = ProductoHasta (valor_a1, valor_k, valor_r);
	suma_infinito = SumaHastaInfinito (valor_a1, valor_r);
	
	cout << "La suma de los primeros " << valor_k << " valores es: " << sumatoria << "\n";
	cout << "El producto de los primeros " << valor_k << " valores es: " << producto << "\n";
	cout << "La suma de la sucesión hasta infinito es: " << suma_infinito << "\n\n";
	
	system ("pause");
	
}
