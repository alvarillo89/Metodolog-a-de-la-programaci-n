////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.

A un trabajador le pagan seg�n sus horas trabajadas y la tarifa est� a un valor por hora. Si la 
cantidad de horas trabajadas es mayor de 40 horas, la tarifa por hora se incrementa en un 50% para 
las horas extras (las que haya por encima de 40). Construir una funci�n que dado el n�mero total de 
horas trabajadas y el precio por hora, devuelva el salario del trabajador. 
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Funci�n que calcula el salario de un empleado:

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

	Si las horas superan el l�mite
		C�lculo de las horas extra.
		C�lculo de las horas ordinarias.
		C�culo de la tasa de las horas extra.
		C�lculo del salario. (Horas normales m�s horas extra).
		
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
	
	// C�mputos:
	
	salario = FuncionSalario (horas, precio_hora);
	
	// Salida de datos:
	
	cout << "El salario del empleado es de " << salario << " �\n\n";
	
	system ("pause");
	
}
	
