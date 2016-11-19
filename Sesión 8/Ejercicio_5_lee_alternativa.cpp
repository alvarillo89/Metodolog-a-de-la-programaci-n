/* Programador: Álvaro Fernández García.
Escriba una función en C++ LeeOpcion2Alternativas que imprima en pantalla un mensaje, lea una opción como 
un carácter y sólo permita aceptar los caracteres 'S' o 'N' (mayúscula o minúscula). ¿Qué debería devolver 
la función? ¿El carácter leído o un bool?. Aplique esta función en la solución del ejercicio 13 (Renta bruta y neta) 
de la relación de problemas II, para leer si una persona es pensionista o si es autónomo. */

// Introducción de recursos. 

#include <iostream>
#include <cctype>
#include <string>

// Declaración de variables:

char estado_civil;					// Variable: Pregunta el estado civil del usuario.
double renta_bruta;					// Variable: Cantidad de dinero que el trabajador gana.
double retencion;						// Variable: Retención aplicada por el Estado.
double renta_neta;					// Variable: Dinero que le queda al trabajador tras los cálculos.

// Inicio del programa.

using namespace std;

// Declaración de funciones:

bool LeeOpcion2Alternativas ( string mensaje ) {
	char respuesta;
	
	do {
		cout << mensaje;
		cin >> respuesta;
		respuesta = toupper (respuesta);
	} while (respuesta != 'S' && respuesta != 'N');
	
	if (respuesta == 'S')
		return true;
	else
		return false;
		
	/* Algoritmo:
		Bucle: Lee un carácter cualquiera y lo convierte a mayúscula. Vuelve a realiar el 
		bucle si la letra introducida es distinta de S o N (también admite minúscula). 
		Si la letra introducida es S, devuelve verdadero. En cualquier otro caso
		devuelve falso. */
}

// Debe devolver un tipo bool para así aplicarla dentro de los condicionales.

int main () {
	
	// Introducción de datos:
	
	cout << "Está usted casado o soltero? (C / S): ";
	cin >> estado_civil;
	cout << "Introduzca su Renta Bruta: ";
	cin >> renta_bruta;
	cout << "Introduzca la retención inicial del Estado: ";
	cin >> retencion;
	
	// Operaciones y expresiones lógicas.
	
	if (LeeOpcion2Alternativas ("¿Es usted autónomo? (S / N): "))
		retencion = retencion - 3;
	else {
		
		if (LeeOpcion2Alternativas ("¿Es usted pensionista? (S / N): "))
			retencion = retencion + 1;
		else {
			retencion = retencion + 2;
			
			if (renta_bruta < 20000)
				retencion = retencion + 2;
			else {
				
				if (estado_civil == 'C')
					retencion = retencion + 2.5;
				else
					retencion = retencion + 3;
			} 
		}
	}

renta_neta = renta_bruta - renta_bruta * retencion / 100;

// Muestra de resultados: 

cout << "Su renta neta tras las aplicaciones es de: " << renta_neta << " €" << "\n\n";

system ("pause");

}


	
	
