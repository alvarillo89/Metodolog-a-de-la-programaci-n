//* Programa establecido para calcular el área y la longitud de una circunferencia *//

#include <iostream>
#include <cmath>

using namespace std;

double radio;			// Variable: Radio de la ciurcenferencia.
double longitud;		// Variable: Longitud de la circunferencia.
double area;			// Variable: Área de la circunferencia.

int main(){
	cout << "Inserte el valor del Radio: ";
	cin >> radio;
	
	longitud = 2 * 3.14 * radio;
	area = 3.14 * radio * radio;
	
	cout << "La longitud de la circunferencia es: " << longitud <<"\n";
	cout << "El area de la circunferencia es: " << area <<"\n\n";
	
	system ("pause");
}
