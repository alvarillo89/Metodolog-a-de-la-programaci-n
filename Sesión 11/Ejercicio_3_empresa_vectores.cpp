/////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Recupere la solución del ejercicio 28 (ventas de empresa) de la relación de problemas III. Resuelva 
el problema pedido (calcular la sucursal con mayor número de ventas) pero ahora considere que no conoce 
a priori el número de sucursales que hay, aunque sabe que los códigos de éstas siempre son números 
entre 1 y 100 y que en total no hay más de 100 sucursales. Por lo tanto, tendrá que añadir como dato 
miembro de la clase, un vector con un tamaño máximo de 100. Cree un programa principal de prueba.
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
		
		// Método para asegurar que la posición del vector es correcta:
		
		bool PosicionCorrecta(int posicion) {
			return 0 <= posicion && posicion < total_utilizadas;
		}
	
		// Método que asegura que la sucursal introducida es correcta.
		
		bool SucursalCorrecta (int sucursal) {
			bool es_correcta = false;
			
			for (int i = 0 ; i < total_utilizadas ; i ++) {
				if (sucursal == sucursales[i])
					es_correcta = true;
			}
			return es_correcta;
		}
		
		// Método que asegura que el código del producto vendido es correcto.
		
		bool CodigoCorrecto (char codigo) {
			return !(codigo != 'a' && codigo != 'b' && codigo != 'c');
		}
			
	public:
	
		// Método para añadir sucursales al vector:
			
		void AniadeSucursal (int sucursal) {
			sucursales[total_utilizadas] = sucursal;
			total_utilizadas ++;
		}
		
		// Método para inicializar las unidades vendidas:
		
		void InicializaUnidades () {
			for (int i = 0 ; i < MAX_SUCURSALES ; i++) {
				ventas[i] = 0;
			}
		}
		
		// Método para modificar las unidades vendidas:
		
		void ModificaVentas (int posicion, int valor) {
			if(PosicionCorrecta(posicion))
				ventas[posicion] += valor;
		}
				
		// Método que actualiza las unidades vendidas de cada sucursal.
		
		void ActualizaUnidadesVendidas (int sucursal, int unidades_vendidas, char codigo_producto) {
			int posicion = 0;
			
			if (SucursalCorrecta (sucursal) &&  CodigoCorrecto (codigo_producto)) {
				while (sucursal != sucursales[posicion] && posicion < total_utilizadas) {
					posicion ++;
				}
			ModificaVentas(posicion, unidades_vendidas);
			}
		}
	
		// Método que comprueba cual es la sucursal con mayor ventas:
		
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
		
		// Métodos para obtener las unidades vendidas de cada sucursal y la sucursal:
		
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
	
	cout << "Introduzca el código de la sucursal: ";
	cin >> sucursal;

	while (sucursal != TERMINADOR) {
		
		// Comprobación de si la sucursal introducida existe o no:
		
		for (i = 0 ; i < ventas_empresa.GetTotalUtilizados() && existe_sucursal != true ; i ++) {
			if (ventas_empresa.GetSucursal(i) == sucursal)
				existe_sucursal = true;
		}
			
		if (! existe_sucursal)
			ventas_empresa.AniadeSucursal(sucursal);
			
		// Resto de la entrada de datos y actualizacion de las unidades vendidas:	
			
		cout << "Introduzca el código del producto: ";
		cin >> codigo_producto;
		cout << "Introduzca el número de unidades: ";
		cin >> unidades;
		ventas_empresa.ActualizaUnidadesVendidas(sucursal, unidades, codigo_producto);
		
		cout << "Introduzca el código de la sucursal: ";
		cin >> sucursal;
		
	}
		
	// Salida de datos:
		
	cout << "La sucursal con el mayor número de ventas es: " << ventas_empresa.GetSucursal(ventas_empresa.PosicionMasVentas());
	cout << " con " << ventas_empresa.GetUnidadesSucursal(ventas_empresa.PosicionMasVentas()) << " ventas.\n\n";
	
	system ("pause");
			
	}
