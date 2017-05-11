#include <iostream>

using namespace std;

void ejemplo();
void recorrerArregloPunteros(int num[]);

int main() {
	//ejemplo();
	int num[] = { 9,1,2,3,4 };
	recorrerArregloPunteros(num);
	system("pause");

	return 0;
}

void recorrerArregloPunteros(int num[]) {

	int *dir_num = &num[0];

	for (int i = 0; i < 5; i++) {
		cout << "Elemento del vector [" << i << "]:" << *dir_num++ << endl;
	}
	dir_num = &num[0]; cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Elemento del vector [" << i << "]:" << dir_num++ << endl;
	}
}

void ejemplo() {
	int num[] = { 0,1,2,3,4,5,6,7,8,9,10,12,15,18,9889 };
	int *dirnum = &num[0];

	for (int i = 0; i <15; i++) {
		cout << "El número con el índice [" << i << "] con valor de:" << *dirnum << " es ";
		if (*dirnum++ % 2 == 0) {
			cout << "par" << endl;
		}
		else {
			cout << "impar" << endl;
		}
	}
	dirnum = &num[0];
}