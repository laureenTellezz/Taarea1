#include "Grafo.h"
#include <iostream>

int main() {
    Grafo g(4);

    //Ejercicio 1
    g.agregarArista(1, 2);
    g.agregarArista(1, 3);
    g.agregarArista(1, 4);
    g.agregarArista(2, 3);
    g.agregarArista(2, 4);
    g.agregarArista(3, 4);

    g.mostrarAdyacencias();

    return 0;
}
