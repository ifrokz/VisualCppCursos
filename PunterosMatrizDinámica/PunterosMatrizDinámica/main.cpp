#include <iostream>


using namespace std;

void pedirDatos();
void mostrarDatos(int **, int,int);
void liberarMemoria();

int **puntero_matriz,nFilas,nCol;

int main() {
	pedirDatos();
	mostrarDatos(puntero_matriz,nFilas,nCol);
	liberarMemoria();

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Digita le numero de filas: ";
	cin >> nFilas;
	cout << "Digite el numero de columnas: ";
	cin >> nCol;

	puntero_matriz = new int*[nFilas]; // Reservando memoria para las filas.
	for (int i = 0; i < nFilas; i++) {
		puntero_matriz[i] = new int[nCol];
	}

	cout << "\nDigitando elementos de la matriz: " << endl;
	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nCol; j++) {
			cout << "digite un numero[" << i << "][" << j << "]: ";
			cin >> puntero_matriz[i][j];
		}
	}
}

void mostrarDatos(int **puntero_matriz,int nFilas, int nCol) {
	cout << "\n\nImprimiendo matriz:\n";
	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nCol; j++) {
			cout << puntero_matriz[i][j] << " ";
		}
		cout << endl;
	}
}

void liberarMemoria() {
	for (int i = 0; i < nFilas; i++) {
		delete[] puntero_matriz[i];
	}

	delete[] puntero_matriz;

	cout << "\nSe ha liberado la memoria";
}
