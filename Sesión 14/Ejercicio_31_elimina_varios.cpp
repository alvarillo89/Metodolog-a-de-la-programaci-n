//////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
De?na la clase SecuenciaEnteros análoga a SecuenciaCaracteres pero para que trabaje sobre 
enteros. Defina en el main un vector clásico de corchetes de tipo de dato char. Lea desde 
el main varios caracteres y asígnelos al vector de char. Lea también varios enteros y 
asígnelos a un objeto de la clase SecuenciaEnteros. Implemente ahora directamente en el 
main un algoritmo para que elimine e?cientemente todas las posiciones indicadas en la 
secuencia de enteros.
*/
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaEnteros {
	private:
		static const int MAX_ENTEROS = 100;
		int secuencia_enteros[MAX_ENTEROS];
		int total_utilizados = 0;
		
	public:
		// Método para añadir al vector:
		
		void Aniade (int entero) {
			if (total_utilizados <= MAX_ENTEROS) {
				secuencia_enteros[total_utilizados] = entero;
				total_utilizados ++;
			}
		}
		
		// Método para intercambiar dos componentes;
		
		void Intercambia (int pos_1, int pos_2) {
			int temporal;
			
			temporal = secuencia_enteros[pos_1];
			secuencia_enteros[pos_1] = secuencia_enteros[pos_2];
			secuencia_enteros[pos_2] = temporal;
		}
	
		// Método para hallar el mínimo entre dos posiciones:
		
		int MinimoEntre (int izqd, int dcha) {
			int i, minimo;
			
			minimo = izqd;
			for(i = izqd + 1 ; i <= dcha ; i ++) {
				if (secuencia_enteros[minimo] > secuencia_enteros[i])
					minimo = i;
			}
			return minimo;
		}
		
		// Método para ordenar el vector ascendentemente:
		
		void Ordena () {
			int pos_min, izda;
			
			for (izda = 0 ; izda < total_utilizados ; izda++) { 
				pos_min = MinimoEntre (izda, total_utilizados-1); 
				Intercambia (izda, pos_min); 
			}
		}
							
		// Método para obtener el total utilizados:
		
		int GetTotalUtilizados () {
			return total_utilizados;
		}
		
		// Método para obtener un elemento del vector:
		
		int GetElemento (int posicion) {
			return secuencia_enteros[posicion];
		}
};

int main () {
	SecuenciaEnteros secuencia_enteros;
	const int MAX_CARACTERES = 100;
	char secuencia_caracteres[MAX_CARACTERES];
	const char TERMINADOR = '#';
	const int TERMINADOR_2 = -1;
	int entero, total_utilizados = 0;
	char caracter;
	
	// Entrada de datos:
	
	cout << "Introduzca una palabra: ";
	caracter = cin.get();
	
	while (caracter != TERMINADOR && total_utilizados < MAX_CARACTERES) {
		secuencia_caracteres[total_utilizados] = caracter;
		total_utilizados ++;
		caracter = cin.get();
	} 
	
	cout << "Introduzca un número entero: ";
	cin >> entero;
	
	while (entero != TERMINADOR_2) {
		secuencia_enteros.Aniade(entero);
		cin >> entero;
	}
	
	// Cómputos:
	
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
	
	// Salida de datos:
	
	cout << "Tras eliminar los elementos la cadena queda como:\n";
	
	for (i = 0 ; i < total_utilizados ; i ++) {
		cout << secuencia_caracteres[i];
	}
	
	cout << "\n\n";
	
	system("pause");
	
}	
