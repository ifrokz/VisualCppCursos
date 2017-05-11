#include <iostream>

using namespace std;

void param(int *,int );

int main() {
	int arr[] = {0,1,2,3,4};
	const int n = 5;

	int *pos = &arr[0];

	param(pos, n);

	system("pause");
	return 0;
}

void param(int *num, int n) {
	for (int i = 0; i < n; i++) {
		cout << num[i] << endl;
		num[i]++;
	}
}