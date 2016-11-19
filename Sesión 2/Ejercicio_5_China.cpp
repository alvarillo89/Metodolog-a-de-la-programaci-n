/* Programador: Álvaro Fernández García.
El siguiente programa tiene como finalidad conocer la población que presentará China
dos años en adelante a partir de los datos proporcionados */

// Introducción de los recursos necesarios.

#include <iostream>
#include <cmath>

// Declaración de variables.

double poblacion_inicial = 1375570814;							// Población actual de China.
double tiempo_especificado = 2 * 365 * 24 * 3600;			// Segundos que tienen dos años.
double nacimientos = tiempo_especificado / 1.87;			// Número de nacimientos.
double defunciones = tiempo_especificado / 3.27;			// Número de defunciones.
double emigraciones = tiempo_especificado / 71.9;			// Número de emigraciones.
int total;																// Total de personas.

/* En la variable "total" he optado por declararla como un número entero para obtener un resultado más preciso, puesto que si se hubiese declarado como
una variable real aparecería como una expresión exponencial, no obstante el resto de variables he preferido conservarlas como variables reales, 
impidiendo así la perdida de decimales y obteniendo un resultado más exacto. */

// Comienzo del Programa.

using namespace std;

int main(){
	
	total = poblacion_inicial + nacimientos - defunciones - emigraciones;
	
	cout << "La población de China al cabo de dos años será de: \n" << total <<"\n\n";
	
	system("pause");
	
}

