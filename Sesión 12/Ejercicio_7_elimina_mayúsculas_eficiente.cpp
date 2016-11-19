////////////////////////////////////////////////////////////////////////////////////////
/*
Para resolver e?cientemente este problema se propone utilizar dos variables, 
posicion_lectura y posicion_escritura que nos vayan indicando, en cada momento, 
la componente que se está leyendo y el sitio dónde tiene que escribirse. Por ejemplo, 
supongamos que en un determinado momento la variable posicion_lectura vale 6 y 
posicion_escritura 3. Si la componente en la posición 6 es una mayúscula, simplemente 
avanzaremos posicion_lectura. Por el contrario, si fuese una minúscula, la colocaremos 
en la posición 3 y avanzaremos una posición ambas variables. 
*/
////////////////////////////////////////////////////////////////////////////////////////

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
		
