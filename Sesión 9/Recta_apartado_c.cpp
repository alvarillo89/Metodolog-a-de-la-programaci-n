//////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Ejericio 15 de clases. 
Cambie ahora los datos miembro públicos y póngalos privados. Tendrá que añadir métodos para asignar y 
ver los valores de los datos miembro. Añada métodos para asignar un valor a cada uno de los tres datos 
miembro. Modifique el main para tener en cuenta estos cambios.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Definición de clases:

class Recta {
	private:
		double valor_A = 0;
		double valor_B = 0;
		double valor_C = 0;
	
	public:
	
	// Métodos de la clase:
	
	// Metodos para asignar el valor al coeficientes a las rectas:
	
	void SetValorA (double dato) {
		valor_A = dato;
	}
	
	void SetValorB (double dato) {
		valor_B = dato;
	}
	
	void SetValorC (double dato){
		valor_C = dato;
	}

	// Método que calcula la pendiente de la recta:
	
	double Pendiente () {
		return - valor_A / valor_B;
	}
	
	// Método que calcula la ordenada de una recta a partir de una abcisa:
	
	double Ordenada (double abcisa) {
		return (- valor_C - abcisa * valor_A) / valor_B;
	}

	// Método que calcula la abcisa de una recta a partir de una ordenada:

	double Abcisa (double ordenada) {
		return (- valor_C - ordenada * valor_B) / valor_A;
	}

};


int main () {
	
	Recta recta_1, recta_2;
	double real_1, real_2, real_3, real_4, real_5, real_6;
	double abcisa, ordenada;
	
	// Entrada de datos:
	
	cout << "Introduzca seis números reales separados por un espacio: ";
	cin >> real_1;
	cin >> real_2;
	cin >> real_3;
	cin >> real_4;
	cin >> real_5;
	cin >> real_6;
	
	// Asignación de valores a la rectas:
	
	recta_1.SetValorA(real_1);
	recta_1.SetValorB(real_2);
	recta_1.SetValorC(real_3);
	
	recta_2.SetValorA(real_4);
	recta_2.SetValorB(real_5);
	recta_2.SetValorC(real_6);
	
	
	// Cálculo de la pendiente de la primera recta:
	
	cout << "La pendiente de la primera recta vale: " << recta_1.Pendiente() << "\n";
	
	// Cáculo de la ordenada de la primera recta:
	
	cout << "Introduzca el valor de una abcisa: X= ";
	cin >> abcisa;
	
	cout << "El valor de la ordenada es: Y= " << recta_1.Ordenada(abcisa) << "\n\n";
	
	// Cálculo de la absisa de la primera recta:
	
	cout << "Introduzca el valor de una ordenada: Y= ";
	cin >> ordenada;
	
	cout << "El valor de la abcisa es: X= " << recta_1.Abcisa(ordenada) << "\n\n";

	
	system ("pause");
	
}
