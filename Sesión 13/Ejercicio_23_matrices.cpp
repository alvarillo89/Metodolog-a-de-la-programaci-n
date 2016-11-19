/////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
En este ejercicio, no hay que construir ninguna clase ni función. Es un ejercicio 
sobre recorridos de una matriz declarada directamente en el main. Leed desde teclado 
dos variables util_filas y util_columnas y leed los datos de una matriz de enteros de 
tamaño util_filas x util_columnas. Sobredicha matriz, se pide lo siguiente:
a) Calcular la traspuesta de la matriz, almacenando el resultado en otra matriz.
d) Leer los datos de otra matriz y multiplicar ambas matrices (las dimensiones de la 
segunda matriz han de ser compatibles con las de la primera para poder hacer la 
multiplicación.
*/
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main () {
	int util_filas, util_columnas, util_filas_2, util_columnas_2;
	int fila, columna, entero;
	int i, j;
	
	// Entrada de datos:
	
	cout << "Introduzca el número de filas y columnas de la matriz: ";
	cin >> util_filas;
	cin >> util_columnas;
	
	int matriz[util_filas][util_columnas];
	
	cout << "Introduzca las filas de la matriz:\n";
	
	for (fila = 0 ; fila < util_filas ; fila ++) {
		for(columna = 0 ; columna < util_columnas ; columna ++) {
			cin >> entero;
			matriz[fila][columna] = entero;
		}
	}
	
	// Apartado a) Matriz traspuesta:
	
	int matriz_traspuesta[util_columnas][util_filas];
	
  for (fila = 0 ; fila < util_filas ; fila ++) {
		for(columna = 0 ; columna < util_columnas ; columna ++) {
			matriz_traspuesta[columna][fila] = matriz[fila][columna];
		}
	}
	
	// Nueva entrada de datos:

	cout << "Introduzca el número de filas y columnas de la segunda matriz: ";
	cin >> util_filas_2;
	cin >> util_columnas_2;
	
	int matriz_2[util_filas_2][util_columnas_2];
	
	cout << "Introduzca las filas de la segunda matriz:\n";
	
	for (fila = 0 ; fila < util_filas_2 ; fila ++) {
		for(columna = 0 ; columna < util_columnas_2 ; columna ++) {
			cin >> entero;
			matriz_2[fila][columna] = entero;
		}
	}	
	
	// Apartado d) Multiplicación de matrices:
	
	int matriz_producto[util_filas][util_columnas_2];
	int suma;
	int columna_2, fila_2;
	
	for (i = 0 ; i < util_filas ; i ++) {
		for (j = 0 ; j < util_columnas_2 ; j++) {
			suma = 0;
			columna_2 = fila_2 = 0;
			
			while (fila_2 < util_filas && columna_2 < util_columnas) {
			suma += matriz[i][columna_2] * matriz_2[fila_2][j];
			columna_2 ++;
			fila_2 ++;
			}
			matriz_producto[i][j] = suma;
		}
	}
		
	// Salida de datos:
	
	cout << "La matriz traspuesta es:\n";
	
	for (fila = 0 ; fila < util_columnas; fila ++){
		for (columna = 0 ; columna < util_filas; columna ++){
			cout << matriz_traspuesta[fila][columna] << "  ";
		}
		cout << "\n";
	}
	
	cout << "La matriz producto es:\n";
	
	for (fila = 0 ; fila < util_filas; fila ++){
		for (columna = 0 ; columna < util_columnas_2 ; columna ++){
			cout << matriz_producto[fila][columna] << "  ";
		}
		cout << "\n";
	}
	
	system("pause");
	
}
	
