///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
En el ejercicio 28 se ped�a presentar un men� de operaciones al usuario. Resolved este ejercicio 
definiendo una funci�n para leer la opci�n del usuario y definiendo otra para calcular el m�ximo de dos n�meros.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

// Funci�n que calcula el m�ximo de dos numeros:

int MaximoDosNumeros (int numero_1, int numero_2) {
	
	if (numero_1 > numero_2)
		return numero_1;
	else
		return numero_2;

	/* Algoritmo:
		Si numero 1 es mayor que numero 2 devuelve numero 1. En
		cualquier otro caso, devuelve numero 2.
	*/
}

// Funci�n que analiza la opci�n introducida por el usuario:

char OpcionMenuIntroducida (string mensaje) {
	char opcion;
	
	do {
		cout << mensaje;
		cin >> opcion;
		opcion = toupper(opcion);
	} while (opcion != 'I' && opcion != 'S' && opcion != 'P' &&
				opcion != 'M' && opcion != 'R');

	return opcion;
	
	
	/* Algoritmo:
		Bucle: Comprobaci�n de si el car�cter introducido est� dentro del rango
		permitido.
		Devuelve dicho car�cter.
	*/
}


int main () {
	
	int dato_1, dato_2, opcion, resultado;

	// Entrada de datos:
	
	cout << "Introduzca dos valores separados por un espacio: ";
	cin >> dato_1;
	cin >> dato_2;
		
	cout << "\nMen�:\n I. Introducir n�meros\n S. Suma\n P. Producto\n M. M�ximo\n R. Salir\n";
	
	// C�mputos y salida de datos:
	
	opcion = OpcionMenuIntroducida ("\nIntroduzca opci�n: ");
	
	while (opcion != 'R') {
	
		if (opcion == 'I') {
			cout << "Introduzca los nuevos valores separados por un espacio: ";
			cin >> dato_1;
			cin >> dato_2;
		}
		
		else 
			if (opcion == 'S') {
				resultado = dato_1 + dato_2;
				cout << resultado;
			}
			else
				if (opcion == 'P') {
					resultado = dato_1 * dato_2;
					cout << resultado;
				}
				
				else
					if (opcion == 'M') {
						resultado = MaximoDosNumeros (dato_1, dato_2);
					cout << resultado;
					}
					
					else
						resultado = 'R';
	
	opcion = OpcionMenuIntroducida ("\nIntroduzca opci�n: ");	
	
	}
	
	cout << "\n";
	
	system ("pause");
	
}
