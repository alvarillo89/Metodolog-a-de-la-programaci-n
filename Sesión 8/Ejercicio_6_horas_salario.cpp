////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.

A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por hora. Si la 
cantidad de horas trabajadas es mayor de 40 horas, la tarifa por hora se incrementa en un 50% para 
las horas extras (las que haya por encima de 40). Construir una función que dado el número total de 
horas trabajadas y el precio por hora, devuelva el salario del trabajador. 
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Función que calcula el salario de un empleado:

double FuncionSalario (double horas, double precio_hora ) {
	
	double horas_extra, precio_horas_extra, salario;
	const double limite_horas = 40;
	const double tasa_horas_extra = 1 + 0.5;

	if (horas > limite_horas) {
		horas_extra = horas - limite_horas;
		horas = limite_horas;
		precio_horas_extra = precio_hora * tasa_horas_extra;
		salario = (horas * precio_hora) + (horas_extra * precio_horas_extra);
	}
	else 
		salario = horas * precio_hora;
		
	return salario;
	
}

/* Algoritmo:

	Si las horas superan el límite
		Cálculo de las horas extra.
		Cálculo de las horas ordinarias.
		Cáculo de la tasa de las horas extra.
		Cálculo del salario. (Horas normales más horas extra).
		
	Si no las supera.
		Calculo del salario. (Horas normales).
*/

int main () {
	
	double horas, precio_hora, salario;
	
	// Entrada de datos;
	
	cout << "Introduzca las horas trabajadas por el empleado: ";
	cin >> horas;
	cout << "Introduzca el precio por hora: ";
	cin >> precio_hora;
	
	// Cómputos:
	
	salario = FuncionSalario (horas, precio_hora);
	
	// Salida de datos:
	
	cout << "El salario del empleado es de " << salario << " €\n\n";
	
	system ("pause");
	
}
	
