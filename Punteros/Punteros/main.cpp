#include <iostream>

using namespace std; 


void declararPunteros();

int main() {
	declararPunteros();

	system("pause");

	return 0;
}

void declararPunteros() {
	int num, *dir_num;

	num = 20;
	dir_num = &num;

	cout << "N�mero: " << *dir_num << endl;
	cout << "Posici�n de memoria: " << dir_num << endl;
}