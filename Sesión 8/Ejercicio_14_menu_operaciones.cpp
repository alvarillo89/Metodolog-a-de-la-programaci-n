///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
En el ejercicio 28 se pedía presentar un menú de operaciones al usuario. Resolved este ejercicio 
definiendo una función para leer la opción del usuario y definiendo otra para calcular el máximo de dos números.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

// Función que calcula el máximo de dos numeros:

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

// Función que analiza la opción introducida por el usuario:

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
		Bucle: Comprobación de si el carácter introducido está dentro del rango
		permitido.
		Devuelve dicho carácter.
	*/
}


int main () {
	
	int dato_1, dato_2, opcion, resultado;

	// Entrada de datos:
	
	cout << "Introduzca dos valores separados por un espacio: ";
	cin >> dato_1;
	cin >> dato_2;
		
	cout << "\nMenú:\n I. Introducir números\n S. Suma\n P. Producto\n M. Máximo\n R. Salir\n";
	
	// Cómputos y salida de datos:
	
	opcion = OpcionMenuIntroducida ("\nIntroduzca opción: ");
	
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
	
	opcion = OpcionMenuIntroducida ("\nIntroduzca opción: ");	
	
	}
	
	cout << "\n";
	
	system ("pause");
	
}
