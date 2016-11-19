/////////////////////////////////////////
/*
Programador: Álvaro Fernández García.
Ejercicio Login.
*/
/////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

class Login {
	private:
		int num_caracteres_a_leer;
	
	public:
		
		// Constructor:
		
		Login (int num_caracteres)
			:num_caracteres_a_leer(num_caracteres)
		{}
		
		// Método para obtener el nombre de usuario:
		
		string Codifica (string nombre_completo) {
			string palabra_extraida, nombre_sugerido;
			int dcha = 0, izqa = 0, i, j, k, siguiente;
			const char SEPARADOR = ' ';
			
			for (i = 0 ; i < nombre_completo.size() ; i ++) {
				if (nombre_completo[i] == SEPARADOR){
					izqa ++;
					dcha ++;
				}
				else {
					siguiente = dcha + 1;
					if (siguiente == nombre_completo.size() || nombre_completo[siguiente] == SEPARADOR) {
						for(j = izqa ; j <= dcha ; j ++) {
							palabra_extraida.push_back(tolower(nombre_completo[j]));
						}
						if (palabra_extraida.size() < num_caracteres_a_leer)
							nombre_sugerido += palabra_extraida;
						else
							for (k = 0 ; k < num_caracteres_a_leer ; k++) {
								nombre_sugerido.push_back(palabra_extraida[k]);
							}
						palabra_extraida = "";
						izqa = dcha = siguiente;					
					}
					else
						dcha ++;
				}
			}
			
			return nombre_sugerido;					
		}
};
		
int main () {
	string nombre;
	char caracter;
	int numero_caracteres;
	const char TERMINADOR = '#';
	
	// Entrada de datos:
	
	cout << "Introduzca el número de carácteres sugeridos: ";
	cin >> numero_caracteres;
	
	Login nombre_usuario(numero_caracteres);
	
	cout << "Introduzca su nombre:\n";
	caracter = cin.get();
	
	while (caracter != TERMINADOR) {
		nombre.push_back(caracter);
		caracter = cin.get();
	}
	
	// Salida de datos y cómputos: 
	
	cout << "Su nombre de usuario es:" << nombre_usuario.Codifica(nombre) << "\n\n";
	
	system("pause");

}
