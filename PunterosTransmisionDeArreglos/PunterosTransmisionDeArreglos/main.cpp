#include <iostream>

using namespace std;

int hallarMax(int *, int);

int main() {
	const int n = 5;
	int numeros[n] = { 3,5,2,8,9 };

	cout << "El mayor elemento es: " << hallarMax(numeros,n) << endl;

	system("pause");
	return 0;
}

int hallarMax(int *arr,int n) {
	int max = 0;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	
	/* SEGUNDA MANERA DE RESOLVERLO
	for (int i = 0; i < n; i++) {
		cout << "para i = " << i << " arr = " << *arr << endl;
		if (*arr > max) {
			max = *arr;
		}
		arr++;
	}*/

	/* TERCERA MANERA DE RESOLVERLO
	for (int i = 0; i < n; i++) {
		if (*(arr + i) > max) {
			max = *(arr + i);
		}
	}*/

	return max;
}
