//////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
A�ada los m�todos EsPalindromo, Invierte y NumeroMayusculas a la clase SecuenciaCaracteres 
que implementen las tareas descritas en el ejercicio 1 de esta relaci�n de problemas. 
Incluya un programa principal de prueba similar al del ejercicio 1.
*/
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaCaracteres {
	private:
		static const int MAX_CARACTERES = 100;
		char cadena_caracteres[MAX_CARACTERES];
		int total_utilizados = 0;
		
	public:
		
		// M�todo para invertir el vector:
		
		void Invierte() {
			int posicion_inversa = total_utilizados - 1;
			char cadena_invertida[MAX_CARACTERES];
			int i;
			
			for (i = 0 ; i < total_utilizados ; i ++) {
				cadena_invertida[posicion_inversa] = cadena_caracteres[i];
				posicion_inversa --; 
			}
			
			for (i = 0 ; i < total_utilizados ; i ++) {
				cadena_caracteres[i] = cadena_invertida[i];
			}
		
		/* 
			Algoritmo:
				La posici�n final del vector es el total utilizados menos 1.
				Se almancena el vector invertido en un vector auxiliar.
					La posici�n final del invertido es la inicial del normal.
					Se incrementa el contador normal y se disminuye el inicial.
				Se le pasan los valores del vector invertido a la cadena normal.
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
