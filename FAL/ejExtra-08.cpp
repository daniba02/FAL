/*
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

struct jugador {
    int canicas;
    string nombre;
};


jugador resolver(vector<jugador>& v, const int ini, const int fin) {

    if (ini == fin) return v[ini];
    else {

        int m = (fin + ini) / 2;

        jugador izq = resolver(v, ini, m);
        jugador der = resolver(v, m + 1, fin);

        if (izq.canicas >= der.canicas) {
            return { izq.canicas + der.canicas / 2, izq.nombre };
        }
        else {
            return { der.canicas + izq.canicas / 2, der.nombre };
        }

    }


}


bool resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;

    if (!std::cin)  // fin de la entrada
        return false;

    vector<jugador> v(n);

    for (int i = 0; i < n; i++)
    {

        cin >> v[i].nombre >> v[i].canicas;
    }

    jugador sol = resolver(v, 0, n - 1);

    cout << sol.nombre << " " << sol.canicas << "\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-08.txt");
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
