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

	cout << "Número: " << *dir_num << endl;
	cout << "Posición de memoria: " << dir_num << endl;
}