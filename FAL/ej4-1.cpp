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

struct sol {
    int ini;
    int fin;
};

int buscaDer(vector<int> const& v, int const& ini, int const& fin, int const& alt) {

    if (ini + 1 == fin) {
        return ini;
    }
    else {
        int medio = (ini + fin) / 2;

        if (v[medio] <= alt) {
            return buscaDer(v, medio, fin, alt);
        }
        else if (v[medio] > alt) {
            return buscaDer(v, ini, medio , alt);
        }

    }
}



int buscaIz(vector<int> const& v, int const& ini, int const& fin, int const& alt) {

    if (ini == fin) {
        return ini;
    }
    else {
        int medio = (ini + fin) / 2;

        if (v[medio] < alt) {
            return buscaIz(v, medio + 1, fin, alt);
        }
        else if (v[medio] >= alt) {
            return buscaIz(v, ini, medio, alt);
        }

    }

    //if (condi == X ? cout << SI : cout << NO);
}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n, alt;

    cin >> n;

    if (!std::cin)  // fin de la entrada
        return false;

    if (n != 0) {
        cin >> alt;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sol sol = { 0, 0 };

        sol.ini = buscaIz(v, 0, v.size() - 1, alt);

        if (v[sol.ini] != alt) {
            cout << "NO EXISTE";
        }
        else {
            sol.fin = buscaDer(v, 0, v.size(), alt);

            if (sol.ini == sol.fin ? cout << sol.ini : cout << sol.ini << " " << sol.fin);
            //if (sol.fin == sol.ini) cout << sol.ini;
            //else cout << sol.ini << " " << sol.fin;
        }
    }
    else {
        cout << "NO EXISTE";
    }
    
   

    cout << "\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej4-1.txt");
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