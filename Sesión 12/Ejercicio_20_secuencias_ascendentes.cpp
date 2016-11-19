////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
De?na la clase SecuenciaEnteros an�loga a SecuenciaCaracteres. Defina lo que sea necesario 
para calcular el n�mero de secuencias ascendentes del vector. Por ejemplo, el vector 
{2,4,1,1,7,2,1} tiene 4 secuencias que son {2,4}, {1,1,7}, {2}, {1}.
*/
///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaEnteros {
	private:
		static const int MAX_NUMEROS = 100;
		int secuencia_enteros[MAX_NUMEROS];
		int total_utilizados = 0;
		
	public:
		// M�todo para a�adir elementos al vector:
		
		void Aniade(int numero) {
			if (total_utilizados < MAX_NUMEROS) 
				secuencia_enteros[total_utilizados] = numero;
				total_utilizados ++;
			
		}
		
		// M�todo que te indica el n�mero de cadenas ascendentes:
		
		int CadenasAscendentes() {
			int numero_cadenas = 1;
			int tope = total_utilizados - 1;
			
			for (int i = 0 ; i < tope ; i++){
				if (secuencia_enteros[i] > secuencia_enteros[i+1])
					numero_cadenas ++;
			}
			return numero_cadenas;
		}
		
		// M�todo que te devuelve el vector:
		
		int GetSecuenciaEnteros(int posicion) {
			return secuencia_enteros[posicion];
		}
		
		// M�todo que devuelve el total utilizados:
		
		int GetTotalUtilizados() {
			return total_utilizados;
		}
		
	};
	
	int main () {
		SecuenciaEnteros una_secuencia;
		char entero;
		const char TERMINADOR = '#';
		
		// Entrada de datos:
		
		cout << "Introduzca su secuencia de enteros: ";
		cin >> entero;
	
		while (entero != TERMINADOR) {
			una_secuencia.Aniade(entero);
			cin >> entero;
		}
		
		// Salida de datos:
		
		cout << "El n�mero de cadenas ascendentes es: " << una_secuencia.CadenasAscendentes() << "\n\n";
		
		system ("pause");
		
	}
