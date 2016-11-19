///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Programador: Álvaro Fernández Gracía.
Definir la clase AlumnoFP, que almacene el nombre, el primer apellido, el DNI del alumno y cada 
una de las partes consideradas en la evaluación de la asignatura: teoría, parcial_pract1, parcial_pract2, 
participación_clase. La escala utilizada para evaluar cada parte es de 0 a 10.
• Construir los constructores necesarios para poder asignar valores a los miembros de la clase. 
• Construir un método que calcule la nota final del alumno. Para ello se debe de tener en cuenta los 
porcentajes de las distintas partes consideradas: 70% teoría, 5% parcial 1, 15% parcial 2 y 10% participación. 
• Construir un método que calcule la nota final del alumno. 
• Construir un programa que lea los datos del alumno y en caso de haber obtenido una nota inferior a 5 en 
alguna de las partes que indique la nota obtenida en dicha parte.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

// Porcentajes:

const double TEORIA = 0.7;
const double PARCIAL_1 = 0.05;
const double PARCIAL_2 = 0.15;
const double PARTICIPACION = 0.1;

class AlumnoFP {
	private:
		string nombre;
		string apellido;
		int DNI = 00000000;
		double teoria = 0;
		double parcial_pract1 = 0;
		double parcial_pract2 = 0;
		double participacion_clase = 0;
	
		// Método que comprueba si la nota es correcta o no:
		
		bool EsCorrectaNota (double nota) {
			return 0 <= nota && nota <= 10;
		}
		
	public:
	
		// Métodos para asignar valores a los datos miembro:
	
		void SetDatosPersonales (string nombre_alumno, string primer_apellido, int Dni) {
			nombre = nombre_alumno;
			apellido = primer_apellido;
			DNI = Dni;
		}
		
		void SetNotas (double nota_parcial_1, double nota_parcial_2, double nota_teoria, double nota_participacion) {
			if (EsCorrectaNota(nota_teoria))
				teoria = nota_teoria;
			if (EsCorrectaNota(nota_parcial_1))
				parcial_pract1 = nota_parcial_1;
			if (EsCorrectaNota(nota_parcial_2))
				parcial_pract2 = nota_parcial_2;
			if (EsCorrectaNota(nota_participacion))
				participacion_clase = nota_participacion;
		}
		
		// Constructor:
		
		AlumnoFP (string alumno, string apellido_alumno, int DNI) {
			SetDatosPersonales(alumno, apellido_alumno, DNI);
		}
		
		// Métodos para visualizar las calificaciones:
		
		double GetTeoria () {
			return teoria;
		}
		
		double GetParcial1 () {
			return parcial_pract1;
		}
		
		double GetParcial2 () {
			return parcial_pract2;
		}
		
		double GetParticipacion () {
			return participacion_clase;
		}
		
		// Método que calcula la nota media del alumno:
		
		double NotaFinalAlumno () {
			return teoria * TEORIA + parcial_pract1 * PARCIAL_1 + parcial_pract2 * PARCIAL_2
					 + participacion_clase * PARTICIPACION;
		}
		
	};
	
	int main () {
		string nombre, apellido;
		int DNI;
		double teoria, parcial_1, parcial_2, participacion;
	
		// Entrada de Datos:
		
		cout << "Introduzca el nombre del alumno: ";
		cin >> nombre;
		cout << "Introduzca el apellido del alumno: ";
		cin >> apellido;
		cout << "Introduzca el DNI del alumno: ";
		cin >> DNI;
		
		AlumnoFP un_alumno (nombre, apellido, DNI);
		
		cout << "Introduzca la nota del examen de teoría: ";
		cin >> teoria;
		cout << "Introduzca la nota del primer examen práctico: ";
		cin >> parcial_1;
		cout << "Introduzca la nota del segundo examen práctico: ";
		cin >> parcial_2;
		cout << "Introduzca la nota de participación: ";
		cin >> participacion;
		
		un_alumno.SetNotas(parcial_1, parcial_2, teoria, participacion);
		
		// Computos y salida de datos:
		
		cout << "\nExámenes suspensos: ";
		
		if (un_alumno.GetTeoria() < 5)
			cout << "\nTeoría con un " << un_alumno.GetTeoria();
		if (un_alumno.GetParcial1() < 5 )
			cout << "\nPrimer parcial con un " << un_alumno.GetParcial1();
		if (un_alumno.GetParcial2() < 5 ) 
			cout << "\nSegundo parcial con un " << un_alumno.GetParcial2();
		if (un_alumno.GetParticipacion() < 5)
			cout << "\nParticipación con un " << un_alumno.GetParticipacion();
		
		cout << "\n\n";
		
		system ("pause");
		
	}
