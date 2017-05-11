#include <iostream>

using namespace std;

struct Persona {
	char nombre[30];
	int edad;
}pl;

void pedirDatos();
void mostrarDatos(Persona);

int main() {

	pedirDatos();

	mostrarDatos(pl);

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Digita tu nombre: " << endl;
	cin.getline(pl.nombre, 30);
	cout << "Digita tu edad: " << endl;
	cin >> pl.edad;
}

void mostrarDatos(Persona p) {
	cout << "Eres " << p.nombre << " y tu edad es " << p.edad << "." << endl;
}