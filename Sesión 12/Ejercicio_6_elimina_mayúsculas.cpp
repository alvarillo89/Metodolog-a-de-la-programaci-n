//////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Sobre la clase SecuenciaCaracteres, a�ada el m�todo EliminaMayusculas
para eliminar todas las may�sculas. Por ejemplo, despu�s de aplicar 
dicho m�todo al vector {'S','o','Y',' ','y','O'}, �ste debe quedarse con 
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
		
		
	// M�todo que compueba si la posici�n es correcta:
	
	bool CompruebaComponente (int posicion) {
		return 0 <= posicion && posicion < total_utilizados;
	}	
		
	public:

		// M�todo para eliminar un car�cter: 
		
		void Elimina (int posicion) {
			if (CompruebaComponente(posicion)) {
				for(int i = posicion ; i < total_utilizados ; i++) {
					cadena_caracteres[i] = cadena_caracteres[i + 1];
				}
			}
			total_utilizados --;
		
		/* Algoritmo:
			Comprueba si la posici�n es correcta.
				Desplaza todas las posiciones superiores a la dada una posici�n a la izquierda.
				Reduce el total_utilizados en uno.
		*/
		
		}
			
		// M�todo para eliminar las May�sculas.
		
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
			Si la letra recorrida es may�scula, se elimina y se retrocede el contador 
			en una unidad para volver a comprobarlo (de esta forma se asegura que si hay dos
			may�suclas juntas se borren ambas)
		*/
		}
		
		// M�todo que devuelve el vector:
		
		char GetCadenaCaracteres(int posicion) {
			return cadena_caracteres[posicion];
		}
	
		// M�todo para a�adir al vector
		
		void AniadeCaracteres(char caracter){
			
			if (total_utilizados < MAX_CARACTERES)
				cadena_caracteres[total_utilizados] = caracter;
			
			total_utilizados ++;
		}
		
		// M�todo para obtener el total de datos utilizados:
		
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
	
	// C�mputos:
	
	una_secuencia.EliminaMayusculas();
	
	// Salida de datos:
	
	cout << "Tras eliminar las may�sculas la secuencia queda como:\n";
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
		
