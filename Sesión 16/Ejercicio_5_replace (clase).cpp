/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Recupere la solución del ejercicio 32 de la Relación de Problemas IV (Replace). Defina sobre la clase 
SecuenciaCaracteres el método Replace para que haga la tarea pedida. Tendrá que pasarle al método la posición 
inicial, el número de caracteres a eliminar y el objeto de la clase SecuenciaCaracteres conteniendo la 
secuencia de caracteres de reemplazo.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
			if (total_utilizados < MAX_CARACTERES) {
				secuencia_caracteres[total_utilizados] = caracter;
				total_utilizados ++;
			}
		}
		
		// Método para obtener un elemento:
		
		char GetElemento (int posicion) {
			return secuencia_caracteres[posicion];
		}
		
		// Método para obtener el total utilizados:
		
		int GetTotalUtilizados ()  {
			return total_utilizados;
		}
		
		// Método para reemplazar una cadena:
		
		void Replace (int pos, int n, SecuenciaCaracteres reemplazo) {
			int i, nuevo_total_utilizados = total_utilizados - n + reemplazo.total_utilizados;
			
			bool posible_cambio = nuevo_total_utilizados <= MAX_CARACTERES;
			
			if (posible_cambio) {
				for (i = 1 ; (total_utilizados - i) >= (pos + n) ; i ++) {	
					secuencia_caracteres[nuevo_total_utilizados - i] = secuencia_caracteres[total_utilizados - i];
				}
				total_utilizados = nuevo_total_utilizados;
				
				for (i = 0  ; i < reemplazo.total_utilizados ; i ++) {
					secuencia_caracteres[pos + i] = reemplazo.secuencia_caracteres[i];
				}
			}
		}
};

int main () {
	SecuenciaCaracteres cadena_1, cadena_2;
	const char TERMINADOR = '#';
	int pos, n, i;
	char caracter;
	
	// Entrada de datos:
	
	cout << "Introduzca la primera cadena de caracteres: ";
	caracter = cin.get();
	
	while (caracter != TERMINADOR) {
		cadena_1.Aniade(caracter);
		caracter = cin.get();
	}
	
	cout << "Introduzca la segunda cadena de caracteres: ";
	caracter = cin.get();
	
	while (caracter != TERMINADOR) {
		if (caracter != '\n') {
			cadena_2.Aniade(caracter);
		}
		caracter = cin.get();
	}
	
	cout << "Introduzca la posición y el número de caracteres que desea reemplazar: ";
	cin >> pos;
	cin >> n;
	
	// Cómputos:
	
	cadena_1.Replace(pos, n, cadena_2);
	
	// Salida de datos:
	
	for (i = 0 ; i < cadena_1.GetTotalUtilizados() ; i ++) {
		cout << cadena_1.GetElemento(i);
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
