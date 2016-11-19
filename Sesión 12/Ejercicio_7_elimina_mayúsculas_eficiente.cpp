////////////////////////////////////////////////////////////////////////////////////////
/*
Para resolver e?cientemente este problema se propone utilizar dos variables, 
posicion_lectura y posicion_escritura que nos vayan indicando, en cada momento, 
la componente que se est� leyendo y el sitio d�nde tiene que escribirse. Por ejemplo, 
supongamos que en un determinado momento la variable posicion_lectura vale 6 y 
posicion_escritura 3. Si la componente en la posici�n 6 es una may�scula, simplemente 
avanzaremos posicion_lectura. Por el contrario, si fuese una min�scula, la colocaremos 
en la posici�n 3 y avanzaremos una posici�n ambas variables. 
*/
////////////////////////////////////////////////////////////////////////////////////////

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
			int posicion_lectura;
			int posicion_escritura = 0;
			int nuevo_total_utilizados = 0;
			
			for (posicion_lectura = 0 ; posicion_lectura < total_utilizados ; posicion_lectura ++) {
				if(!isupper(cadena_caracteres[posicion_lectura])) {
					cadena_caracteres[posicion_escritura] = cadena_caracteres[posicion_lectura];
					posicion_escritura++;
					nuevo_total_utilizados ++;			
				}
			
			}
			total_utilizados = nuevo_total_utilizados;
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
		
