#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *& pila, int n);
void sacaPila(Nodo *& pila, int &n);

int main() {
	Nodo *pila = NULL;
	int dato;
	cout << "Agrega una elemento a la pila: " << endl;
	cin >> dato;
	agregarPila(pila, dato);

	cout << "Agrega una elemento a la pila: " << endl;
	cin >> dato;
	agregarPila(pila, dato);

	cout << "\nLos elementos de la pila son:"<< endl;
	while (pila != NULL) {
		sacaPila(pila,dato);
		if (pila != NULL) {
			cout << dato << ", ";
		}
		else {
			cout << dato << "." << endl;
		}
	}
	system("pause");
	return 0;
}

void agregarPila(Nodo *& pila, int n) {
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}

void sacaPila(Nodo *& pila, int &n) {
	Nodo *aux = pila;
	n = pila->dato;
	pila = aux->siguiente;
	delete aux;
};
