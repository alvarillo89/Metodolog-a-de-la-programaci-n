///////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Declare un vector de caracteres de tamaño 100. Lea las componentes considerando como terminador 
el carácter # (éste no forma parte de la secuencia) y que no se introduzcan más de 100 caracteres. 
Las componentes leídas ocuparán las primeras posiciones contiguas del vector. El resto de las 
posiciones se quedarán con el valor indeterminado (basura) que el compilador le asignase al 
principio. Para conocer cuántas componentes se están utilizando, utilice una variable total_utilizados 
(que, obviamente, deberá ser menor de 100 en todo momento) Implemente algoritmos para realizar las 
siguientes tareas:
a) Comprobar si el vector es un palíndromo, es decir, que se lee igual de izquierda a derecha que 
de derecha a izquierda.
b) Invertir el vector. 
c) Contar el número de mayúsculas que contiene.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main () {
	const char TERMINADOR = '#';
	const int MAX_CARACTERES = 100;
	char cadena_caracteres[MAX_CARACTERES];
	char cadena_invertida[MAX_CARACTERES];
	int total_utilizados = 0, posicion_inversa, numero_mayusculas = 0;
	char caracter_leido;
	bool es_palindromo = true;
	int i, j = 0;
	
	// Entrada de datos: 
	
	caracter_leido = cin.get();
	
	while (caracter_leido != TERMINADOR && total_utilizados < MAX_CARACTERES) {
		cadena_caracteres[total_utilizados] = caracter_leido;
		total_utilizados ++;
		caracter_leido = cin.get();
	}
	
	// Invertir el vector:
	
	posicion_inversa = total_utilizados - 1;
	
	for (i = 0 ; i < total_utilizados ; i ++) {
		cadena_invertida[posicion_inversa] = cadena_caracteres[i];
		posicion_inversa --;
	
	/*
	Algoritmo:
		La ultima posición del vector invertido, es el total utilizado menos 1.
		A la última posición de invertido, se le asigna la primera del normal.
		Se aumenta la posición del normal, y disminuye la del invertido.
	*/
	
	}
	
	// Comprobar si el vector es palíndromo:
	
	while (es_palindromo == true && j < total_utilizados) {
		if (cadena_caracteres[j] != cadena_invertida[j])
			es_palindromo = false;
		j ++;
	
	/*
		Algoritmo:
			Si la cadena invertida y la normal son iguales, el vector es palíndromo.
			es_palindromo es falso cuando alguna componente no coincide.
	*/		
 
	}
	
	// Conteo de mayúsculas:
	
	for (i = 0 ; i < total_utilizados; i ++) {
		if ('A' <= cadena_caracteres[i] && cadena_caracteres[i] <= 'Z')
			numero_mayusculas ++;
	}
	
	// Salida de datos:
	
	if (es_palindromo)
		cout << "La cadena de carácteres introducida es palíndroma.";
	else
		cout << "La cadena de carácteres introducida NO es palíndroma.";
		
	cout << "\nLa cadena de carácteres invertida es:\n";
	
	for (i = 0 ; i < total_utilizados ; i ++) {
		cout << cadena_invertida[i];
	}
	
	cout << "\nEl número de mayúsculas introducidas es: " << numero_mayusculas << "\n\n";
	
	system ("pause");
	
}
		
