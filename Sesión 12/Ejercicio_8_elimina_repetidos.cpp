/////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Sobre la clase SecuenciaCaracteres, añada un método EliminaRepetidos 
que quite los elementos repetidos, de forma que cada componente sólo 
aparezca una única vez. Se mantendrá la primera aparición, de izquierda
a derecha.
Implemente los siguientes algoritmos para resolver ester problema: 
a) Usando un vector local sin_repetidos en el que almacenamos una única 
aparición de cada componente.
b) El problema del algoritmo anterior es que usa un vector local, lo que 
podría suponer una carga importante de memoria si trabajásemos con vectores 
grandes. Por lo tanto, vamos a resolver el problema sin usar vectores locales. 
Si una componente está repetida, se borrará de la secuencia. Para borrar una 
componente, llamamos al método Elimina.
*/
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaCaracteres { 
	private:
		static const int MAX_CARACTERES = 100;
		char cadena_caracteres[MAX_CARACTERES];
		int total_utilizados = 0;
		
		
	// Método que compueba si la posición es correcta:
	
	bool CompruebaComponente (int posicion) {
		return 0 <= posicion && posicion < total_utilizados;
	}	
		
	public:

		// Método para eliminar un carácter: 
		
		void Elimina (int posicion) {
			if (CompruebaComponente(posicion)) {
				for(int i = posicion ; i < total_utilizados ; i++) {
					cadena_caracteres[i] = cadena_caracteres[i + 1];
				}
			}
			total_utilizados --;
		
		/* Algoritmo:
			Comprueba si la posición es correcta.
				Desplaza todas las posiciones superiores a la dada una posición a la izquierda.
				Reduce el total_utilizados en uno.
		*/
		
		}

		// Método para eliminar las letras repetidas (apartado a):
		
		void EliminaRepetidasA () {
			int total_utilizados_2 = 0;
			char sin_repetir[MAX_CARACTERES];
			bool letra_repetida;
			
			for(int i = 0; i < total_utilizados ; i ++){
				letra_repetida = false;
				
				for(int j = 0 ; j < total_utilizados && letra_repetida == false ; j++){
					if (cadena_caracteres[i] == sin_repetir[j])
						letra_repetida = true;
				}
				
				if (!letra_repetida) {
					sin_repetir[total_utilizados_2] = cadena_caracteres[i];
					total_utilizados_2 ++;
				}
			}
			for(int i = 0; i < total_utilizados ; i ++) {
				cadena_caracteres[i] = sin_repetir[i];
			}
			total_utilizados = total_utilizados_2;
		}
		
		// Método para eliminar las letras repetidas (apartado b):
		
		void EliminaRepetidasB () {
			for(int i = 0; i < total_utilizados ; i ++){
				for( int j = 0 ; j < total_utilizados ; j++){
					if ((j != i) && (cadena_caracteres[i] == cadena_caracteres[j])) {
						Elimina(j);
						j--;
					}		
				}
			}
		}	
					
							
		// Método que devuelve el vector:
		
		char GetCadenaCaracteres(int posicion) {
			return cadena_caracteres[posicion];
		}
	
		// Método para añadir al vector
		
		void AniadeCaracteres(char caracter){
			
			if (total_utilizados < MAX_CARACTERES)
				cadena_caracteres[total_utilizados] = caracter;
			
			total_utilizados ++;
		}
		
		// Método para obtener el total de datos utilizados:
		
		int GetTotalUtilizados() {
			return total_utilizados;
		}	
	
};

int main () {
	SecuenciaCaracteres una_secuencia;
	char caracter_leido;
	const int TERMINADOR = '#';
		
	// Entrada de datos:
		
	caracter_leido = cin.get();
	
	while (caracter_leido != TERMINADOR) {
		una_secuencia.AniadeCaracteres(caracter_leido);
		caracter_leido = cin.get();
	}
	
	// Cómputos:
	
	una_secuencia.EliminaRepetidasB();
	
	// Salida de datos:
	
	cout << "Tras eliminar las letras repetidas la secuencia queda como:\n";
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
