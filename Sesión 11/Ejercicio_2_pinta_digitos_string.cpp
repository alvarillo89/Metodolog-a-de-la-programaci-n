///////////////////////////////////////////////////////////////////////////////
/*
Programador: �lvaro Fern�ndez Garc�a.
Construya la funci�n con cabecera: string Digitos (int n) para que extraiga 
en un string los d�gitos del n�mero n tal y como se indica en el ejercicio 
27 de la relaci�n de problemas II.
*/
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Funci�n para contar el n�mero de d�gitos de un entero:

int CuentaDigitos (int n) {
	int numero_digitos = 0;
	
	while (n != 0) {
		n /= 10;
		numero_digitos ++;
	}
	return numero_digitos;
}

// Funci�n para separar por espacios los d�gitos de un entero:

string Digitos (int n) {
	string numero_separado, numero_extraido;
	int copia_n = n;
	int cifra_extraida;
	int potencia_diez = pow(10, CuentaDigitos(copia_n) - 1);
	
	while (potencia_diez != 0) {
		cifra_extraida = n / potencia_diez;
		n %= potencia_diez;
		potencia_diez /= 10;
		numero_extraido = to_string(cifra_extraida);
		numero_separado = numero_separado + numero_extraido + "   "; 
	}
	
	return numero_separado;
}

int main () {
	int n;
	
	cout << "Introduzca un n�mero entero: ";
	cin >> n;
	cout << "\n" << Digitos(n) << "\n\n";
	
	system("pause");
	
}
	
	
		
	
		
	

