#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

// Prototipos de función.
void insertarCola(Nodo *&frente, Nodo *&fin, int n);
void sacarElemento(Nodo *&frente, Nodo *&fin, int &n);
bool colaVacia(Nodo *frente);

int main() {
	Nodo *frente = NULL;
	Nodo *fin = NULL;

	int dato;

	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente,fin,dato);
	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente, fin, dato);
	cout << "Digite un numero: ";
	cin >> dato;
	insertarCola(frente, fin, dato);

	while (fin != NULL) {
		sacarElemento(frente, fin, dato);
		cout << dato << " ";
	}

	system("pause");
	return 0;
}

// Insertar elementos en una cola.
void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
	Nodo *nuevo_nodo = new Nodo();

	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;

	if (colaVacia(frente)) {
		frente = nuevo_nodo;
	}
	else {
		fin->siguiente = nuevo_nodo;
	}

	fin = nuevo_nodo;

	cout << "Elemento " << n << " insertado correctamente." << endl;
}

// Función para determinar si la cola está vacía o no.
bool colaVacia(Nodo *frente) {
	return(frente == NULL) ? true : false;
}

void sacarElemento(Nodo *&frente, Nodo *&fin, int &n) {
	Nodo *aux = frente;
	n = aux->dato;

	//frente = aux->siguiente;
	if (frente == fin) {
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;
}