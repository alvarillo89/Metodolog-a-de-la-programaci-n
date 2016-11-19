//////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Buscaminas es un juego muy conocido cuyo objetivo es
encontrar todas las minas existentes en un tablero rectangular, sin abrir ninguna. Si el
jugador abre una mina, pierde la partida.
Se pide definir la clase TableroBuscaMinas conteniendo lo siguiente:
a) Para representar el tablero se trabajar� con una matriz de datos 50 por 30 en la que
todas las filas tienen el mismo n�mero de columnas y los datos son de tipo bool.
Contendr� un valor true en caso de haber una mina en la casilla especificada
y false en caso contrario. Esta matriz ser� un dato miembro de la clase y al
principio, todos los valores estar�n a false.
b) Un m�todo para incluir una mina en una determinada casilla.
c) Un m�todo que reciba las coordenadas (i; j) de una casilla y devuelva un valor
entero que indique el n�mero de minas que rodean a la misma (ser� un n�mero
entre 0 y 8). En caso de que la casilla contenga una mina, se devolver� el valor
-1.
Hay que tener especial cuidado con las casillas que hay en los bordes de la matriz
ya que la casilla en la posici�n [0][0], por ejemplo, s�lo tiene tres vecinos
rode�ndola.
*/
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class TableroBuscaMinas {
	private:
		static const int UTIL_FILAS = 50;
		static const int UTIL_COLUMNAS = 30;
		bool tablero[UTIL_FILAS][UTIL_COLUMNAS] = {{false},{false}};
		
		// M�todo para comprobar que las posiciones de la matriz son correctas:
		
		bool PosicionCorrecta(int fila, int columna) {
			if((0 <= fila && fila < UTIL_FILAS) && (0 <= columna && columna < UTIL_COLUMNAS))
				return true;
			else
				return false;
		}
	
	public:
		// M�todo para a�adir una mina en una casilla:
		
		void IntroduceMina (int fila, int columna) {
			if(PosicionCorrecta(fila, columna))
				tablero[fila][columna] = true;
		}
		
		// M�todo para comprobar las minas:
	
		int MinasCercanas (int fila, int columna) {
			int numero_minas = 0;
			int i, j;
			
			if (PosicionCorrecta(fila, columna) && tablero[fila][columna] == true)
				numero_minas = -1;
			else
				for (i = -1 ; i <= 1 ; i ++) {
					for (j = -1 ; j <= 1 ; j ++) {
						if (PosicionCorrecta(fila + i, columna + j) && !(i == 0 && j == 0)) 
							if (tablero[fila + i][columna + j] == true)
								numero_minas ++;
					}
				}
			return numero_minas;
		}
};

int main () {
	TableroBuscaMinas tablero;
	int fila, columna, numero_minas;
	const int TERMINADOR = -1;
	
	// Entrada de datos:
	
	cout << "Introduzca las coordenadas donde desea colocar una mina: ";
	cin >> fila;
	cin >> columna;
	
	while (fila != TERMINADOR && columna != TERMINADOR) {
		tablero.IntroduceMina(fila, columna);	
		cin >> fila;
		cin >> columna;
	}
	
	cout << "Introduzca las coordenandas que desea comprobar: ";
	cin >> fila;
	cin >> columna;					
	
	// C�mputos:
	
	numero_minas = tablero.MinasCercanas(fila, columna);
	
	// Salida de datos;
	
	cout << "El n�mero de minas cercanas es:\n";
	
	if (numero_minas == -1)
		cout << "La coordenada especificada es una mina.";
	else
		cout << numero_minas;
		
	cout << "\n\n";
	
	system("pause");
	
}
		
		
	
	
