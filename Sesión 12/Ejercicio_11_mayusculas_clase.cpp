/////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Sobre el ejercicio 10, construya una clase espec�fica ContadorMayusculas que implemente 
los m�todos necesarios para llevar el contador de las may�sculas. Lo que se pretende es 
que la clase proporcione los m�todos siguientes:
void IncrementaConteo (char mayuscula) int CuantasHay (char mayuscula)
El primer m�todo aumentar� en uno el contador de la correspondiente may�scula y el segundo
indicar� cu�ntas hay. Modifique el programa principal para que cree un objeto de esta clase 
y llame a sus m�todos para realizar los conteos de las may�sculas. Finalmente, hay que 
imprimir en pantalla cu�ntas veces aparece cada may�scula.
*/
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ContadorMayusculas {
	private:
		static const int NUM_LETRAS = 27;
		int contador_mayusculas[NUM_LETRAS];
		
	public:
		
		// M�todo para inicializar el valor de las may�sculas;
		
		void Inicializa(int valor){
			for (int i ; i < NUM_LETRAS ; i ++){
				contador_mayusculas[i] = valor;
			}
		}
		
		// M�todo que calcula la posici�n de una letra:
		
		int PosicionLetra(char letra) {
			int posicion = 0;
			
			for (int i = 'A' ; i <= 'Z' && i != letra ; i ++) {
				posicion ++;
			}
			return posicion;
		}
		
		// M�todo que incrementa el contador de una may�cula:
		
		void IncrementaConteo (char caracter) {
			
			if (isupper(caracter)) 
				contador_mayusculas[PosicionLetra(caracter)] += 1;
		
		}
		
		// M�todo que te dice cuantas may�sculas hay:
		
		int CuantasHay (char caracter){
			return contador_mayusculas[PosicionLetra(caracter)];
		}
		
};
	
int main () {
	ContadorMayusculas un_contador;
	char caracter;
	const char TERMINADOR = '.';
	
	// Inicializaci�n del vector a 0;
	
	un_contador.Inicializa(0);
		
	// Entrada de datos:	
	
	cout << "Introduzca una cadena de caracteres:\n";
	caracter = cin.get();
	
	while (caracter != TERMINADOR) {
		un_contador.IncrementaConteo(caracter);
		caracter = cin.get();
	}
	
	// Salida de datos:
	
	cout << "El numero de may�sculas es:\n";
	
	for (char i = 'A' ; i <= 'Z' ; i++){
		if(un_contador.CuantasHay(i) != 0)
			cout << i << " " << un_contador.CuantasHay(i) << "\n";
	}
	
	cout << "\n\n";
	
	system("pause");
	
}
