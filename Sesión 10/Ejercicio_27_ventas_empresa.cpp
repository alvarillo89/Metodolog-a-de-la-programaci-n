/////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Recuperad la soluci�n del ejercicio 30 de la Relaci�n de Problemas II (Empresa). Reescribid el 
programa principal usando una clase Ventas para gestionar los c�mputos de las ventas realizadas. 
�nicamente se pide que se indiquen las cabeceras de los m�todos p�blicos de la clase y las llamadas 
a �stos en el programa principal. No hay que implementar ninguno de los m�todos. Debe suponer que 
la clase gestionar� las ventas de exactamente tres sucursales. Los c�digos de dichas sucursales son 
enteros cualesquiera (no necesariamente 1, 2, 3, como ocurr�a en el ejercicio 30 de la Relaci�n de 
Problemas II)
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

const int TERMINADOR = -1;

class Ventas {
	private:
		int codigo_sucursal_1;
		int codigo_sucursal_2;
		int codigo_sucursal_3;
		int unidades_1 = 0;
		int unidades_2 = 0;
		int unidades_3 = 0;
		
	public:
	
		// Constructor:
		
		Ventas (int suscusal_1, sucursal_2, sucursal_3) {}
		
		// M�todo que asegura que la sucursal introducida es correcta.
		
		bool SucursalCorrecta (int sucursal) {}
		
		// M�todo que asegura que el c�digo del producto vendido es correcto.
		
		bool CodigoCorrecto (char codigo) {}
		
		// M�todo que actualiza las unidades vendidas de cada sucursal.
		
		void ActualizaUnidadesVendidas (int sucursal, int unidades_vendidas, char codigo) {}
		
		// M�todos para obtener las unidades vendidas de cada sucursal y la sucursal:
		
		int GetUnidadesSucursal1 () {}
		
		int GetUnidadesSucursal2 () {}
		
		int GetUnidadesSucursal3 () {}
		
		int GetSucursal1() {}
		
		int GetSucursal2() {}
		
		int GetSucrusal3() {}
		
};

int main () {
	int sucursal_1, sucursal_2, sucursal_3;
	char codigo_producto;
	int sucursal, unidades_vendidas;
	
	// Entrada de datos:
	
	cout << "Introduzca las tres sucursales separadas por un espacio: ";
	cin >> sucursal_1;
	cin >> sucursal_2;
	cin >> sucursal_3;
	
	Ventas ventas_empresa (sucursal_1, sucursal_2, sucursal_3);
	
	// C�mputos:
	
	cout << "Introduzca una sucursal: ";
	cin >> sucursal 
	
	while (sucursal != TERMINADOR) { 
		cout << "Introduzca el c�digo del producto: ";
		cin >> codigo_producto; 
		cout << "Introduzca las unidades vendidas: ";
		cin >> unidades_vendidas;
		ventas_empresa.ActualizaUnidadesVendidas(sucursal, unidades_vendidas, codigo_producto);
		cout << "Introduzca una sucursal: ";
		cin >> sucursal;	
	}
	
	if (ventas_empresa.GetUnidadesSucursal1() > ventas_empresa.GetUnidadesSucursal2() &&
		 ventas_empresa.GetUnidadesSucursal1() > ventas_empresa.GetUnidadesSucursal3() ) 
			cout << "La sucursal con m�s unidades vendidas es la n�mero: " << ventas_empresa.GetSucursal1();
	else if (ventas_empresa.GetUnidadesSucursal2() > ventas_empresa.GetUnidadesSucursal1() &&
		 ventas_empresa.GetUnidadesSucursal2() > ventas_empresa.GetUnidadesSucursal3() ) 
			cout << "La sucursal con m�s unidades vendidas es la n�mero: " << ventas_empresa.GetSucursal2();
	else 
			cout << "La sucursal con m�s unidades vendidas es la n�mero: " << ventas_empresa.GetSucursal3();
		
	cout << "\n\n";
	
	system ("pause");
	
}
