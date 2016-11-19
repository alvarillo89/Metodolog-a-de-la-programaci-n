/* Programador: Álvaro Fernández García.
Cread una función que calcule el máximo entre tres double. */

// Inclusión de recursos:

#include <iostream>

// Declaración de variables:

double numero_1, numero_2, numero_3;
double numero_maximo;

// Declaración de funciones:

using namespace std;

double Max (double un_valor, double otro_valor, double el_tercero) {
	double valor_maximo;
	if (un_valor > otro_valor && un_valor > el_tercero)
		valor_maximo = un_valor;
	else
		if (otro_valor > un_valor && otro_valor > el_tercero)
			valor_maximo = otro_valor;
		else
			valor_maximo = el_tercero;
	return valor_maximo;
}

// Comienzo del programa:

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca el primer número entero: ";
	cin >> numero_1;
	cout << "Introduzca el segundo número entero: ";
	cin >> numero_2;
	cout << "Introduzca el tercer número entero: ";
	cin >> numero_3;
	
	// Cómputos y salida de datos:
	
	numero_maximo = Max (numero_1 , numero_2 , numero_3);
	
	cout << "El numero máximo de los tres introducidos es el: " << numero_maximo << "\n\n";
	
	system ("pause");
	
}

/* No es reconmendable introducir el cin de los tres datos dentro de la función. Una de las propiedades
que cumplen las funciones reside en que, detro de las mismas, hay que declarar sus propias variables, es 
decir, las variables de las funciones no se conocen fueran de las mismas, y por tanto, no pueden utilizarse.
Si nosotros realizamos el cin dentro de la función cuando acabe la misma los datos que hemos introducido 
se perderán, y por tanto, no podrán ser utilizados en el main. */
