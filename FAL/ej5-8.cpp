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
#include <climits>
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

bool esValida(const int i, const int k, vector<bool> const& producto, vector<int> const& super) {

    return super[i] < 3 && !producto[k];
}

void supermercado(vector<int>& solucion, vector<vector<int>> const& v, const int n, const int m, const int k, int& min, int coste, vector<bool>& producto, vector<int>& super, vector<int> const& mejSol) {

    for (int i = 0; i < n; i++)
    {
        solucion[k] = v[i][k];
        coste += solucion[k];
        if (esValida(i, k, producto, super)) {

            if (k == m - 1) {

                if (coste < min) min = coste;
            }
            else if(coste + mejSol[k + 1] < min){

                producto[k] = true;
                super[i]++;

                supermercado(solucion, v, n, m, k + 1, min, coste, producto, super, mejSol);

                producto[k] = false;
                super[i]--;

            }
        }
        coste -= solucion[k];
    }
}

int supermercado(vector<vector<int>> const& v, const int n, const int m, vector<int> const& mejSol) {

    vector<int> super(n);
    vector<bool> producto(m);
    vector<int> solucion(m);
    int min = INF;

    supermercado(solucion, v, n, m, 0, min, 0, producto, super, mejSol);
    return min;
}


void resuelveCaso() {

    // leer los datos de la entrada

    int n, m;

    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    vector<int> mejSol(m, INF);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];

            if (v[i][j] < mejSol[j]) {
                mejSol[j] = v[i][j];
            }
        }
    }

    for (int i = m - 2; i >= 0; --i)
        mejSol[i] += mejSol[i + 1];
    // resolver el caso posiblemente llamando a otras funciones

    cout << supermercado(v, n, m, mejSol) << "\n";
    // escribir la solución

}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej5-7.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();

    // para dejar todo como estaba al principio
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif
    return 0;
}*/