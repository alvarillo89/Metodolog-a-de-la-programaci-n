////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Añada el método IntercambiaComponentes para intercambiar dos componentes de la secuencia. 
Por ejemplo, si la secuencia contiene {'h','o','l','a'}, después de intercambiar las 
componentes 1 y 3,se quedaría con {'h','a','l','o'}. ¿Qué debería hacer este método 
si los índices no son correctos? Modifique la implementación del método Invierte del 
ejercicio 4, para que lo haga llamando a IntercambiaComponentes. Imprima las componentes 
de la secuencia desde el main, antes y después de llamar a dicho método. Para ello, use 
el método ToString() de la clase SecuenciaCaracteres.
*/
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaCaracteres {
	private:
		static const int MAX_CARACTERES = 100;
		char cadena_caracteres[MAX_CARACTERES];
		int total_utilizados = 0;
	
	// Método que comprueba si las posiciones introducidas son correctas o no:
	
	bool CompruebaComponente (int posicion) {
		return 0 <= posicion && posicion < total_utilizados;
	}
	
	public:
		
		// Método para intercambiar dos componentes:
		
		void IntercambiaComponentes(int posicion_1, int posicion_2) {
			char caracter_momentaneo;
			
			if (CompruebaComponente(posicion_1) && CompruebaComponente(posicion_2)) {
				caracter_momentaneo = cadena_caracteres[posicion_1]; 
				cadena_caracteres[posicion_1] = cadena_caracteres[posicion_2];		
				cadena_caracteres[posicion_2] = caracter_momentaneo;
			}
		
		/*
		Algoritmo:
			Comprueba si las posiciones introducidas son correctas.
				Almacena en una variable temporal el valor de 1.
				Intercambia los valores de 1 y 2.
				A 2 le asigna la variable temporal.
		*/	
		}
		
		// Método para invertir el vector:
		
		void Invierte() {
			int posicion_inversa = total_utilizados - 1;
			int i = 0;
			
			while (i < (total_utilizados / 2) || i == posicion_inversa) {
				IntercambiaComponentes(i, posicion_inversa);
				i ++;
				posicion_inversa --;	
			}
			
		/* 
		Algoritmo: 
			Intercambiar las componentes dos a dos.	
		*/
		
		}
		
		// Método para contar el número de mayúsculas:
		
		int NumeroMayusculas() {
			int mayusculas = 0;
			
			for (int i = 0 ; i < total_utilizados; i ++) {
				if ('A' <= cadena_caracteres[i] && cadena_caracteres[i] <= 'Z')
				mayusculas ++;
			}
			
			return mayusculas;
		}
		
		// Método para comprobar si es palíndromo o no:
		
		bool EsPalindromo() {
			int i = 0;
			int posicion_final = total_utilizados - 1;
			bool es_palindromo = true;
			
			while (es_palindromo == true && i < total_utilizados) {
				if (cadena_caracteres[i] != cadena_caracteres[posicion_final])
					es_palindromo = false;
				i ++;
				posicion_final--;
			}
			
			return es_palindromo;
		
		/*
		Algoritmo:
			Si la cadena invertida y la normal son iguales, el vector es palíndromo.
			es_palindromo es falso cuando alguna componente no coincide.
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
	
	// Salida de datos:
	
	if (una_secuencia.EsPalindromo())
		cout << "La cadena de carácteres introducida es palíndroma.";
	else
		cout << "La cadena de carácteres introducida NO es palíndroma.";
		
	cout << "\nLa cadena de carácteres invertida es:\n";
	
	una_secuencia.Invierte();
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}	
			
	cout << "\nEl número de mayúsculas introducidas es: " << una_secuencia.NumeroMayusculas() << "\n\n";
	
	system ("pause");
	
}				
