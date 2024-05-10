/*
/*@ <authors>
 *
 * Daniel Barroso Casado
 *
 * Usuario del juez: F07
 *
 *@ </authors>*/

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

bool esValida(vector<bool> const& marcas, const int i) {

    return !marcas[i];
}

void dyv(vector<vector<int>> const& v, const int n, const int m, const int k, vector<bool>& marcas, vector<int>const& mejSol, vector<int>& solucion, int &mx, int sat) {


    for (int i = 0; i < m; i++) {

        solucion[k] = v[k][i];
        sat += solucion[k];

        if (esValida(marcas, i)) {

            if (k == n - 1) {

                if (sat > mx) mx = sat;
            }
            else if(sat + mejSol[k + 1] > mx) {

                marcas[i] = true;

                dyv(v, n, m, k + 1, marcas, mejSol, solucion, mx, sat);

                marcas[i] = false;
            }

        }

        sat -= solucion[k];
        
    }
}

int resolver(vector<vector<int>> const& v, const int n, const int m, vector<int>const& mejSol) {

    vector<int> sol(n);
    vector<bool> marcas(m, false);
    int mx = 0;

    dyv(v, n, m, 0, marcas, mejSol, sol, mx, 0);

    return mx;
}

bool resuelveCaso() {

    // leer los datos de la entrada

    int m, n;

    cin >> m >> n;

    if (!std::cin)  // fin de la entrada
        return false;

    // resolver el caso posiblemente llamando a otras funciones

    vector<vector<int>> v(n, vector<int>(m));
    vector<int> mejSol(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];

            if (v[i][j] > mejSol[i]) {
                mejSol[i] = v[i][j];
            }
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        mejSol[i] += mejSol[i + 1];
    }

    cout << resolver(v, n, m, mejSol) << "\n";
    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-13.txt");
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