///////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Declare un vector de caracteres de tama�o 100. Lea las componentes considerando como terminador 
el car�cter # (�ste no forma parte de la secuencia) y que no se introduzcan m�s de 100 caracteres. 
Las componentes le�das ocupar�n las primeras posiciones contiguas del vector. El resto de las 
posiciones se quedar�n con el valor indeterminado (basura) que el compilador le asignase al 
principio. Para conocer cu�ntas componentes se est�n utilizando, utilice una variable total_utilizados 
(que, obviamente, deber� ser menor de 100 en todo momento) Implemente algoritmos para realizar las 
siguientes tareas:
a) Comprobar si el vector es un pal�ndromo, es decir, que se lee igual de izquierda a derecha que 
de derecha a izquierda.
b) Invertir el vector. 
c) Contar el n�mero de may�sculas que contiene.
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
		La ultima posici�n del vector invertido, es el total utilizado menos 1.
		A la �ltima posici�n de invertido, se le asigna la primera del normal.
		Se aumenta la posici�n del normal, y disminuye la del invertido.
	*/
	
	}
	
	// Comprobar si el vector es pal�ndromo:
	
	while (es_palindromo == true && j < total_utilizados) {
		if (cadena_caracteres[j] != cadena_invertida[j])
			es_palindromo = false;
		j ++;
	
	/*
		Algoritmo:
			Si la cadena invertida y la normal son iguales, el vector es pal�ndromo.
			es_palindromo es falso cuando alguna componente no coincide.
	*/		
 
	}
	
	// Conteo de may�sculas:
	
	for (i = 0 ; i < total_utilizados; i ++) {
		if ('A' <= cadena_caracteres[i] && cadena_caracteres[i] <= 'Z')
			numero_mayusculas ++;
	}
	
	// Salida de datos:
	
	if (es_palindromo)
		cout << "La cadena de car�cteres introducida es pal�ndroma.";
	else
		cout << "La cadena de car�cteres introducida NO es pal�ndroma.";
		
	cout << "\nLa cadena de car�cteres invertida es:\n";
	
	for (i = 0 ; i < total_utilizados ; i ++) {
		cout << cadena_invertida[i];
	}
	
	cout << "\nEl n�mero de may�sculas introducidas es: " << numero_mayusculas << "\n\n";
	
	system ("pause");
	
}
		
