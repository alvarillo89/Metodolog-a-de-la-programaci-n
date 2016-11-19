//////////////////////////////////////////////////////
/* 
Programador: Álvaro Fernández García.
Clase para representar la tracción de un bicicleta.
*/
//////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Bicicleta {
	private:
		int estrella = 1;
		int pinion = 1;
	
	public:		
		
		// Métodos para controlar los riesgos:
		
		bool PosicionCorrectaEstrella (int estrella_temporal) {
			return 1 <= estrella_temporal && estrella_temporal <= 3;
		}
		
		bool PosicionCorrectaPinion (int pinion_temporal) {
			return 1 <= pinion_temporal && pinion_temporal <= 7;
		}
		
		bool Riesgo1 (int estrella_temporal, int pinion_temporal){
			return !(estrella_temporal == 1 && pinion_temporal >= 5);
		}
		
		bool Riesgo2 (int estrella_temporal, int pinion_temporal){
			return !(estrella_temporal == 2 && (pinion_temporal == 1 || pinion_temporal == 7));
		}
		
		bool Riesgo3 (int estrella_temporal, int pinion_temporal){
			return !(estrella_temporal == 3 && pinion_temporal <= 3);
		}
				
		// Método para aplicar la modificación al piñon o a la estrella:
		
		void CambioPinionEstrella (char engranaje, char modificacion) {
			int traccion_provisional;
				
			if (engranaje == 'E') {
					if (modificacion == 'S') {
					traccion_provisional = estrella + 1;
					
					if (PosicionCorrectaEstrella(traccion_provisional) && 
						 Riesgo1(traccion_provisional, pinion) &&
						 Riesgo2(traccion_provisional, pinion) && 
						 Riesgo3(traccion_provisional, pinion))
							estrella = traccion_provisional;
				}
				if (modificacion == 'B') {
					traccion_provisional = estrella - 1;
					
					if (PosicionCorrectaEstrella(traccion_provisional) && 
						 Riesgo1(traccion_provisional, pinion) &&
						 Riesgo2(traccion_provisional, pinion) && 
						 Riesgo3(traccion_provisional, pinion))
							estrella = traccion_provisional;
				}
			}
			if (engranaje == 'P') {
				if (modificacion == 'S') {
					traccion_provisional = pinion + 1;
					
					if (PosicionCorrectaPinion(traccion_provisional) && 
						 Riesgo1(estrella, traccion_provisional) &&
						 Riesgo2(estrella, traccion_provisional) && 
						 Riesgo3(estrella, traccion_provisional))
							pinion = traccion_provisional;
				}
				if (modificacion == 'B') {
					traccion_provisional = pinion - 1;
					
					if (PosicionCorrectaPinion(traccion_provisional) && 
						 Riesgo1(estrella, traccion_provisional) &&
						 Riesgo2(estrella, traccion_provisional) && 
						 Riesgo3(estrella, traccion_provisional))
							pinion = traccion_provisional;
				}
				if (modificacion == 'T') {
					traccion_provisional = pinion + 2;
					
					if (PosicionCorrectaPinion(traccion_provisional) && 
						 Riesgo1(estrella, traccion_provisional) &&
						 Riesgo2(estrella, traccion_provisional) && 
						 Riesgo3(estrella, traccion_provisional))
							pinion = traccion_provisional;
				}			
				if (modificacion == 'C') {
					traccion_provisional = pinion - 2;
					
					if (PosicionCorrectaPinion(traccion_provisional) && 
						 Riesgo1(estrella, traccion_provisional) &&
						 Riesgo2(estrella, traccion_provisional) && 
						 Riesgo3(estrella, traccion_provisional))
							pinion = traccion_provisional;
				}
			}
		}
				
		// Métodos para obtener el valor del piñón y la estrella:
		
		int GetEstrella() {
			return estrella;
		}
		
		int GetPinion() {
			return pinion;
		}
		
	};
	
	int main () {
		Bicicleta una_bicicleta;
		char engranaje, modificacion;
		const char TERMINADOR = '#';
		
		cin >> engranaje;
		
		while (engranaje != TERMINADOR) {
			cin >> modificacion;
			una_bicicleta.CambioPinionEstrella(engranaje, modificacion);
			cin >> engranaje;
		}
		
		cout << "Estrella = " << una_bicicleta.GetEstrella() << "\n";
		cout << "Piñón = " << una_bicicleta.GetPinion() << "\n\n";
		
		system ("pause");
		
	}
