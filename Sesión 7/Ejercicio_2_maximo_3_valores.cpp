/* Programador: �lvaro Fern�ndez Garc�a.
Cread una funci�n que calcule el m�ximo entre tres double. */

// Inclusi�n de recursos:

#include <iostream>

// Declaraci�n de variables:

double numero_1, numero_2, numero_3;
double numero_maximo;

// Declaraci�n de funciones:

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
	
	cout << "Introduzca el primer n�mero entero: ";
	cin >> numero_1;
	cout << "Introduzca el segundo n�mero entero: ";
	cin >> numero_2;
	cout << "Introduzca el tercer n�mero entero: ";
	cin >> numero_3;
	
	// C�mputos y salida de datos:
	
	numero_maximo = Max (numero_1 , numero_2 , numero_3);
	
	cout << "El numero m�ximo de los tres introducidos es el: " << numero_maximo << "\n\n";
	
	system ("pause");
	
}

/* No es reconmendable introducir el cin de los tres datos dentro de la funci�n. Una de las propiedades
que cumplen las funciones reside en que, detro de las mismas, hay que declarar sus propias variables, es 
decir, las variables de las funciones no se conocen fueran de las mismas, y por tanto, no pueden utilizarse.
Si nosotros realizamos el cin dentro de la funci�n cuando acabe la misma los datos que hemos introducido 
se perder�n, y por tanto, no podr�n ser utilizados en el main. */
