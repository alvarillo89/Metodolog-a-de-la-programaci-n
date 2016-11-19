///////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
En el ejercicio 7 de esta relaci�n de problemas se definieron varias funciones para 
operar sobre una progresi�n geom�trica. Definid ahora una clase para representar 
una progresi�n geom�trica.
*/
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

class ProgresionGeometrica {
	private:
		int valor_inicial = 0;
		int razon_r = 0;
		
	public:
		
		// Constructor:
		
		ProgresionGeometrica (double a_inicial, double razon) {
			valor_inicial = a_inicial;
			razon_r = razon;
		}
		
		// M�todo que devuelve el t�rmino k �simo:
		
		double Termino (int tope_k) {
			return valor_inicial * pow(razon_r, tope_k - 1.0);
		}
		
		// M�todo que calcula la suma de los primeros k t�rminos:
		
		double SumaHasta (int tope_k) {
			double dato_nuevo, dato_anterior, sumatoria, i;
	
			sumatoria = valor_inicial;
			dato_anterior = valor_inicial;
			
			for (i = 2 ; i <= tope_k ; i ++) {
				dato_nuevo = dato_anterior * razon_r;
				sumatoria = sumatoria + dato_nuevo;
				dato_anterior = dato_nuevo;
			}
			
			return sumatoria;
		}
		
		// M�todo que calcula el producto de los primeros k t�rminos:
		
		double MultiplicaHasta (int tope_k) {
			return sqrt (pow ( valor_inicial * Termino(tope_k) , tope_k * 1.0) );
		}
		
		// M�todo que calcula la suma hasta infinito:
		
		double SumaHastaInfinito () {
			return valor_inicial / (1.0 - razon_r);
		}
		
	};
	
	int main () {
		double valor_inicial, razon, tope_k, i;
		
		// Entrada de datos:
		
		cout << "Introduzca el primer valor de la sucesi�n: a1 = ";
		cin >> valor_inicial;
		cout << "Introduzca la raz�n de la sucesi�n: r = ";
		cin >> razon;
		
		ProgresionGeometrica una_progresion (valor_inicial, razon);
		
		cout << "Introduzca el valor tope: k = ";
		cin >> tope_k;
		
		// Salida de datos y c�mputos:
		
		cout << "Los primeros " << tope_k << " valores de la sucesi�n son:\n";
		
		for (i = 1 ; i <= tope_k ; i ++ ){
			cout << una_progresion.Termino(i) << "  ";
		}
		
		cout << "\nLa sumatoria de los primeros " << tope_k << " t�rminos de la sucesi�n es: " << una_progresion.SumaHasta(tope_k);
		cout << "\n\n";
		
		system ("pause");
		
	}
	
