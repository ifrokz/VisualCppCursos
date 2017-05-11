#include <iostream>

using namespace std;

void setNewVal(int &, int);

int main() {
	int n = 10;

	setNewVal(n,67);

	cout << "El número ahora vale " << n << " fuera de la función " << endl;
	
	system("pause");
	return 0;
}

void setNewVal(int &n, int setN) {
	cout << "Número ingresado: " <<n << endl;
	n = setN;

	cout << "El número ahora vale " << n << " dentro de la función " << endl;
}
