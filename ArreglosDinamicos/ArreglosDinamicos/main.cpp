#include <iostream>

using namespace std;


void pidedatos();

int main() {

	pidedatos();

	system("pause");
	return 0;
}

void pidedatos() {
	int numNotas = 0;
	do {
		cout << "cuantas notas va a digitar por persona? " << endl;
		cin >> numNotas;
	} while (numNotas == 0); 
	
	/*int numPersonas;
	cout << "cuantas personas va a calificar? " << endl;
	cin >> numPersonas;*/

	int *notas = new int[numNotas];

	for (int i = 0; i < numNotas;i++) {
		cout << "Introduce la nota numero " << i << endl;
		cin >> notas[i];
	}

	cout << "has introducido " << numNotas << " y la media es de: ";

	int media = 0;
	for (int i = 0; i < numNotas; i++) {
		media += notas[i];
	}

	delete[] notas;

	media /= numNotas;

	cout << media << endl;
}