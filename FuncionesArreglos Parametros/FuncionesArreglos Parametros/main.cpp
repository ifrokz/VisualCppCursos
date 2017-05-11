#include <iostream>

using namespace std;

void pasarArreglo(int[],int);
void cambiarArreglo(int(&)[5],int);

int main(){
	const int tam = 5;
	int numeros[] = {2,45,45,56,6};

	pasarArreglo(numeros, tam);

	cout << " - - - - - " << endl;

	cambiarArreglo(numeros,tam);
	pasarArreglo(numeros, tam);

	system("pause");
	return 0;
}

void pasarArreglo(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}


void cambiarArreglo(int (&arr)[5], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] += arr[i];
	}
}