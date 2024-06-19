#ifndef ___GRAFO_H___
#define ___GRAFO_H___

#include <vector>
#include <iostream>
using namespace std;

class Grafo {
public:
	Grafo(int vertices) : numVertices(vertices), listaAdyacencia(vertices + 1) {}

	void agregarArista(int inicio, int fin) {
		listaAdyacencia[inicio].push_back(fin);
		listaAdyacencia[fin].push_back(inicio);
	}

	void mostrarAdyacencias() {
		for (int i = 1; i <= numVertices; i++) {
			cout << "Vertice Ad " << i << "--->";
			for (int adyacente : listaAdyacencia[i]) {
				cout << adyacente << " ";
			}
			cout << endl;
		}
	}

private:
	int numVertices;
	vector<vector<int>> listaAdyacencia;
};

#endif
