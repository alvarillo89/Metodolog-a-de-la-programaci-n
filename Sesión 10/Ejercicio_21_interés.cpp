/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Se quiere construir una clase DepositoSimulacion para simular pr�stamos, ofreciendo la funcionalidad 
descrita en los ejercicios 19 (reinvierte capital e inter�s un n�mero de a�os) y 20 (reinvierte 
capital e inter�s hasta obtener el doble de la cantidad inicial) de la relaci�n de problemas II 
(p�gina RP-II.7). Por tanto, la clase debe proporcionar, para un capital y unos intereses dados, m�todos 
para: 
a) Calcular el capital que se obtendr� al cabo de un n�mero de a�os 
b) Calcular el n�mero de a�os que deben pasar hasta obtener el doble de la cantidad inicial.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class DepositoSimulacion {
	private:
		double capital = 0;
		double interes = 0;
	
		// M�todo para comprobar que el capital e inter�s introducidos son correctos:
		
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
		
		// M�todo para aplicar el inter�s:
		
			void AplicaInteres () {
				capital = capital + capital * (interes / 100);
			}
		
		// M�todo para calcular el capital al cabo de unos determinados a�os:
		
		double CapitalAnios (int anios) {
			int i;
			double copia_capital = capital;
			
			for (i = 1 ; i <=	anios ; i ++) {
				copia_capital = copia_capital + copia_capital * (interes / 100);
			}
			
			return copia_capital;
		}
		
		// M�todo para calcular el n�mero de a�os necesarios para obtener una cantidad espec�fica:
		
		int AniosModificarCapital (int cantidad_deseada) {
			double copia_capital = capital;
			int numero_anios = 0;
			
			while (copia_capital <= capital * cantidad_deseada) {
				copia_capital = copia_capital + copia_capital * (interes / 100);
				numero_anios ++;
			}
			
			return numero_anios;
			
		}
		
		// M�todo para modificar el capital de la cuenta:
		
		void IngresaCapital (double cantidad) {
			if (CantidadCorrecta (cantidad))
				capital = capital + cantidad;
			}
			
		// Metodo para modificar el inter�s de la cuenta:
			
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
		cout << "Introduzca el inter�s a aplicar: ";
		cin >> interes;
		
		DepositoSimulacion un_deposito (capital, interes);
		
		// C�mputos y salida de datos:
		
		cout << "Introduzca el numero de a�os: ";
		cin >> anios;
		
		cout << "Su capital al cabo de " << anios << " a�os ser� de: " << un_deposito.CapitalAnios(anios) << "\n";
			
		cout << "Necesitar� " << un_deposito.AniosModificarCapital(2) << " a�os para doblar su capital.\n\n";
		
		system ("pause");
		
	}
