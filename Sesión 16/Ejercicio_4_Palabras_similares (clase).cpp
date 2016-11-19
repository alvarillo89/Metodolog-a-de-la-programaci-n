//////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Recupere la solución del ejercicio 30 de la Relación de Problemas IV (palabras similares). 
Sobre la clase SecuenciaCaracteres, definid un método que compruebe si la secuencia es 
similar a otra.
*/
//////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaCaracteres {
	private:
		static const int MAX_CARACTERES = 100;
		char secuencia_caracteres[MAX_CARACTERES];
		int total_utilizados = 0;
		
	public:
		// Método para añadir al vector:
		
		void Aniade (char caracter) {
			if (total_utilizados <= MAX_CARACTERES) {
				secuencia_caracteres[total_utilizados] = caracter;
				total_utilizados ++;
			}
		}
		
		// Método para buscar un caracter:
		
		bool PrimeraOcurrencia (char caracter) {
			bool encontrada = false;
			for(int i = 0 ; i < total_utilizados && !encontrada ; i ++) {
				if(secuencia_caracteres[i] == caracter)
					encontrada = true;
			}
			return encontrada;
		}
		
		// Método para obtener el número de apariciones de un caracter:
		
		int NumApariciones (char caracter) {
			int apariciones = 0;
			for (int i = 0 ; i < total_utilizados ; i ++) {
				if (secuencia_caracteres[i] == caracter)
					apariciones ++;
			}
			return apariciones;
		}
				
		// Método para obtener el total utilizados:
		
		int GetTotalUtilizados () {
			return total_utilizados;
		}
		
		// Método para obtener un elemento del vector:
		
		char GetElemento (int posicion) {
			return secuencia_caracteres[posicion];
		}
		
		// Método para comprobar si las palabra son similares.
		
		bool PalabrasSimilares (SecuenciaCaracteres otra_secuencia) {
			
			SecuenciaCaracteres procesadas;
			int final_1 = total_utilizados - 1;
			int final_2 = otra_secuencia.total_utilizados - 1;
			bool similar = true, encontrada;
			int i, j, apariciones_1, apariciones_2;
						
			if (secuencia_caracteres[0] == otra_secuencia.secuencia_caracteres[0] && 
				secuencia_caracteres[final_1] == otra_secuencia.secuencia_caracteres[final_2] && 
				total_utilizados == otra_secuencia.total_utilizados) {
					
					for(i = 0 ; i < total_utilizados ; i ++) {
						encontrada = procesadas.PrimeraOcurrencia(secuencia_caracteres[i]);
						if (!encontrada) 
							procesadas.Aniade(secuencia_caracteres[i]);
					}
					
					for (j = 0 ; j < procesadas.total_utilizados && similar ; j ++) {
						apariciones_1 = NumApariciones(procesadas.secuencia_caracteres[j]);
						apariciones_2 = otra_secuencia.NumApariciones(procesadas.secuencia_caracteres[j]);
						if (apariciones_1 != apariciones_2)
							similar = false;
					}
			}
			else
				similar = false;
			
			return similar;
		}
};

int main () {
	SecuenciaCaracteres palabra_1, palabra_2;
	char caracter;
	const char TERMINADOR = '#';
		
	// Entrada de la palabra 1:
	
	cout << "Introduzca la primera palabra: ";
	cin >> caracter;
	
	while (caracter != TERMINADOR) {
		palabra_1.Aniade(caracter);
		cin >> caracter;
	}
	
	// Entrada de la palabra 2:
	
	cout << "Introduzca la segunda palabra: ";
	cin >> caracter;
	
	while (caracter != TERMINADOR) {
		palabra_2.Aniade(caracter);
		cin >> caracter;
	}
			
	// Cómputos y salida de datos:
	
	if (palabra_1.PalabrasSimilares(palabra_2))
		cout << "Las dos palabras son similares.\n\n";
	else
		cout << "Las dos palabra NO son similares.\n\n";
		
	system ("pause");
	
}
