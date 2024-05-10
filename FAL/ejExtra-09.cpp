/*
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

struct sol {
    bool p;
    int jugados;
    int ronda;
};

sol resolver(vector<bool> const& v, const int ini, const int fin, const int k) {

    if (ini == fin) return { v[ini], 0, 0 };
    else {

        int m = (fin + ini) / 2;


        sol izq = resolver(v, ini, m, k);
        sol der = resolver(v, m + 1, fin, k);

        int ronda = izq.ronda + 1;

        if (ronda > k) {

            return { true, izq.jugados + der.jugados,ronda };
        }
        else {

            if (izq.p && der.p) {
                return { true, izq.jugados + der.jugados + 1, ronda };
            }
            else if (!izq.p && !der.p) {
                return { false, 0 , ronda };
            }
            else if (izq.p && !der.p) {
                return { true, izq.jugados, ronda };
            }
            else if (!izq.p && der.p) {
                return { true, der.jugados, ronda };
            }
        }
    }
}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n, k;
    cin >> n >> k;

    if (!std::cin)  // fin de la entrada
        return false;

    vector<bool> v(n, false);
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s != "NP") v[i] = true;
    }

    sol jugados = resolver(v, 0, n - 1, k);

    cout << jugados.jugados << "\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la soluci�n

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-09.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    while (resuelveCaso());

    // para dejar todo como estaba al principio
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif
    return 0;
}*/
