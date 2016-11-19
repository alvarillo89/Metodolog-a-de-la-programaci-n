/* Programador: Álvaro Fernández García.
Programa realizado para calcular la media aritmética muestral y la desviación típica muestral a partir de la 
introducción por parte del usuario de la altura de tres personas. */

// Inclusión de recursos.

#include <iostream>
#include <cmath>
#include <string>

// Declaración de variables.

double altura1;							// Altura de la primera persona.
double altura2;							// Altura de la segunda persona.
double altura3;							// Altura de la tercera persona.
double media;								// Valor de la media aritmética.
double desviacion;						// Valor de la desviación típica.
double sumatoria;							// Variable auxiliar que suma las tres alturas.
double varianza1;							// Variables auxiliares para calcular la variante de las tres alturas.
double varianza2;
double varianza3;

// Comienzo del programa.

using namespace std;

int main () {
	
	// Introducción de datos:
	
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
	
	cout << "La media aritmética tiene un valor de: " << media << "\n";
	cout << "La desviación típica tiene un valor de: " << desviacion << "\n\n";
	
	// Introducción de condicionales.
	
	string mayor = " es mayor o igual que la media.";
	string menor = " es menor que la media.";
	
	if ( altura1 >= media) 
		cout << altura1 << mayor;
	else 
		cout << altura1 << menor;
		
	if ( altura2 >= media) 
		cout << "\n" << altura2 << mayor;
	else 
		cout << "\n" << altura2 << menor;
		
	if ( altura3 >= media) 
		cout << "\n" << altura3 << mayor << "\n\n";
	else 
		cout << "\n" << altura3 << menor << "\n\n";
	
	system ("pause");
	
}

