
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

 P: {0 <= p < q < long(v)}

 todosPares(v, p, q) dev bool q

 Q: {q = Para todo k : q <= k < p : v[k] % 2 = 0}


 P: {0 <= n <= long(v)}

 numSegPares (v[], n) dev int p

 Q: { p = #p,q : 0 <= p < q < n : todosPares(v, p, q)}


 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>



// I: {0 <= p < n ^ 0 <= i <= n}

int numSegPares(vector<int> const& v, const int n) {

    int cont = 0;
    int p = 0;

    for (int i = 0; i < n; i++)
    {

        if (v[i] % 2 == 0) {
            p++;
            cont += p;
        }
        else if (v[i] % 2 != 0) {
            p = 0;
        }
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

    cout << numSegPares(v, n) << "\n";


    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-05.txt");
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