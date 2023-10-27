
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

vector<int> resolver(vector<int> const& v, vector<int> const& w) {

    vector<int> sol(v.size() + w.size());

    int cont = 0;
    int posV = 0;
    int posW = 0;

    while (cont != sol.size()) {

        if ((posV < v.size() && posW < w.size() && v[posV] < w[posW]) || posW >= w.size()) {
            sol[cont] = v[posV];
            posV++;
        }
        else {
            sol[cont] = w[posW];
            posW++;
        }
        cont++;
    }

    return sol;
}

void resuelveCaso() {

    // leer los datos de la entrada

    int n, m;

    cin >> n >> m;

    vector<int> v(n);
    vector<int> w(m);

    if (n > 0) {
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    }
    if (m > 0) {
        for (int i = 0; i < m; i++) {
            cin >> w[i];
        }
    }
    

    // resolver el caso posiblemente llamando a otras funciones

    vector<int> sol = resolver(v, w);

    // escribir la solución

    for (int w : sol) {
        cout << w << " ";
    }
    cout << "\n";
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-6.txt");
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