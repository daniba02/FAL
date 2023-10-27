
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

 Escribe aqu� un comentario general sobre la soluci�n, explicando c�mo
 se resuelve el problema y cu�l es el coste de la soluci�n, en funci�n
 del tama�o del problema.

 @ </answer>


 // ================================================================
 // Escribe el c�digo completo de tu soluci�n aqu� debajo
 // ================================================================
 //@ <answer>
struct Sol {

    int s;
    int ini;
    int fin;
    int suma;
};

bool resolver(vector<int> const& v, Sol& sol) {

    bool resuelto = true;
    int max = 0;

    int i = 0;

    while (i < v.size() && resuelto) {

        if (v[i] > 0 && sol.ini == -1) {
            sol.ini = i;
        }

        i++;
    }

    return resuelto;
}

void resuelveCaso() {

    // leer los datos de la entrada

    int n, s;
    cin >> n >> s;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {

        cin >> v[i];
    }

    // resolver el caso posiblemente llamando a otras funciones
    Sol sol({s, -1, -1, -1});
    bool b = resolver(v, sol);

    // escribir la soluci�n
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-3.txt");
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