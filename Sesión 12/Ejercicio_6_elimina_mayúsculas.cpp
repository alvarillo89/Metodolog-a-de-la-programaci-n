//////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Sobre la clase SecuenciaCaracteres, añada el método EliminaMayusculas
para eliminar todas las mayúsculas. Por ejemplo, después de aplicar 
dicho método al vector {'S','o','Y',' ','y','O'}, éste debe quedarse con 
{'o',' ','y'}.
*/
//////////////////////////////////////////////////////////////////////////

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
			
		// Método para eliminar las Mayúsculas.
		
		void EliminaMayusculas() { 
			int i;
			
			while (i < total_utilizados) { 
				if (isupper(cadena_caracteres[i]))
					Elimina(i); 
				else
					i ++;
			}
		
		/* Algoritmo.
			Recorrer el vector.
			Si la letra recorrida es mayúscula, se elimina y se retrocede el contador 
			en una unidad para volver a comprobarlo (de esta forma se asegura que si hay dos
			mayúsuclas juntas se borren ambas)
		*/
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
	
	una_secuencia.EliminaMayusculas();
	
	// Salida de datos:
	
	cout << "Tras eliminar las mayúsculas la secuencia queda como:\n";
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
		
