///////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Recupere la soluci�n del ejercicio 31 de la Relaci�n de Problemas IV (elimina varios caracteres 
de una secuencia). Defina el m�todo EliminaVarios sobre la clase SecuenciaCaracteres para que 
haga la tarea pedida. Tendr� que pasarle al m�todo un objeto de la clase SecuenciaEnteros con
los �ndices de las posiciones a eliminar.
*/
//////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaEnteros {
	private:
		static const int MAX_ENTEROS = 100;
		int secuencia_enteros[MAX_ENTEROS];
		int total_utilizados = 0;
		
	public:
		// M�todo para a�adir al vector:
		
		void Aniade (int entero) {
			if (total_utilizados <= MAX_ENTEROS) {
				secuencia_enteros[total_utilizados] = entero;
				total_utilizados ++;
			}
		}
		
		// M�todo para intercambiar dos componentes;
		
		void Intercambia (int pos_1, int pos_2) {
			int temporal;
			
			temporal = secuencia_enteros[pos_1];
			secuencia_enteros[pos_1] = secuencia_enteros[pos_2];
			secuencia_enteros[pos_2] = temporal;
		}
	
		// M�todo para hallar el m�nimo entre dos posiciones:
		
		int MinimoEntre (int izqd, int dcha) {
			int i, minimo;
			
			minimo = izqd;
			for(i = izqd + 1 ; i <= dcha ; i ++) {
				if (secuencia_enteros[minimo] > secuencia_enteros[i])
					minimo = i;
			}
			return minimo;
		}
		
		// M�todo para ordenar el vector ascendentemente:
		
		void Ordena () {
			int pos_min, izda;
			
			for (izda = 0 ; izda < total_utilizados ; izda++) { 
				pos_min = MinimoEntre (izda, total_utilizados-1); 
				Intercambia (izda, pos_min); 
			}
		}
							
		// M�todo para obtener el total utilizados:
		
		int GetTotalUtilizados () {
			return total_utilizados;
		}
		
		// M�todo para obtener un elemento del vector:
		
		int GetElemento (int posicion) {
			return secuencia_enteros[posicion];
		}
};

class SecuenciaCaracteres {
	private:
		static const int MAX_CARACTERES = 100;
		char secuencia_caracteres[MAX_CARACTERES];
		int total_utilizados = 0;
		
	public:
		// M�todo para a�adir al vector:
		
		void Aniade (char caracter) {
			if (total_utilizados <= MAX_CARACTERES) {
				secuencia_caracteres[total_utilizados] = caracter;
				total_utilizados ++;
			}
		}
		
		// M�todo para obtener el total utilizados:
		
		int GetTotalUtilizados () {
			return total_utilizados;
		}
		
		// M�todo para obtener un elemento del vector:
		
		char GetElemento (int posicion) {
			return secuencia_caracteres[posicion];
		}
		
		// M�todo para eliminar un conjunto de caracteres:
		
		void EliminaVarios (SecuenciaEnteros secuencia_enteros) {
			
			secuencia_enteros.Ordena();
			bool encontrado = false;
			int pos_lectura, pos_escritura = 0, i;
		
			for (pos_lectura = 0 ; pos_lectura < total_utilizados ; pos_lectura ++) {
				encontrado = false;
				for (i = 0 ; i < secuencia_enteros.GetTotalUtilizados() && !encontrado ; i ++) {
					if (secuencia_enteros.GetElemento(i) == pos_lectura)
						encontrado = true;
				}
				if (!encontrado) {
					secuencia_caracteres[pos_escritura] = secuencia_caracteres[pos_lectura];
					pos_escritura ++;
				}
			}
			total_utilizados = pos_escritura;
		}
};
		
int main () {
	SecuenciaEnteros secuencia_enteros;
	SecuenciaCaracteres secuencia_caracteres;
	const char TERMINADOR = '#';
	const int TERMINADOR_2 = -1;
	int entero, i;
	char caracter;
	
	// Entrada de datos:
	
	cout << "Introduzca una palabra: ";
	caracter = cin.get();
	
	while (caracter != TERMINADOR) {
		secuencia_caracteres.Aniade(caracter);
		caracter = cin.get();
	} 
	
	cout << "Introduzca un n�mero entero: ";
	cin >> entero;
	
	while (entero != TERMINADOR_2) {
		secuencia_enteros.Aniade(entero);
		cin >> entero;
	}
	
	// C�mputos:
	
	secuencia_caracteres.EliminaVarios(secuencia_enteros);
	
	// Salida de datos:
	
	cout << "Tras eliminar los elementos la cadena queda como:\n";
	
	for (i = 0 ; i < secuencia_caracteres.GetTotalUtilizados() ; i ++) {
		cout << secuencia_caracteres.GetElemento(i);
	}
	
	cout << "\n\n";
	
	system("pause");
	
}	
