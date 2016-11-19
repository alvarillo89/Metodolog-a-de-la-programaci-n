////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Construya un programa que vaya leyendo caracteres hasta que se encuentre un punto '.' 
y cuente el número de veces que aparece cada una de las letras mayúsculas. 
Imprimir el resultado.
*/
////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main () {
	const int NUMERO_MAYUSCULAS = 27;
	int contador_mayusculas[NUMERO_MAYUSCULAS];
	int posicion;
	char caracter, letra;
	const char TERMINADOR = '.';
	int i;
	
	// Inicialización del vector a 0:
	
	for (i = 0 ; i < NUMERO_MAYUSCULAS ; i++) {
		contador_mayusculas[i] = 0;
	}
	
	// Computos:
	
	cout << "Introduzca una cadena de caracteres con letras mayúculas:\n";
	cin >> caracter;
	
	while (caracter != TERMINADOR) {
		
		if ('A' <= caracter && caracter <= 'Z') {
			posicion = 0;		
			for (i = 'A' ; i <= 'Z' && i != caracter ; i ++) {
				posicion ++;
			}
			contador_mayusculas[posicion] += 1;
		}
		
		cin >> caracter;
	}
	
	// Salida de datos:
	
	for (i = 0 ; i < NUMERO_MAYUSCULAS ; i++) {
	
		if (contador_mayusculas[i] != 0) {
			letra = 'A' + i; 
			cout << letra << ": " << contador_mayusculas[i] << "\n";
		} 
		else 
			letra = 'A' + i;
	
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
