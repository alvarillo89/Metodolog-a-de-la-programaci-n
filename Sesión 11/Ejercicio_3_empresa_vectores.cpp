/////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Recupere la soluci�n del ejercicio 28 (ventas de empresa) de la relaci�n de problemas III. Resuelva 
el problema pedido (calcular la sucursal con mayor n�mero de ventas) pero ahora considere que no conoce 
a priori el n�mero de sucursales que hay, aunque sabe que los c�digos de �stas siempre son n�meros 
entre 1 y 100 y que en total no hay m�s de 100 sucursales. Por lo tanto, tendr� que a�adir como dato 
miembro de la clase, un vector con un tama�o m�ximo de 100. Cree un programa principal de prueba.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

const int TERMINADOR = -1;

class Ventas {
	private:
		static const int MAX_SUCURSALES = 100;
		int sucursales[MAX_SUCURSALES];
		int ventas[MAX_SUCURSALES];
		int total_utilizadas = 0;
		
		// M�todo para asegurar que la posici�n del vector es correcta:
		
		bool PosicionCorrecta(int posicion) {
			return 0 <= posicion && posicion < total_utilizadas;
		}
	
		// M�todo que asegura que la sucursal introducida es correcta.
		
		bool SucursalCorrecta (int sucursal) {
			bool es_correcta = false;
			
			for (int i = 0 ; i < total_utilizadas ; i ++) {
				if (sucursal == sucursales[i])
					es_correcta = true;
			}
			return es_correcta;
		}
		
		// M�todo que asegura que el c�digo del producto vendido es correcto.
		
		bool CodigoCorrecto (char codigo) {
			return !(codigo != 'a' && codigo != 'b' && codigo != 'c');
		}
			
	public:
	
		// M�todo para a�adir sucursales al vector:
			
		void AniadeSucursal (int sucursal) {
			sucursales[total_utilizadas] = sucursal;
			total_utilizadas ++;
		}
		
		// M�todo para inicializar las unidades vendidas:
		
		void InicializaUnidades () {
			for (int i = 0 ; i < MAX_SUCURSALES ; i++) {
				ventas[i] = 0;
			}
		}
		
		// M�todo para modificar las unidades vendidas:
		
		void ModificaVentas (int posicion, int valor) {
			if(PosicionCorrecta(posicion))
				ventas[posicion] += valor;
		}
				
		// M�todo que actualiza las unidades vendidas de cada sucursal.
		
		void ActualizaUnidadesVendidas (int sucursal, int unidades_vendidas, char codigo_producto) {
			int posicion = 0;
			
			if (SucursalCorrecta (sucursal) &&  CodigoCorrecto (codigo_producto)) {
				while (sucursal != sucursales[posicion] && posicion < total_utilizadas) {
					posicion ++;
				}
			ModificaVentas(posicion, unidades_vendidas);
			}
		}
	
		// M�todo que comprueba cual es la sucursal con mayor ventas:
		
		int PosicionMasVentas () {
			int posicion = 0;
			int maximo = ventas[posicion];
			int posicion_maximo;
			
			while (posicion < total_utilizadas) {
				if (ventas[posicion] > maximo)
					maximo = ventas[posicion];
				posicion ++;
			}
			
			posicion = 0;			
			
			while (posicion < total_utilizadas) {
				if (ventas[posicion] == maximo) 
					posicion_maximo = posicion;
				posicion ++;
			}
			return posicion_maximo;
		}
		
		// M�todos para obtener las unidades vendidas de cada sucursal y la sucursal:
		
		int GetUnidadesSucursal (int posicion) {
			return ventas[posicion];
		}
		
		int GetSucursal (int posicion) {
			return sucursales[posicion];
		}
		
		int GetTotalUtilizados() {
			return total_utilizadas;
		}
};

int main () {
	Ventas ventas_empresa;
	int sucursal, unidades;
	char codigo_producto;
	bool existe_sucursal = false;
	int i;
	
	// Inicializacion de las unidades vendidas a 0:

	ventas_empresa.InicializaUnidades();
	
	// Entrada de datos:
	
	cout << "Introduzca el c�digo de la sucursal: ";
	cin >> sucursal;

	while (sucursal != TERMINADOR) {
		
		// Comprobaci�n de si la sucursal introducida existe o no:
		
		for (i = 0 ; i < ventas_empresa.GetTotalUtilizados() && existe_sucursal != true ; i ++) {
			if (ventas_empresa.GetSucursal(i) == sucursal)
				existe_sucursal = true;
		}
			
		if (! existe_sucursal)
			ventas_empresa.AniadeSucursal(sucursal);
			
		// Resto de la entrada de datos y actualizacion de las unidades vendidas:	
			
		cout << "Introduzca el c�digo del producto: ";
		cin >> codigo_producto;
		cout << "Introduzca el n�mero de unidades: ";
		cin >> unidades;
		ventas_empresa.ActualizaUnidadesVendidas(sucursal, unidades, codigo_producto);
		
		cout << "Introduzca el c�digo de la sucursal: ";
		cin >> sucursal;
		
	}
		
	// Salida de datos:
		
	cout << "La sucursal con el mayor n�mero de ventas es: " << ventas_empresa.GetSucursal(ventas_empresa.PosicionMasVentas());
	cout << " con " << ventas_empresa.GetUnidadesSucursal(ventas_empresa.PosicionMasVentas()) << " ventas.\n\n";
	
	system ("pause");
			
	}
