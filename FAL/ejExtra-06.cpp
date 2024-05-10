
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


 P: {0 <= p < q <= long(v)}

 todosConsecutivos(v, p, q) dev bool p

 Q: { p = Para todo k : p <= k < q : v[k] - 1 = v[k + 1] || v[k] + 1 = v[k + 1]}

 P: {0 <= n <= long(v)}

 numSegmentosConsecutivos (v[], n) dev int a

 Q: {a = #p,q : 0 <= p < q + 1 < n : todosConsecutivos(v, p, q)}

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

int numSegmentosConsecutivos(vector<int> const& v, const int n) {

    int a = 0;
    int cont = 0;

    int k = 0;


    while (k < n - 1) {

        if (v[k] + 1 == v[k + 1] || v[k] - 1 == v[k + 1]) {
            a++;
            cont += a;
        }
        else {
            a = 0;
        }

        k++;
    }


    return cont;
}
void resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << numSegmentosConsecutivos(v, v.size()) << "\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-06.txt");
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