
#include "Grafo.h"
#include <iostream>

Grafo::Grafo(int vertices) : numVertices(vertices), listaAdyacencia(vertices) {}

void Grafo::agregarBorde(int inicio, int fin) {
	listaAdyacencia[inicio].push_back(fin);
	listaAdyacencia[fin].push_back(inicio);
}

void Grafo::mostrarAdyacencias() {
    for (int i = 1; i <= numVertices; i++) {  
        std::cout << i << ": ";
        for (int adyacente : listaAdyacencia[i]) {
            std::cout << adyacente << " ";
        }
        std::cout << std::endl;
    }
}

