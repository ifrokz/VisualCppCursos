#include <iostream>

using namespace std;

void pedirDatos();
void sumarDatos(int **,int **,int, int);
void muestraDatos();

int **arr_1, **arr_2, nFilas,nCol;

int main() {
	pedirDatos();

	muestraDatos();

	sumarDatos(arr_1, arr_2, nFilas, nCol);

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Digita el numero de columnas deseadas: ";
	cin >> nFilas;
	cout << "Digita el numero de columnas deseadas: ";
	cin >> nCol;

	arr_1 = new int*[nFilas];
	arr_2 = new int*[nFilas];

	for (int i = 0; i < nFilas; i++) {
		arr_1[i] = new int[nCol];
		arr_2[i] = new int[nCol];
	}

	cout << "Digita los datos de la primera matriz: " << endl;
	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nCol; j++) {
			cout << "Digita el valor para arr_1["<<i<<"]["<<j<<"]: ";
			cin >> arr_1[i][j];
		}
	}

	cout << "Digita los datos de la segunda matriz: " << endl;
	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nCol; j++) {
			cout << "Digita el valor para arr_2[" << i << "][" << j << "]: ";
			cin >> arr_2[i][j];
		}
	}
}

void sumarDatos(int ** arr1,int **arr2,int nFilas,int nCol) {
	for (int i = 0; i < nFilas; i ++) {
		for (int j = 0; j < nCol; j++) {
			cout << "La suma de arr_1[" << i << "][" << j << "](" << *(*(arr1 + i) + j) << ") + arr_2[" << i << "][" << j << "]("<< *(*(arr2 + i) + j) <<") = " << ( *(*(arr1+i)+j) + *(*(arr2+i)+j)) << endl;
		}
	}
}

void muestraDatos() {
	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nCol; j++) {
			cout << "El valor para arr_1[" << i << "][" << j << "]: " << arr_1[i][j] << " | ";;
		}
		cout << endl;
	}

	cout << "\n - - - - - - - - - " << endl;

	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nCol; j++) {
			cout << "El valor para arr_2[" << i << "][" << j << "]: " << *(*(arr_2+i)+j) << " | ";
		}
		cout << endl;
	}
}