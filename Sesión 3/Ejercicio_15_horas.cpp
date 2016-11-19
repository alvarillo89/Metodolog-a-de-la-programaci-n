/* Programador: Álvaro Fernández García.
Programa establecido para calcular las horas con sus correspondientes minutos y segundos, en un formato
de 24 horas, a partir de los datos introducidos en consola. */

// Introducción de recursos.

#include <iostream>
#include <cmath>

// Declaración de variables.

int hora1;										// Hora introducida por el usuario.
int minuto1;									// Minuto introducido por el usuario.
int segundo1;									// Segundo introducido por el usuario.
int hora_total;								// Hora final que mostrará el programa.
int minuto_total;								// Minuto final que mostrará el programa.
int segundo_total;							// Segundo final que mostrará el programa.
int dias_totales;								// Días que aparecerán si las horas son superiores a 24.
int cociente_segundos;						// Variable auxiliar que almacena los segundos sobrantes.
int cociente_minutos;						// Variable auxiliar que almacena los minutos sobrantes.
int cociente_horas;							// Variable auxiliar que almacena las horas sobrantes.

// Comienzo del Programa:

using namespace std;

int main (){
	
	// Introducción de datos:
	
	cout << "Introduzca la hora correspondiente: ";
	cin >> hora1;
	cout << "Introduzca el minuto correspondiente: ";
	cin >> minuto1;
	cout << "Introduzca el segundo correspondiente: ";
	cin >> segundo1;
	
	// Operaciones necesarias.
	
	segundo_total = segundo1 % 60;
	cociente_segundos = segundo1 / 60;
	minuto_total = (minuto1 + cociente_segundos) % 60;
	cociente_minutos = minuto1 / 60;
	hora_total = (hora1 + cociente_minutos) % 24;
	cociente_horas = hora1 / 24;
	dias_totales = cociente_horas;
	
	
	// Muestra de resultados: 
	
	cout << "La hora correspondiente es: \n";
	cout << dias_totales << " días " << hora_total << " : " << minuto_total << " : " <<segundo_total << "\n\n";
	
	system ("pause");

}
	
	
	
	
	
	
