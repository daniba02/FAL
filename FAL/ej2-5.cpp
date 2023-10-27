
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

vector<int> resolver(vector<long long int> const& v, int const& ini) {

    vector<int> sol(v.size());

    long long int mx = v[0];
    int cont = 0;

    for (int i = 1; i < v.size(); i++) {

        if (v[i] > mx) {
            mx = v[i];
            sol[cont] = ini + i;
            cont++;
        }
    }
    sol.resize(cont);
    return sol;

}

void resuelveCaso() {

    // leer los datos de la entrada

    int ini, fin, n;

    cin >> ini >> fin;

    n = fin - ini + 1;

    vector<long long int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    // resolver el caso posiblemente llamando a otras funciones

    vector<int> sol = resolver(v, ini);


    // escribir la solución

    if (sol.size() > 0) {
        for (int a : sol) {
            cout << a << " ";
        }
    }

    cout << "\n";
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-5.txt");
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