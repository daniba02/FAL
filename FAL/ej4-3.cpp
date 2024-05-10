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

bool resolver(vector<int> const& v, int const& ini, int const& fin, int const& k) {

    if (ini == fin) return true;
    else if (abs(v[ini] - v[fin]) < k) return false;
    else {
        int medio = (fin + ini) / 2;


        if (!resolver(v, ini, medio, k) || !resolver(v, medio + 1, fin, k)) return false;
        return true;
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
        int k;
        cin >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool resuelto = true;
        int contador = 0;
        resuelto = resolver(v, 0, v.size() - 1, k);
        if (resuelto ? cout << "SI\n" : cout << "NO\n");
    }
    

    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej4-3.txt");
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