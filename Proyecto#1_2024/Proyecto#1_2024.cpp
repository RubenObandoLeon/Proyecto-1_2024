#include <iostream>
using namespace std;

const int Max_peliculas = 10;
const int Max_salas = 5;
const int Max_horarios = 5;
const int Max_asientos = 20;

class PELICULA {
	string titulo;
	int anno;
	int duracion;
	string pais;
	string review;
};
class SALA {
	int numSala;
	int numAsientos;
	float precio;
	char butacas[Max_asientos];
};
class HORARIO{

};
class RESERVA {

};

void impMenu() {
	cout << "\nMENU\n";
	cout << "1. Archivo.\n";
	cout << "2. Mantenimiento.\n";
	cout << "3. Reserva\n";
	cout << "4. Venta\n";
	cout << "5. Salir\n";
	cout << "Seleccione una opción: ";
};
void acercaDe() {
	cout << "\nDesarrollado por: Ruben Obando Leon." << endl;
	cout << "Ced: 116980625" << endl;
};
void impMeMant() {
	cout << "\nMENU DE Mantenimiento:\n";
	cout << "1.Peliculas.\n";
	cout << "2. Salas\n";
	cout << "3. Horarions\n";
	cout << "4. Volver al menú principal\n";
	cout << "Seleccione una opción: ";
};
void mantenimiento() {
	int opMan = 0;
	do {
		impMeMant();
		cin >> opMan;
		switch (opMan) {
		case 1:
			cout << "Peliculas" << endl;
			break;
		case 2:
			cout << "Salas" << endl;
			break;
		case 3:
			cout << "Horarios." << endl;
			break;
		case 4:
			cout << "Volver al menu principal.";
		default:
			cout << "Opción inválida" << endl;
		}
	} while (opMan != 4);
};
void agregarPelicula();
void agregarSala();
void agregarHorario();
void reservar();
void compra();




int main() {

	int opcion;

	do {
		impMenu();
		cin >> opcion;
		switch (opcion){
		case 1:
			acercaDe();
			break;
		case 2:
			mantenimiento();
			break;
		case 3:
			cout << "Reserva";
			break;
		case 4:
			cout << "Venta";
			break;
		case 5:
			return 0;
		default:
			cout << "Registro invalido" << endl;
		}
	} while (opcion != 0);
	return 0;
}