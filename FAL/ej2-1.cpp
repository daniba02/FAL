
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

struct Sol {
    int ini;
    int fin;
    int longi;
};

Sol resolver(vector<int>const v, const int& altura) {

    Sol sol({ 0, 0, 0 });
    Sol max({ 0, 0, 0 });

    for (int i = 0; i < v.size(); i++) {

        if (v[i] > altura) {
            if (sol.longi <= 0) {
                sol.ini = i;
                sol.fin = i;
                sol.longi++;
            }
            else {
                sol.fin = i;
                sol.longi++;
            }
        }
        else {
            if (sol.longi > max.longi) {
                max = sol;
                
            }
            sol.ini = 0;
            sol.fin = 0;
            sol.longi = 0;
        }
    }
    if (sol.longi > max.longi) {
        max = sol;

    }

    return max;
}

void resuelveCaso() {

    int n, altura;

    cin >> n >> altura;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    Sol sol = resolver(v, altura);

    cout << sol.ini << " " << sol.fin << "\n";
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-1.txt");
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
