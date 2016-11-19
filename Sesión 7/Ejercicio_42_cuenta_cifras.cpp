/*  Programador: Álvaro Fernández García.
¿Cuántas veces aparece el dígito 9 en todos los números que hay entre el 1 y el 100? Por ejemplo, 
el 9 aparece una vez en los números 19 y 92 mientras que aparece dos veces en el 99. Pretendemos diseñar un 
algoritmo que responda a esta sencilla pregunta, pero de forma su?cientemente generalizada. Para ello, 
se pide construir un programa que lea una cifra (entre 1 y 9), dos enteros min y max y calcule el número 
de apariciones del dígito cifra en los números contenidos en el intervalo cerrado [min, max]. */

// Inclusión de recursos:

#include <iostream>

// Declaración de variables:

int cifra, minimo, maximo;
int numero;
int conteo_cifra = 0;
int copia_numero;
int numero_analizado;

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el primer número del intervalo: ";
	cin >> minimo;
	cout << "Introduzca el último número del intervalo: ";
	cin >> maximo;
	cout << "Introduzca la cifra que desea contar: ";
	cin >> cifra;
	
	// Cómputos:
	
	for (numero = minimo ; numero <= maximo; numero++) {
		copia_numero = numero;
		
		while (copia_numero != 0) {
			numero_analizado = copia_numero % 10;
			
			if (numero_analizado == cifra)
				conteo_cifra ++;
				
			copia_numero = copia_numero / 10;
		}
		
	}
	
	// Salida de datos:
	
	cout << "El numero de veces que aparece " << cifra << " en [" << minimo << "," << maximo << "] es : " << conteo_cifra << "\n\n";
	
	system ("pause");
	
}
	
