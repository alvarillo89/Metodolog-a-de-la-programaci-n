/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Se quiere construir una clase DepositoSimulacion para simular préstamos, ofreciendo la funcionalidad 
descrita en los ejercicios 19 (reinvierte capital e interés un número de años) y 20 (reinvierte 
capital e interés hasta obtener el doble de la cantidad inicial) de la relación de problemas II 
(página RP-II.7). Por tanto, la clase debe proporcionar, para un capital y unos intereses dados, métodos 
para: 
a) Calcular el capital que se obtendrá al cabo de un número de años 
b) Calcular el número de años que deben pasar hasta obtener el doble de la cantidad inicial.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class DepositoSimulacion {
	private:
		double capital = 0;
		double interes = 0;
	
		// Método para comprobar que el capital e interés introducidos son correctos:
		
		bool CantidadCorrecta (double dato) {
			return dato >= 0;
		}
		
	public:
		
		// Constructor:
		
		DepositoSimulacion (double ingresos, double porcentaje_interes) {
			
			if (CantidadCorrecta (ingresos))
				capital = ingresos;
			if (CantidadCorrecta (porcentaje_interes))
				interes = porcentaje_interes;
			
		}
		
		// Método para aplicar el interés:
		
			void AplicaInteres () {
				capital = capital + capital * (interes / 100);
			}
		
		// Método para calcular el capital al cabo de unos determinados años:
		
		double CapitalAnios (int anios) {
			int i;
			double copia_capital = capital;
			
			for (i = 1 ; i <=	anios ; i ++) {
				copia_capital = copia_capital + copia_capital * (interes / 100);
			}
			
			return copia_capital;
		}
		
		// Método para calcular el número de años necesarios para obtener una cantidad específica:
		
		int AniosModificarCapital (int cantidad_deseada) {
			double copia_capital = capital;
			int numero_anios = 0;
			
			while (copia_capital <= capital * cantidad_deseada) {
				copia_capital = copia_capital + copia_capital * (interes / 100);
				numero_anios ++;
			}
			
			return numero_anios;
			
		}
		
		// Método para modificar el capital de la cuenta:
		
		void IngresaCapital (double cantidad) {
			if (CantidadCorrecta (cantidad))
				capital = capital + cantidad;
			}
			
		// Metodo para modificar el interés de la cuenta:
			
			void NuevoInteres (double nuevo_interes) {
				if (CantidadCorrecta (nuevo_interes))
					interes = nuevo_interes;
			}
			
	};
	
	int main () {
		double capital, interes;
		int anios;
		
		// Entrada de datos:
		
		cout << "Introduzca el capital inicial: ";
		cin >> capital;
		cout << "Introduzca el interés a aplicar: ";
		cin >> interes;
		
		DepositoSimulacion un_deposito (capital, interes);
		
		// Cómputos y salida de datos:
		
		cout << "Introduzca el numero de años: ";
		cin >> anios;
		
		cout << "Su capital al cabo de " << anios << " años será de: " << un_deposito.CapitalAnios(anios) << "\n";
			
		cout << "Necesitará " << un_deposito.AniosModificarCapital(2) << " años para doblar su capital.\n\n";
		
		system ("pause");
		
	}
