/* Programador: Álvaro Fernández García.
Programa para calcular la cantidad de segundos que han transcurrido durante
dos instantes determinados */ 

// Introducción de recursos.

#include <iostream>
#include <cmath>

// Declaración de variables.

double hora1;							// Hora del primer instante.
double minuto1; 						// Minuto del primer instante.
double segundo1;						// Segundo del primer instante.
double hora2;							// Hora del segundo instante.
double minuto2;						// Minuto del segundo instante.
double segundo2;						// Segundo del segundo instante.
double segundos_transcurridos;	// Segundos transcurridos en el intervalo.

// Comienzo del programa.

using namespace std;

int main() {
	
	cout << "El siguiente programa trabaja con intervalos de (0 - 23) horas y \n(0 - 59) minutos y segundos." <<"\n\n";  //Dato informativo, únicamente.
	cout << "Introduzca la hora exacta del primer instante: ";
	cin >> hora1;
	cout << "Introduzca el minuto exacto del primer instante: ";
	cin >> minuto1;
	cout << "Introduzca el segundo exacto del primer instante: ";
	cin >> segundo1;
	cout << "Introduzca la hora exacta del segundo instante: ";
	cin >> hora2;
	cout << "Introduzca el minuto exacto del segundo instante: ";
	cin >> minuto2;
	cout << "Introduzca el segundo exacto del segundo instante: ";
	cin >> segundo2;
	
	// Operaciones matemáticas.
	
	segundos_transcurridos = ((hora2 - hora1) * 3600) + ((minuto2 - minuto1) * 60) + (segundo2 - segundo1);
	
	/* Obviamente dichas operaciones serán válidas siempre que se introduzcan valores correctos y no se produzcan cálculos dentro de días 
	distintos. */

	// Resultados.
	
	cout << "\nLos segundos transcurridos entre ambos instantes son: " << segundos_transcurridos << "\n\n";
	
	system ("pause");
}
