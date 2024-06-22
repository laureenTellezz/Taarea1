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

    //Ejercicio 3
    int numVertices = 6;

    vector<vector<int>> adjacencyList(numVertices);

    adjacencyList[0].push_back(4);
    adjacencyList[0].push_back(5);
    adjacencyList[1].push_back(4);
    adjacencyList[1].push_back(5);
    adjacencyList[1].push_back(6);
    adjacencyList[2].push_back(4);
    adjacencyList[2].push_back(5);
    adjacencyList[2].push_back(6);
    adjacencyList[3].push_back(4);
    adjacencyList[3].push_back(5);
    adjacencyList[3].push_back(6);

    for (int i = 0; i < numVertices; i++) {
        cout << "Vertex " << i + 1 << ": ";
        for (int j = 0; j < adjacencyList[i].size(); j++) {
            cout << adjacencyList[i][j] + 1 << " ";
        }
        cout << endl;
    }


    return 0;
}
