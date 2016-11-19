/////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Recupere la solución del ejercicio 6 de esta relación de problemas (cómputo del salario 
en función de las horas trabajadas) Defina una clase Nomina para gestionar el cómputo del salario final. 
Suponga que el porcentaje de incremento en la cuantía de las horas extras (50%) y el número de horas 
que no se tarifan como extra (40) son valores que podrían cambiar, aunque no de forma continua. El número 
de horas trabajadas y la cuantía a la que se paga cada hora extraordinaria, sí son cantidades que varían 
de un trabajador a otro.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Nomina {
	private:
		const double LIMITE_HORAS;
		const double TASA_HORAS_EXTRA;
		
	public:
		
		// Constructor:
		
		Nomina (double limite, double tasa)
			:LIMITE_HORAS(limite),
			TASA_HORAS_EXTRA(tasa)
		{
		}
		
		// Método que calcula el salario en función de las horas extra:
			
		double Salario (double horas_trabajadas, double precio_hora) {	
			double horas_extra, salario, precio_horas_extra;
			
			if (horas_trabajadas > LIMITE_HORAS) {
				horas_extra = horas_trabajadas - LIMITE_HORAS;
				precio_horas_extra = precio_hora * TASA_HORAS_EXTRA;
				salario = (LIMITE_HORAS * precio_hora) + (horas_extra * precio_horas_extra);
			}
			else 
				salario = horas_trabajadas * precio_hora;
		
			return salario;
		}
		
	};
	
	int main () {
		
		double horas, precio_hora, limite, porcentaje;
	
		// Entrada de datos;
		
		cout << "Introduzca las horas limite: ";
		cin >> limite;
		cout << "Introduzca el porcentaje de las horas extra: ";
		cin >> porcentaje;
	
		Nomina una_nomina (limite, porcentaje);
				
		cout << "Introduzca las horas trabajadas por el empleado: ";
		cin >> horas;
		cout << "Introduzca el precio por hora: ";
		cin >> precio_hora;
				
		// Salida de datos:
		
		cout << "El salario del empleado es de " << una_nomina.Salario (horas, precio_hora) << " €\n\n";
		
		system ("pause");
		
}

