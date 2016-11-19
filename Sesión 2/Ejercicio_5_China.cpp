/* Programador: �lvaro Fern�ndez Garc�a.
El siguiente programa tiene como finalidad conocer la poblaci�n que presentar� China
dos a�os en adelante a partir de los datos proporcionados */

// Introducci�n de los recursos necesarios.

#include <iostream>
#include <cmath>

// Declaraci�n de variables.

double poblacion_inicial = 1375570814;							// Poblaci�n actual de China.
double tiempo_especificado = 2 * 365 * 24 * 3600;			// Segundos que tienen dos a�os.
double nacimientos = tiempo_especificado / 1.87;			// N�mero de nacimientos.
double defunciones = tiempo_especificado / 3.27;			// N�mero de defunciones.
double emigraciones = tiempo_especificado / 71.9;			// N�mero de emigraciones.
int total;																// Total de personas.

/* En la variable "total" he optado por declararla como un n�mero entero para obtener un resultado m�s preciso, puesto que si se hubiese declarado como
una variable real aparecer�a como una expresi�n exponencial, no obstante el resto de variables he preferido conservarlas como variables reales, 
impidiendo as� la perdida de decimales y obteniendo un resultado m�s exacto. */

// Comienzo del Programa.

using namespace std;

int main(){
	
	total = poblacion_inicial + nacimientos - defunciones - emigraciones;
	
	cout << "La poblaci�n de China al cabo de dos a�os ser� de: \n" << total <<"\n\n";
	
	system("pause");
	
}

