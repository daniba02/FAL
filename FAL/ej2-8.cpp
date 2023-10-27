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
#include <algorithm>
using namespace std;


/*@ <answer>

 Escribe aquí un comentario general sobre la solución, explicando cómo
 se resuelve el problema y cuál es el coste de la solución, en función
 del tamaño del problema.

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>*/

struct Sol {
    vector<pair<string, int>> bajos;
    vector<pair<string, int>> altos;
    int b;
    int a;
};

bool op(pair<string, int> a, pair<string, int> b) {
    return a.first < b.first;
}

Sol resolver(vector<pair<string, int>> const& v, int min) {

    Sol sol;
    sol.bajos.resize(v.size());
    sol.altos.resize(v.size());
    sol.b = 0;
    sol.a = 0;

    for (int i = 0; i < v.size(); i++) {

        if (v[i].second > min) {
            sol.altos[sol.a] = v[i];
            sol.a++;
        }
        else {
            sol.bajos[sol.b] = v[i];
            sol.b++;
        }
    }

    sol.bajos.resize(sol.b);
    sol.altos.resize(sol.a);

    return sol;
}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n, min;

    cin >> n >> min;

    if (!std::cin)  // fin de la entrada
        return false;

    vector<pair<string, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    // resolver el caso posiblemente llamando a otras funciones

    Sol sol = resolver(v, min);

    // escribir la solución

    sort(sol.bajos.begin(), sol.bajos.end(), op);
    sort(sol.altos.begin(), sol.altos.end(), op);

    cout << "Bajos: ";
    for (int i = 0; i < sol.b; i++) {
        cout << sol.bajos[i].first << " ";
    }

    cout << "\nAltos: ";
    for (int i = 0; i < sol.a; i++) {
        cout << sol.altos[i].first << " ";
    }
    cout << "\n";

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-8.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    while (resuelveCaso());

    // para dejar todo como estaba al principio
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif
    return 0;
}