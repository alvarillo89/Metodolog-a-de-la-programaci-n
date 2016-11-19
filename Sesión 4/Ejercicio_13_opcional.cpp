/* Programador: Álvaro Fernández García.
Cread un programa que lea los datos fiscales da una persona, reajuste su renta bruta según el criterio 
que se indica posteriormente e imprima su renta neta final. */

// Introducción de recursos. 

#include <iostream>

// Declaración de variables:

char autonomo;							// Variable: Pregunta si el usuario es autónomo.
char pensionista;						// Variable: Pregunta si el usuario es pensionista.
char estado_civil;					// Variable: Pregunta el estado civil del usuario.
double renta_bruta;					// Variable: Cantidad de dinero que el trabajador gana.
double retencion;						// Variable: Retención aplicada por el Estado.
double renta_neta;					// Variable: Dinero que le queda al trabajador tras los cálculos.

// Inicio del programa.

using namespace std;

int main () {
	
	// Introducción de datos:
	
	cout << "¿Es usted autónomo? (S / N): ";
	cin >> autonomo;
	cout << "¿Es usted pensionista? (S / N): ";
	cin >> pensionista;
	cout << "Está usted casado o soltero? (C / S): ";
	cin >> estado_civil;
	cout << "Introduzca su Renta Bruta: ";
	cin >> renta_bruta;
	cout << "Introduzca la retención inicial del Estado: ";
	cin >> retencion;
	
	// Operaciones y expresiones lógicas.
	
	if (autonomo == 'S')
		retencion = retencion - 3;
	else {
		if (pensionista == 'S')
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


	
	
