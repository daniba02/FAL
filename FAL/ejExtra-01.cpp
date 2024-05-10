
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

int resolver(vector<int> const& v, const int k, const int l) {

    int n = v.size();
    int npares = k;
    int nimpares = 0;

    int cont;

    if ((n > 0 && k > 0)? cont = 1 : cont = 0);

    for (int i = k; i < n; i++) {

        if (v[i] % 2 == 0) {
            npares++;
        }
        else if (v[i] % 2 == 1) {
            nimpares++;
        }

        if (v[i - k] == 0) {
            npares--;
        }
        else {
            nimpares--;
        }

        if (nimpares < l) {
            cont++;
        }
    }

    return cont;
}
void resuelveCaso() {

    int n, k, l;
    // leer los datos de la entrada

    cin >> n >> k >> l;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << resolver(v, k, l) << "\n";
    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-01.txt");
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