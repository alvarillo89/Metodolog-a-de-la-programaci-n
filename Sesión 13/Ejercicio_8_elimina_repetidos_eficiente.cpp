/////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Apartado c)
El anterior algoritmo nos obliga a desplazar muchas componentes cada vez que 
encontremos una repetida. Proponga una alternativa (sin usar vectores locales) 
para que el número de desplazamientos sea el menor posible e impleméntela.
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

		// Método para eliminar las letras repetidas eficientemente (apartado c):
		
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
				Establecer una posición de lectura.
				Recorrer las letras anteriores a posición de lectura.
				Si la letra de la posición de lectura coincide con alguna de las anteriores,
				está repetida.
				
				Añadir la letra que no esté repetida en la correspondiente posición de escritura.
				Actualizar el total_utilizados.
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
	
	una_secuencia.EliminaRepetidasEficiente();
	
	// Salida de datos:
	
	cout << "Tras eliminar las letras repetidas la secuencia queda como:\n";
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
