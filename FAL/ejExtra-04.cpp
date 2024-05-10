
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

 P: { 0 <= n <= 1000}

 pistaMasLarga (v[], int n) dev int mx

 Q: {mx = max i,j : 0 <= i < j < n : Para todo k : i <= k < j : v[k] >= v[k + 1] : j - i + 1}

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

int pistaMasLarga(vector<int> const& v, const int n) {

    int p = 0;
    int mx = 0;
    int ant = 4000;

    for (int i = 0; i < n; i++)
    {

        if (v[i] <= ant) {

            p += 1;
            if (p > mx) {
                mx = p;
            }
        }
        else {
            
            p = 1;
        }
        ant = v[i];
    }

    return mx;
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

    cout << pistaMasLarga(v, v.size()) << "\n";
    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-04.txt");
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