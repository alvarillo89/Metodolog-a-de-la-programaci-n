/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Puede observar que, dependiendo de la cadena a insertar y de las posiciones especificadas, la secuencia
final puede ser m�s grande o m�s peque�a que la original. Se quiere realizar esta tarea pero directamente 
en el main, trabajando sobre dos vectores de corchetes y sin ninguna clase. Se pide construir un programa 
que leer� caracteres hasta el terminador # y los almacenar� en el primer vector y de nuevo leer� caracteres 
hasta llegar a un segundo # y almacenar� los datos en el segundo vector. A continuaci�n, el programa leer� 
dos enteros pos y n y proceder� a reemplazar los n caracteres que hay a partir de la posici�n pos del primer 
vector, con los caracteres del segundo vector.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main () {
	const int MAX_CARACTERES = 100;
	char cadena_1[MAX_CARACTERES];
	char cadena_2[MAX_CARACTERES];
	const char TERMINADOR = '#';
	int pos, n, total_utilizados_1 = 0, total_utilizados_2 = 0;
	char caracter;
	
	// Entrada de datos:
	
	cout << "Introduzca la primera cadena de caracteres: ";
	caracter = cin.get();
	
	while (caracter != TERMINADOR && total_utilizados_1 <= MAX_CARACTERES) {
		cadena_1[total_utilizados_1] = caracter;
		total_utilizados_1 ++;
		caracter = cin.get();
	}
	
	cout << "Introduzca la segunda cadena de caracteres: ";
	caracter = cin.get();
	
	while (caracter != TERMINADOR && total_utilizados_2 <= MAX_CARACTERES) {
		if (caracter != '\n') {
			cadena_2[total_utilizados_2] = caracter;
			total_utilizados_2 ++;
		}
		caracter = cin.get();
	}
	
	cout << "Introduzca la posici�n y el n�mero de caracteres que desea reemplazar: ";
	cin >> pos;
	cin >> n;
	
	// C�mputos:
	
	int i, nuevo_total_utilizados = total_utilizados_1 - n + total_utilizados_2;
	bool posible_cambio = nuevo_total_utilizados <= MAX_CARACTERES;
	
	if (posible_cambio) {
		for (i = 1 ; (total_utilizados_1 - i) >= (pos + n) ; i ++) {	
			cadena_1[nuevo_total_utilizados - i] = cadena_1[total_utilizados_1 - i];
		}
		total_utilizados_1 = nuevo_total_utilizados;
		
		for (i = 0  ; i < total_utilizados_2 ; i ++) {
			cadena_1[pos + i] = cadena_2[i];
		}
	}
	
	// Salida de datos:
	
	for (i = 0 ; i < total_utilizados_1 ; i ++) {
		cout << cadena_1[i];
	}
	
	cout << "\n\n";
	
	system ("pause");
	
}
