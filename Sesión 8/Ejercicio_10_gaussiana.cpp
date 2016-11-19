//////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Cread un programa que lea un valor de esperanza y desviación y a continuación lea un número entero n 
que indique el número de abscisas que se van a procesar. Leed un total de n valores reales e imprimid 
en pantalla el valor de la función gaussiana en dichos valores.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

using namespace std;

// Variables globales:

const double PI = 3.14159265;

// Función para calcular la Gaussiana de una Abcisa:

double CalculaGaussiana (double esperanza, double desviacion, double abcisa) {
	double gaussiana;
	
	gaussiana = (1 / (desviacion * sqrt(2 * PI))) * exp (-0.5 * pow((abcisa - esperanza) / desviacion , 2));
	
	return gaussiana;
	
	/* Algoritmo:
		Aplica la fórmula de la función Gaussiana y devuelve su valor.
	*/
	
}

// Función que calcula una aproximación del CDF(x):

double CalculaCDF (double esperanza, double desviacion, double abcisa) {
	double t, cdf;
	const double b0 = 0.2316419;
	const double b1 = 0.319381530;
	const double b2 = -0.356563782;
	const double b3 = 1.781477937;
	const double b4 = -1.821255978;
	const double b5 = 1.330274429;
	
	t = 1 / (1.0 + b0 * abcisa);
	
	cdf = 1 - CalculaGaussiana(esperanza, desviacion, abcisa) *
			(b1 * t + b2 * pow(t , 2) + b3 * pow (t , 3) + b4 * pow (t , 4) + b5 * pow(t , 5));
			
	return cdf;
	
	/* Algoritmo: 
		Cálculo del valor t en la fórmula del CDF.
		Cálculo del valor de CFD. 
	*/
	
}

int main () {
	
	double esperanza, desviacion, numero_abcisas, abcisa;
	double gaussiana, cdf;
	int i;
	
	// Entrada de datos:
	
	cout << "Introduzca el valor de la esperanza: ";
	cin >> esperanza;
	cout << "Introduzca el valor de la desviación: ";
	cin >> desviacion;
	cout << "Introduzca el número de abcisas que desea calcular: ";
	cin >> numero_abcisas;
	
	// Cálculo de la Gaussiana y el CDF de cada abcisa introducida:
	
	for (i = 1 ; i <= numero_abcisas ; i ++) {
		cout << "Introduza la abcisa: ";
		cin >> abcisa;
		gaussiana = CalculaGaussiana (esperanza, desviacion, abcisa);
		cdf = CalculaCDF (esperanza, desviacion, abcisa);
		
		cout << "\nEl valor de la función Gaussiana para x = " << abcisa << " es: " << gaussiana;
		cout << "\nEl valor del CDF(x) para x = " << abcisa << " es: " << cdf <<"\n\n";
	
	}
	
	system ("pause");
	
}
	
