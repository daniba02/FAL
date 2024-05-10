/*
/*@ <authors>
 *
 * Daniel Barroso Casado
 *
 * Usuario del juez: F07
 *
 *@ </authors>

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


/*@ <answer>

 Escribe aquí un comentario general sobre la solución, explicando cómo
 se resuelve el problema y cuál es el coste de la solución, en función
 del tamaño del problema.

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

const int INF = INT_MAX;

bool esValida(const int i, vector<bool>& marcas, const int cont, const int minimo) {

    return !marcas[i] && cont < minimo;
}


void funcionarios(vector<vector<int>> const& matriz, vector<int>& solucion, const int n, const int k, 
    vector<bool> & marcas, int& minimo, int cont, vector<int> const& mejSol) {

    for (int i = 0; i < n; i++)
    {
        solucion[k] = matriz[i][k];
        cont += solucion[k];

        if (esValida(i, marcas, cont, minimo)) {
            if (k == n - 1) {

                if (cont < minimo)  minimo = cont;
                
            }
            else if(cont + mejSol[k + 1] < minimo) {

                marcas[i] = true;

                funcionarios(matriz, solucion, n, k + 1, marcas, minimo, cont, mejSol);

                marcas[i] = false;
            }
        }
        cont -= solucion[k];
    }
}

int funcionarios(vector<vector<int>> const& matriz, const int n, vector<int> const& mejSol) {

    vector<int> sol(n);
    vector<bool> marcas(n, false);
    int minimo = INF;

    funcionarios(matriz, sol, n, 0, marcas, minimo, 0, mejSol);

    return minimo;
}
bool resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;

    if (n == 0) return false;

    // resolver el caso posiblemente llamando a otras funciones

    vector<vector<int>> v(n, vector<int>(n));
    vector<int> mejSol(n, INF);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];

            if (v[i][j] < mejSol[j]) mejSol[j] = v[i][j];
        }
    }

    for (int i = n - 2; i <= 0; i++)
    {
        mejSol[i] += mejSol[i + 1];
    }

    cout << funcionarios(v, n, mejSol) << "\n";

    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("funcionarios.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    while (resuelveCaso());

    // para dejar todo como estaba al principio
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif
    return 0;
}*/