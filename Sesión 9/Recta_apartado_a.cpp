//////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Ejericio 15 de clases. 
Apartado a)
Defina la clase Recta. En este apartado utilice únicamente datos miembro públicos.
Cree un programa principal que haga lo siguiente: 
• Defina dos objetos de la clase Recta. 
• Lea seis reales desde teclado. 
• Le asigne los tres primeros a los coeficientes de una recta y los otros tres a la segunda recta. 
• Calcule e imprima la pendiente de cada recta aplicando la fórmula: 
	pendiente = - A / B
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Definición de clases:

class Recta {
	public:
		double valor_A = 0;
		double valor_B = 0;
		double valor_C = 0;
};

int main () {
	
	Recta recta_1, recta_2;
	double real_1, real_2, real_3, real_4, real_5, real_6;
	double pendiente_r1, pendiente_r2;
	
	// Entrada de datos:
	
	cout << "Introduzca seis números reales separados por un espacio: ";
	cin >> real_1;
	cin >> real_2;
	cin >> real_3;
	cin >> real_4;
	cin >> real_5;
	cin >> real_6;
	
	// Asignación de valores a la rectas:
	
	recta_1.valor_A = real_1;
	recta_1.valor_B = real_2;
	recta_1.valor_C = real_3;
	
	recta_2.valor_A = real_4;
	recta_2.valor_B = real_5;
	recta_2.valor_C = real_6;
	
	// Cálculo de la pendiente de ambas rectas:
	
	pendiente_r1 = - recta_1.valor_A / recta_1.valor_B;
	pendiente_r2 = - recta_2.valor_A / recta_2.valor_B;
	
	// Salida de datos:
	
	cout << "La pendiente de la primera recta vale: " << pendiente_r1 << "\n";
	cout << "La pendiente de la segunda recta vale: " << pendiente_r2 << "\n\n";
	
	system ("pause");
	
}
