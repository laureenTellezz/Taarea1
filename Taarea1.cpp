#include "Grafo.h"
#include <iostream>

int main() {
    int vertices, aristas;

    cout << "Ingrese el numero de vertices: ";
    cin >> vertices;

    cout << "Ingrese el numero de aristas: ";
    cin >> aristas;

    Grafo g(vertices);

    g.leerDatos(aristas);
    g.mostrarAdyacencias();

    return 0;
}
