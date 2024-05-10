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

 Escribe aqu� un comentario general sobre la soluci�n, explicando c�mo
 se resuelve el problema y cu�l es el coste de la soluci�n, en funci�n
 del tama�o del problema.

 @ </answer>


 // ================================================================
 // Escribe el c�digo completo de tu soluci�n aqu� debajo
 // ================================================================
 //@ <answer>

const int INF = INT_MAX;

bool esValida(const int i, const int k, vector<bool> const& producto, vector<int> const& super) {

    return super[i] < 3 && !producto[k];
}

void supermercado(vector<int>& solucion, vector<vector<int>> const& v, const int n, const int m,  const int k, int& min, int coste, vector<bool>& producto, vector<int>& super) {

    for (int i = 0; i < n; i++)
    {
        solucion[k] = v[i][k];
        coste += solucion[k];
        if (esValida(i, k, producto, super)) {

            if (k == m - 1) {

                if (coste < min) min = coste;
            }
            else {

                producto[k] = true;
                super[i]++;

                supermercado(solucion, v, n, m, k + 1, min, coste, producto, super);

                producto[k] = false;
                super[i]--;

            }
        }
        coste -= solucion[k];
    }
}

int supermercado(vector<vector<int>> const& v, const int n, const int m) {

    vector<int> super(n);
    vector<bool> producto(m);
    vector<int> solucion(m);
    int min = INF;

    supermercado(solucion, v, n, m, 0, min, 0, producto, super);
    return min;
}


void resuelveCaso() {

    // leer los datos de la entrada

    int n, m;

    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    // resolver el caso posiblemente llamando a otras funciones

    cout << supermercado(v, n, m) << "\n";
    // escribir la soluci�n

}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

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