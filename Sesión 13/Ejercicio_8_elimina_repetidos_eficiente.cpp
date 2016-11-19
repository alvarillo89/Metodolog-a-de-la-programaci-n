/////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Apartado c)
El anterior algoritmo nos obliga a desplazar muchas componentes cada vez que 
encontremos una repetida. Proponga una alternativa (sin usar vectores locales) 
para que el n�mero de desplazamientos sea el menor posible e implem�ntela.
*/
////////////////////////////////////////////////////////////////////////////////

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

		// M�todo para eliminar las letras repetidas eficientemente (apartado c):
		
		void EliminaRepetidasEficiente () {
			int pos_lectura, pos_escritura = 0;
			int i, nuevo_total_utilizados = 0;
			bool letra_repetida;
			
			for (pos_lectura = 0 ; pos_lectura < total_utilizados ; pos_lectura ++) {
				letra_repetida = false;
				for (i = 0 ; i < pos_lectura && !letra_repetida ; i ++) {
					if (cadena_caracteres[pos_lectura] == cadena_caracteres[i]) 
						letra_repetida = true;
				}
				if(!letra_repetida) {
					cadena_caracteres[pos_escritura] = cadena_caracteres[pos_lectura];
					pos_escritura ++;
					nuevo_total_utilizados ++;
				}
			}
			total_utilizados = nuevo_total_utilizados;
		
		/* Algoritmo:
				Establecer una posici�n de lectura.
				Recorrer las letras anteriores a posici�n de lectura.
				Si la letra de la posici�n de lectura coincide con alguna de las anteriores,
				est� repetida.
				
				A�adir la letra que no est� repetida en la correspondiente posici�n de escritura.
				Actualizar el total_utilizados.
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
	
	una_secuencia.EliminaRepetidasEficiente();
	
	// Salida de datos:
	
	cout << "Tras eliminar las letras repetidas la secuencia queda como:\n";
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
