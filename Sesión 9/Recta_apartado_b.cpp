//////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Ejericio 15 de clases. 
En vez de calcular la pendiente en el programa principal, vamos a ponerlo como un m�todo de la clase 
y as� lo reutilizaremos todas las veces que necesitemos. A�ada un m�todo para el c�lculo de la 
pendiente y modificad el main para tener en cuenta este cambio.
A�adir m�todo para calcular la abcisa y la ordenada.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Definici�n de clases:

class Recta {
	public:
		double valor_A = 0;
		double valor_B = 0;
		double valor_C = 0;
	
	// M�todos de la clase:
	
	/* M�todo que calcula la pendiente de la recta. No a�adimos
	este dato como un dato miembro puesto que estos deben de estar compuestos
	por lo indispensable. En este caso la pendiente no es un dato indispensable
	ya que se puede calcular a partir del valor de A y de B */
	
	double Pendiente () {
		return - valor_A / valor_B;
	}
	
	// M�todo que calcula la ordenada de una recta a partir de una abcisa:
	
	double Ordenada (double abcisa) {
		return (- valor_C - abcisa * valor_A) / valor_B;
	}

	// M�todo que calcula la abcisa de una recta a partir de una ordenada:

	double Abcisa (double ordenada) {
		return (- valor_C - ordenada * valor_B) / valor_A;
	}

};


int main () {
	
	Recta recta_1, recta_2;
	double real_1, real_2, real_3, real_4, real_5, real_6;
	double abcisa, ordenada;
	
	// Entrada de datos:
	
	cout << "Introduzca seis n�meros reales separados por un espacio: ";
	cin >> real_1;
	cin >> real_2;
	cin >> real_3;
	cin >> real_4;
	cin >> real_5;
	cin >> real_6;
	
	// Asignaci�n de valores a la rectas:
	
	recta_1.valor_A = real_1;
	recta_1.valor_B = real_2;
	recta_1.valor_C = real_3;
	
	recta_2.valor_A = real_4;
	recta_2.valor_B = real_5;
	recta_2.valor_C = real_6;
	
	// C�lculo de la pendiente de la primera recta:
	
	cout << "La pendiente de la primera recta vale: " << recta_1.Pendiente() << "\n";
	
	// C�culo de la ordenada de la primera recta:
	
	cout << "Introduzca el valor de una abcisa: X= ";
	cin >> abcisa;
	
	cout << "El valor de la ordenada es: Y= " << recta_1.Ordenada(abcisa) << "\n\n";
	
	// C�lculo de la absisa de la primera recta:
	
	cout << "Introduzca el valor de una ordenada: Y= ";
	cin >> ordenada;
	
	cout << "El valor de la abcisa es: X= " << recta_1.Abcisa(ordenada) << "\n\n";

	
	system ("pause");
	
}
