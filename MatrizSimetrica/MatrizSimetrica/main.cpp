#include <cstdlib>
#include <iostream>

using namespace std;

void simetrica(int[3][3], int, int);

int main(int argc, char** argv) {
	const int nCol = 3;
	const int nRow = 3;

	int matz[nRow][nCol] = {
		{ 2,1,3 },
		{ 1,8,7 },
		{ 3,7,10 } };
	simetrica(matz, nRow, nCol);

	system("pause");
	return 0;
}

void simetrica(int arr[3][3], int row, int col) {
	bool iguales = true;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] != arr[j][i])iguales = false;
		}
	}
	iguales ? cout << "Iguales" : cout << "Diferentes";
	cout << endl;
}
