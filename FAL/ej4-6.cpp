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

 Escribe aquí un comentario general sobre la solución, explicando cómo
 se resuelve el problema y cuál es el coste de la solución, en función
 del tamaño del problema.

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

int resolver(vector<int> const& v, int ini, int fin, int& min) {

    if (ini == fin) {
        if (v[ini] < min) min = v[ini];
        return min;
    }
    else {

        int medio = (fin + ini) / 2;

        if (v[ini] > v[medio]) {

            resolver(v, medio + 1, fin, min);
        }
        else {
            resolver(v, ini, medio, min);
        }
        return min;
    }

}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;

    if (!std::cin)  // fin de la entrada
        return false;

    // resolver el caso posiblemente llamando a otras funciones

    if (n > 0) {
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int min = INT_MAX;
        resolver(v, 0, n - 1, min);
        cout << min << "\n";
    }


    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej4-6.txt");
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