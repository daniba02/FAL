
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
#include <climits>
using namespace std;



/*@ <answer>

 Escribe aqu� un comentario general sobre la soluci�n, explicando c�mo
 se resuelve el problema y cu�l es el coste de la soluci�n, en funci�n
 del tama�o del problema.

 @ </answer>


 // ================================================================
 // Escribe el c�digo completo de tu soluci�n aqu� debajo
 // ================================================================
 //@ <answer>


//P: {0 < n <= v.size()}

//fun resolver(v[], p): dev bool b

//Q: {b = Para todo i, j: 0 <= i <= p < j < n: v[i] < v[j]}

bool resolver(vector<int> const& v, const int p) {

    bool resolver = true;
    int k = 0;
    int max = v[0];

    while (resolver && k < v.size()) {

        if (k <= p && max < v[k]) {

            max = v[k];
        }
        else if (k > p) {
            if (max > v[k]) {
                resolver = false;
            }
        }

        k++;
    }

    return resolver;
}



void resuelveCaso() {

    // leer los datos de la entrada

    int n, p;

    cin >> n >> p;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    bool b = resolver(v, p);

    if (b ? cout << "SI\n" : cout << "NO\n");

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la soluci�n
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej1-2.txt");
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
}
*/