
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

 P: {0 <= n <= long(v)}

 fun pastoso(v[], int n) int a;

 Q: {b = (E k : 0 <= k < n : (Sumatorio u : k < u < n : v[u]) = k)}


 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

pair<int, bool> pastoso(vector<int> const& v, int n) {

    int suma = 0;
    int p = n;
    bool existe = false;
    int i = n - 1;

    while (!existe && i >= 0)
    {
        if (suma == v[i]) {
            existe = true;
            p = i;
        }

        suma += v[i];
        i--;
    }

    return { p, existe };
}


void resuelveCaso() {

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pair<int, bool> sol = pastoso(v, v.size());

    if (sol.second ? cout << "SI " << sol.first : cout << "NO");

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
    std::ifstream in("ejExtra-02.txt");
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