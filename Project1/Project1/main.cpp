#include <iostream>

using namespace std;

void mostrarMatriz(int[],int);

int main() {
	const int n = 10;

	int arr[] = {1,2,3,4,5};
	mostrarMatriz(arr, 5);
	
	system("PAUSE");
	return 0;
}

void mostrarMatriz(int m[], int n) {
	for (int i = 0; i < 5; i++) {
		cout << m[i] << endl;
	}
}