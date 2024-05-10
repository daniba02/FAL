
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

 T(n) =     c               si  n <= 1
            2*T(n/2) + c    si  n > 1

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

struct sol {
    bool p;
    
    int sumaPares;
    int productoImpares;

    int productoPares;
    int sumaImpares;
};

sol resolver(vector<int> const& v, const int ini, const int fin) {

    if (ini == fin) {

        if (v[ini] % 2 == 0) {
            return { true, v[ini], 1, v[ini], 0 };
        }
        else if (v[ini] % 2 == 1) {
            return { true, 0, v[ini], 1, v[ini] };
        }
    }
    else {

        int m = (ini + fin) / 2;

        sol izq = resolver(v, ini, m);
        sol der = resolver(v, m + 1, fin);

        sol conj = { true, izq.sumaPares + der.sumaPares, izq.productoImpares * der.productoImpares,
            izq.productoPares * der.productoPares, izq.sumaImpares + der.sumaImpares };

        if (!izq.p && !der.p) {
            conj.p = false;
            return conj;
        }
        else {

            if (izq.sumaPares + izq.productoImpares <= der.productoPares + der.sumaImpares) {

                return conj;
            }
            else {
                conj.p = false;
                return conj;
            }

        }
    }
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

    sol s = resolver(v, 0, v.size() - 1);

    if (s.p ? cout << "SI" : cout << "NO");

    cout << "\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-11.txt");
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