
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

int resolver(vector<int> const& v, const int ini, const int fin, const int g, const int n) {

    if (ini == fin) {
        return fin;
    }
    else {

        int m = (fin + ini) / 2;

        if (v[m] > g * (n - m)) {
            return resolver(v, m + 1, fin, g, n);
        }
        else return resolver(v, ini, m, g, n);

    }
}



void resuelveCaso() {

    int m, g;

    cin >> m >> g;

    vector<int> v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int dia = resolver(v, 0, v.size() - 1, g, v.size());

    if (v.size() == 1 && v[0] < g) {

        cout << 0;
    }
    else {

        if (dia == v.size() - 1 ? cout << "SIN RACIONAMIENTO" : cout << dia);
    }
    cout << "\n";

    // leer los datos de la entrada

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-10.txt");
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