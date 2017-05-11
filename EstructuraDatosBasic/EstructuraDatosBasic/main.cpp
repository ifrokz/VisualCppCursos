#include <iostream>
using namespace std;

struct albumes_artista{
	char titulo[30];
	int nCanciones;
};

struct artista {
	char name[30];
	int edad;
	struct albumes_artista albumes;
};

int main() {
	struct artista rels = { "RelsB", 24,  { "Nueva generacion", 4 } };

	cout << rels.albumes.nCanciones << endl;

	system("pause");
	return 0;
}