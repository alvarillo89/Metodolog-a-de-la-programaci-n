////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
A�ada el m�todo IntercambiaComponentes para intercambiar dos componentes de la secuencia. 
Por ejemplo, si la secuencia contiene {'h','o','l','a'}, despu�s de intercambiar las 
componentes 1 y 3,se quedar�a con {'h','a','l','o'}. �Qu� deber�a hacer este m�todo 
si los �ndices no son correctos? Modifique la implementaci�n del m�todo Invierte del 
ejercicio 4, para que lo haga llamando a IntercambiaComponentes. Imprima las componentes 
de la secuencia desde el main, antes y despu�s de llamar a dicho m�todo. Para ello, use 
el m�todo ToString() de la clase SecuenciaCaracteres.
*/
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaCaracteres {
	private:
		static const int MAX_CARACTERES = 100;
		char cadena_caracteres[MAX_CARACTERES];
		int total_utilizados = 0;
	
	// M�todo que comprueba si las posiciones introducidas son correctas o no:
	
	bool CompruebaComponente (int posicion) {
		return 0 <= posicion && posicion < total_utilizados;
	}
	
	public:
		
		// M�todo para intercambiar dos componentes:
		
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
		
		// M�todo para invertir el vector:
		
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
		
		// M�todo para contar el n�mero de may�sculas:
		
		int NumeroMayusculas() {
			int mayusculas = 0;
			
			for (int i = 0 ; i < total_utilizados; i ++) {
				if ('A' <= cadena_caracteres[i] && cadena_caracteres[i] <= 'Z')
				mayusculas ++;
			}
			
			return mayusculas;
		}
		
		// M�todo para comprobar si es pal�ndromo o no:
		
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
			Si la cadena invertida y la normal son iguales, el vector es pal�ndromo.
			es_palindromo es falso cuando alguna componente no coincide.
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
	
	// Salida de datos:
	
	if (una_secuencia.EsPalindromo())
		cout << "La cadena de car�cteres introducida es pal�ndroma.";
	else
		cout << "La cadena de car�cteres introducida NO es pal�ndroma.";
		
	cout << "\nLa cadena de car�cteres invertida es:\n";
	
	una_secuencia.Invierte();
	
	for (int i = 0 ; i < una_secuencia.GetTotalUtilizados() ; i ++) {
		cout << una_secuencia.GetCadenaCaracteres(i);
	}	
			
	cout << "\nEl n�mero de may�sculas introducidas es: " << una_secuencia.NumeroMayusculas() << "\n\n";
	
	system ("pause");
	
}				
