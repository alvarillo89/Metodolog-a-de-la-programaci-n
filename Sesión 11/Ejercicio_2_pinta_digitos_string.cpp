///////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Construya la función con cabecera: string Digitos (int n) para que extraiga 
en un string los dígitos del número n tal y como se indica en el ejercicio 
27 de la relación de problemas II.
*/
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Función para contar el número de dígitos de un entero:

int CuentaDigitos (int n) {
	int numero_digitos = 0;
	
	while (n != 0) {
		n /= 10;
		numero_digitos ++;
	}
	return numero_digitos;
}

// Función para separar por espacios los dígitos de un entero:

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
	
	cout << "Introduzca un número entero: ";
	cin >> n;
	cout << "\n" << Digitos(n) << "\n\n";
	
	system("pause");
	
}
	
	
		
	
		
	

