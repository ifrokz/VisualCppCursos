#include <iostream>

using namespace std;

void intercambio(float *, float *);

int main() {
	float num1 = 20.8, num2 = 6.78;

	cout << "numero1: " << num1 << endl;
	cout << "numero2: " << num2 << endl;

	intercambio(&num1, &num2);

	cout << "nuevo numero1: " << num1 << endl;
	cout << "nuevo numero2: " << num2 << endl;


	system("pause");
	return 0;
}

void intercambio(float *dir1, float *dir2) {
	float aux;

	aux = *dir1;
	*dir1 = *dir2;
	*dir2 = aux;
}

/* FORMA 2 DE RESOLVERLO
void intercambio(float &, float &);

int main() {
	float num1 = 20.8, num2 = 6.78;

	cout << "numero1: " << num1 << endl;
	cout << "numero2: " << num2 << endl;

	intercambio(num1, num2);

	cout << "nuevo numero1: " << num1 << endl;
	cout << "nuevo numero2: " << num2 << endl;


	system("pause");
	return 0;
}

void intercambio(float &dir1, float &dir2) {
	float aux;

	aux = dir1;
	dir1 = dir2;
	dir2 = aux;
}*/