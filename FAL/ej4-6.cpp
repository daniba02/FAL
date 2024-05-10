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


    // escribir la soluci�n

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

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