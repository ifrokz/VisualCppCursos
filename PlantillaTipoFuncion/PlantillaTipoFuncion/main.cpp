#include <iostream>

using namespace std;

template<class TIPOD>
void mostrarAbs(TIPOD);

int main() {
	int n1 = 32;
	int n2 = -16;

	float n3 = 32.32;
	float n4 = -16.16;

	double n5 = 65.656565;
	double n6 = -43.434343;

	mostrarAbs(n1);
	mostrarAbs(n2);

	mostrarAbs(n3);
	mostrarAbs(n4);

	mostrarAbs(n5);
	mostrarAbs(n6);

	system("pause");
	return 0;
}

template<class TIPOD>
void mostrarAbs(TIPOD numero) {
	if (numero < 0) {
		numero *= -1;
	}

	cout << "El valor absoluto del numero es: " << numero << endl;
}