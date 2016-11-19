/////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Sobre el ejercicio 10, construya una clase específica ContadorMayusculas que implemente 
los métodos necesarios para llevar el contador de las mayúsculas. Lo que se pretende es 
que la clase proporcione los métodos siguientes:
void IncrementaConteo (char mayuscula) int CuantasHay (char mayuscula)
El primer método aumentará en uno el contador de la correspondiente mayúscula y el segundo
indicará cuántas hay. Modifique el programa principal para que cree un objeto de esta clase 
y llame a sus métodos para realizar los conteos de las mayúsculas. Finalmente, hay que 
imprimir en pantalla cuántas veces aparece cada mayúscula.
*/
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ContadorMayusculas {
	private:
		static const int NUM_LETRAS = 27;
		int contador_mayusculas[NUM_LETRAS];
		
	public:
		
		// Método para inicializar el valor de las mayúsculas;
		
		void Inicializa(int valor){
			for (int i ; i < NUM_LETRAS ; i ++){
				contador_mayusculas[i] = valor;
			}
		}
		
		// Método que calcula la posición de una letra:
		
		int PosicionLetra(char letra) {
			int posicion = 0;
			
			for (int i = 'A' ; i <= 'Z' && i != letra ; i ++) {
				posicion ++;
			}
			return posicion;
		}
		
		// Método que incrementa el contador de una mayúcula:
		
		void IncrementaConteo (char caracter) {
			
			if (isupper(caracter)) 
				contador_mayusculas[PosicionLetra(caracter)] += 1;
		
		}
		
		// Método que te dice cuantas mayúsculas hay:
		
		int CuantasHay (char caracter){
			return contador_mayusculas[PosicionLetra(caracter)];
		}
		
};
	
int main () {
	ContadorMayusculas un_contador;
	char caracter;
	const char TERMINADOR = '.';
	
	// Inicialización del vector a 0;
	
	un_contador.Inicializa(0);
		
	// Entrada de datos:	
	
	cout << "Introduzca una cadena de caracteres:\n";
	caracter = cin.get();
	
	while (caracter != TERMINADOR) {
		un_contador.IncrementaConteo(caracter);
		caracter = cin.get();
	}
	
	// Salida de datos:
	
	cout << "El numero de mayúsculas es:\n";
	
	for (char i = 'A' ; i <= 'Z' ; i++){
		if(un_contador.CuantasHay(i) != 0)
			cout << i << " " << un_contador.CuantasHay(i) << "\n";
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
