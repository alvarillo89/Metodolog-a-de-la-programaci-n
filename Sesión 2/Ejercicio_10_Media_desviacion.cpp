/* Programador: �lvaro Fern�ndez Garc�a.
Programa realizado para calcular la media aritm�tica muestral y la desviaci�n t�pica muestral a partir de la 
introducci�n por parte del usuario de la altura de tres personas. */

// Inclusi�n de recursos.

#include <iostream>
#include <cmath>

// Declaraci�n de variables.

double altura1;							// Altura de la primera persona.
double altura2;							// Altura de la segunda persona.
double altura3;							// Altura de la tercera persona.
double media;								// Valor de la media aritm�tica.
double desviacion;						// Valor de la desviaci�n t�pica.
double sumatoria;							// Variable auxiliar que suma las tres alturas.
double varianza1;							// Variables auxiliares para calcular la variante de las tres alturas.
double varianza2;
double varianza3;

// Comienzo del programa.

using namespace std;

int main () {
	
	// Introducci�n de datos:
	
	cout << "Introduzca la altura de la primera persona: ";
	cin >> altura1;
	cout << "Introduzca la altura de la segunda persona: ";
	cin >> altura2;
	cout << "Introduzca la altura de la tercera persona: ";
	cin >> altura3;
	
	// Operaciones.
	
	sumatoria = altura1 + altura2 + altura3;
	media = sumatoria / 3;
	varianza1 = pow (altura1 - media, 2);
	varianza2 = pow (altura2 - media, 2);
	varianza3 = pow (altura3 - media, 2);
	desviacion = sqrt ((varianza1 + varianza2 + varianza3) / 3);
	
	// Muestra de resultados.
	
	cout << "La media aritm�tica tiene un valor de: " << media << "\n";
	cout << "La desviaci�n t�pica tiene un valor de: " << desviacion << "\n\n";
	
	system ("pause");
	
}

