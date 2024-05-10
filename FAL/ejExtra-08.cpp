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

 Escribe aqu� un comentario general sobre la soluci�n, explicando c�mo
 se resuelve el problema y cu�l es el coste de la soluci�n, en funci�n
 del tama�o del problema.

 @ </answer>


 // ================================================================
 // Escribe el c�digo completo de tu soluci�n aqu� debajo
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

    // escribir la soluci�n

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

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
