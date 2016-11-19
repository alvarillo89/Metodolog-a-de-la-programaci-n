////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
En este ejercicio no hay que construir ninguna función o clase. Todo se programará en el main. 
Defina dos matrices de reales original y suavizada de tamaño 50 x 30. Lea desde teclado los 
valores de la matriz original, obligando a que sea simétrica. Para ello, lea el número de filas 
n y a continuación introduzca los nxn datos de la matriz.
a) La tabla resultante será simétrica. 
b) Los valores de la diagonal principal de la tabla resultante serán iguales a los de la tabla original. 
c) Los valores del triángulo superior de la tabla resultante se calculan de la siguiente manera: si 
(i,j) es una posición en el triángulo superior de la tabla resultante, su valor es el valor medio de 
los valores que ocupan las posiciones de las columnas j,j + 1,...,n-1 en la fila i de la tabla original. 
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////
 
#include <iostream>
using namespace std;
 
int main () {
	const int UTIL_FILAS = 50, UTIL_COLUMNAS = 30;
	double original[UTIL_FILAS][UTIL_COLUMNAS];
	double suavizada[UTIL_FILAS][UTIL_COLUMNAS];
	int n, i, j; 
	double elemento;
	
	// Entrada de datos:
	
	do {
	cout << "Introduzca el número de filas o columnas de la matriz: ";
	cin >> n;
	} while (n > UTIL_COLUMNAS);
	
	cout << "Introduzca las filas de la matriz separadas por espacio: ";
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j ++) {
			cin >> elemento;
			original[i][j] = elemento;
		}
	}
	
	// Cómputos: Apartado b):
	
	i = j = 0;
	while (i < n && j < n) {
		suavizada[i][j] = original[i][j];
		i ++;
		j ++;
	}
	
	// Apartado c):
	
	double sumatoria = 0;
	int k;
	
	for (i = 0 ; i < n ; i ++) {
		for (j = i + 1 ; j < n ; j ++) {
			for (k = 0 ; j + k < n ; k ++) {
				sumatoria += original[i][j+k];
			}
			suavizada[i][j] = sumatoria / (k * 1.0);
			sumatoria = 0;
		}
	}
	
	// Apartado a):
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j ++) {
			suavizada[j][i] = suavizada[i][j];
		}
	}
	
	// Salida de datos:
	
	cout << "La matriz suavizada es:\n";
	
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j ++) {
			cout << suavizada[i][j] << "  ";
		}
		cout << "\n";
	}
	
	cout << "\n";
	
	system("pause");
						
}
		
	
