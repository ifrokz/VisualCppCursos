#include <iostream>

using namespace std;

void setNewVal(int &, int);

int main() {
	int n = 10;

	setNewVal(n,67);

	cout << "El n�mero ahora vale " << n << " fuera de la funci�n " << endl;
	
	system("pause");
	return 0;
}

void setNewVal(int &n, int setN) {
	cout << "N�mero ingresado: " <<n << endl;
	n = setN;

	cout << "El n�mero ahora vale " << n << " dentro de la funci�n " << endl;
}
