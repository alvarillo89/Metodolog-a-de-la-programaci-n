//////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Recuperad el ejercicio 12 de esta relación de problemas sobre la función gaussiana. 
En vez de trabajar con funciones, plantead la solución con una clase.
*/
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265;

class Gaussiana {
	private:
		double esperanza = 0;
		double desviacion = 0;
		
	public:
		
		// Constructor:
		
		Gaussiana (double esperanza_introducida, double desviacion_introducida) {
				desviacion = desviacion_introducida;
				esperanza = esperanza_introducida;
		}
			
		// Método que calcula la gaussiana en un punto de abcisa:
		
		double CalculaGaussiana (double abcisa) {
			return (1 / (desviacion * sqrt(2 * PI))) * exp (-0.5 * pow((abcisa - esperanza) / desviacion , 2));
		}
		
		// Método que calcula el CDF:
		
		double CalculaCDF (double abcisa) {
			double t;
			const double b0 = 0.2316419;
			const double b1 = 0.319381530;
			const double b2 = -0.356563782;
			const double b3 = 1.781477937;
			const double b4 = -1.821255978;
			const double b5 = 1.330274429;
			
			t = 1 / (1.0 + b0 * abcisa);
			
			return 1 - CalculaGaussiana(abcisa) *
					(b1 * t + b2 * pow(t , 2) + b3 * pow (t , 3) + b4 * pow (t , 4) + b5 * pow(t , 5));
		}
	
};

	int main () {
	
		double esperanza, desviacion, numero_abcisas, abcisa, gaussiana, cdf;
		int i;
		
		// Entrada de datos:
		
		cout << "Introduzca el valor de la esperanza: ";
		cin >> esperanza;
		cout << "Introduzca el valor de la desviación: ";
		cin >> desviacion;
		
		Gaussiana una_gaussiana (esperanza, desviacion);
		
		cout << "Introduzca el número de abcisas que desea calcular: ";
		cin >> numero_abcisas;
		
		// Cálculo de la Gaussiana y el CDF de cada abcisa introducida:
		
		for (i = 1 ; i <= numero_abcisas ; i ++) {
			cout << "Introduza la abcisa: ";
			cin >> abcisa;
			gaussiana = una_gaussiana.CalculaGaussiana (abcisa);
			cdf = una_gaussiana.CalculaCDF (abcisa);
			
			cout << "\nEl valor de la función Gaussiana para x = " << abcisa << " es: " << gaussiana;
			cout << "\nEl valor del CDF(x) para x = " << abcisa << " es: " << cdf <<"\n\n";
		
		}
		
		system ("pause");
		
	}
