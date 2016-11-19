/////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Recupere la soluci�n del ejercicio 6 de esta relaci�n de problemas (c�mputo del salario 
en funci�n de las horas trabajadas) Defina una clase Nomina para gestionar el c�mputo del salario final. 
Suponga que el porcentaje de incremento en la cuant�a de las horas extras (50%) y el n�mero de horas 
que no se tarifan como extra (40) son valores que podr�an cambiar, aunque no de forma continua. El n�mero 
de horas trabajadas y la cuant�a a la que se paga cada hora extraordinaria, s� son cantidades que var�an 
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
		
		// M�todo que calcula el salario en funci�n de las horas extra:
			
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
		
		cout << "El salario del empleado es de " << una_nomina.Salario (horas, precio_hora) << " �\n\n";
		
		system ("pause");
		
}

