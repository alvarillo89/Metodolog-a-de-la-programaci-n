/////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Implementar los métodos de la clase Ventas del ejercicio anterior.
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
		
		Ventas (int sucursal_1, int sucursal_2, int sucursal_3) {
			codigo_sucursal_1 = sucursal_1;
			codigo_sucursal_2 = sucursal_2;
			codigo_sucursal_3 = sucursal_3;
		}
		
		// Método que asegura que la sucursal introducida es correcta.
		
		bool SucursalCorrecta (int sucursal) {
			return !(sucursal != codigo_sucursal_1 && sucursal != codigo_sucursal_2 &&
					 sucursal != codigo_sucursal_3); 
		}
		
		// Método que asegura que el código del producto vendido es correcto.
		
		bool CodigoCorrecto (char codigo) {
			return !(codigo != 'a' && codigo != 'b' && codigo != 'c');
		}
			
		// Método que actualiza las unidades vendidas de cada sucursal.
		
		void ActualizaUnidadesVendidas (int sucursal, int unidades_vendidas, char codigo_producto) {
		
			if (SucursalCorrecta (sucursal) &&  CodigoCorrecto (codigo_producto)) {
				if (sucursal == codigo_sucursal_1)
					unidades_1 = unidades_1 + unidades_vendidas;
				else if (sucursal == codigo_sucursal_2)
					unidades_2 = unidades_2 + unidades_vendidas;
				else
					unidades_3 = unidades_3 + unidades_vendidas;
			}
		}
	
		// Métodos para obtener las unidades vendidas de cada sucursal y la sucursal:
		
		int GetUnidadesSucursal1 () {
			return unidades_1;
		}
		
		int GetUnidadesSucursal2 () {
			return unidades_2;
		}
		
		int GetUnidadesSucursal3 () {
			return unidades_3;
		}
		
		int GetSucursal1 () {
			return codigo_sucursal_1;
		}
		
		int GetSucursal2 () {
			return codigo_sucursal_2;
		}
		
		int GetSucursal3 () {
			return codigo_sucursal_3;
		}
			
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
	
	// Cómputos:
	
	cout << "Introduzca una sucursal: ";
	cin >> sucursal; 
	
	while (sucursal != TERMINADOR) { 
		cout << "Introduzca el código del producto: ";
		cin >> codigo_producto; 
		cout << "Introduzca las unidades vendidas: ";
		cin >> unidades_vendidas;
		ventas_empresa.ActualizaUnidadesVendidas(sucursal, unidades_vendidas, codigo_producto);
		cout << "Introduzca una sucursal: ";
		cin >> sucursal;	
	}
	
	if (ventas_empresa.GetUnidadesSucursal1() > ventas_empresa.GetUnidadesSucursal2() &&
		 ventas_empresa.GetUnidadesSucursal1() > ventas_empresa.GetUnidadesSucursal3() ) 
			cout << "La sucursal con más unidades vendidas es la número: " << ventas_empresa.GetSucursal1();
	else if (ventas_empresa.GetUnidadesSucursal2() > ventas_empresa.GetUnidadesSucursal1() &&
		 ventas_empresa.GetUnidadesSucursal2() > ventas_empresa.GetUnidadesSucursal3() ) 
			cout << "La sucursal con más unidades vendidas es la número: " << ventas_empresa.GetSucursal2();
	else 
			cout << "La sucursal con más unidades vendidas es la número: " << ventas_empresa.GetSucursal3();
		
	cout << "\n\n";
	
	system ("pause");
	
}

