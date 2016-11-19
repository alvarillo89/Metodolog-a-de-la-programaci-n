//////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Diremos que dos palabras son similares si la primera letra de ambas palabras es igual, 
la última letra de ambas palabras también es igual y el resto de las letras son las 
mismas pero no están necesariamente en las mismas posiciones. De esta forma, las 
palabras ttalomntee y totalmente son similares. Declare en el main dos objetos de la 
clase SecuenciaCaracteres y asígneles algunos caracteres de prueba. Implemente en el 
main un algoritmo que compruebe si los dos objetos son similares según el criterio 
anterior. Si lo necesita, puede añadir los métodos que estime oportunos a la clase 
SecuenciaCaracteres.
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
};

int main () {
	SecuenciaCaracteres palabra_1, palabra_2, procesadas;
	char caracter;
	const char TERMINADOR = '#';
	bool similar = true, encontrada;
	int i, j, apariciones_1, apariciones_2;
	
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
	
	// Cómputos:
	
	int final_1 = palabra_1.GetTotalUtilizados() - 1;
	int final_2 = palabra_2.GetTotalUtilizados() - 1;
	
	if (palabra_1.GetElemento(0) == palabra_2.GetElemento(0) && 
		palabra_1.GetElemento(final_1) == palabra_2.GetElemento(final_2) && 
		palabra_1.GetTotalUtilizados() == palabra_2.GetTotalUtilizados()) {
			
			for(i = 0 ; i < palabra_1.GetTotalUtilizados() ; i ++) {
				encontrada = procesadas.PrimeraOcurrencia(palabra_1.GetElemento(i));
				if (!encontrada) 
					procesadas.Aniade(palabra_1.GetElemento(i));
			}
			
			for (j = 0 ; j < procesadas.GetTotalUtilizados() && similar ; j ++) {
				apariciones_1 = palabra_1.NumApariciones(procesadas.GetElemento(j));
				apariciones_2 = palabra_2.NumApariciones(procesadas.GetElemento(j));
				if (apariciones_1 != apariciones_2)
					similar = false;
			}
	}
	else
		similar = false;
		
	// Salida de datos:
	
	if (similar)
		cout << "Las dos palabras son similares.\n\n";
	else
		cout << "Las dos palabra NO son similares.\n\n";
		
	system ("pause");
	
}
