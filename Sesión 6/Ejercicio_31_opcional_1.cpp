/* Programador: �lvaro Fern�ndez Garc�a.
Un n�mero entero n se dice que es desgarrable (torn) si al dividirlo en dos partes cualesquiera izda y dcha, 
el cuadrado de la suma de ambas partes es igual a n. Por ejemplo, 88209 es desgarrable ya que (88 + 209)2 = 88209; 
81 tambi�n lo es ya que 81 = (8 + 1)2. Cread un programa que lea un entero n e indique si es o no desgarrable.
*/

// Inclusi�n de recursos:

#include <iostream>
#include <cmath>

// Declaraci�n de variables:

int dato, copia_dato;				// N�mero introducido por el usuario y su copia.
int cifras_dato;						// N�mero de cifras del dato introducido.
int cociente_diez;					// Variable auxiliar para la separaci�n de cifras.
int parte_1, parte_2;				// Divisi�n del numero en dos partes.
bool es_desgarrable;					// Variable que almacena si es o no desgarrable.

// Comienzo del programa:

using namespace std;

int main () {
	
	// Entrada de datos:
	
	cout << "Introduzca un n�mero cualquiera: ";
	cin >> dato;
	
	// Conteo de cifras:
	
	copia_dato = dato;
	cifras_dato = 0;

	while (copia_dato != 0) {
		copia_dato = copia_dato / 10;
		cifras_dato ++;
	}
	
	// Comprobaci�n si es o no desgarrable:
	
	cociente_diez = pow (10 , cifras_dato - 1);
	
	copia_dato = dato;
	es_desgarrable = false;
	
	while (cociente_diez >= 10 && es_desgarrable == false) {
		parte_1 = copia_dato / cociente_diez;
		parte_2 = copia_dato % cociente_diez;
		
		if (pow (parte_1 + parte_2 , 2) == dato)
			es_desgarrable = true;
		else
			cociente_diez = cociente_diez / 10;
	}
	
	// Salida de datos:
	
	if (es_desgarrable == true)
		cout << dato << " es un n�mero desgarrable." << "\n\n";
	else
		cout << dato << " no es un n�mero desgarrable." << "\n\n";
		
	system ("pause");
	
}
	
	
