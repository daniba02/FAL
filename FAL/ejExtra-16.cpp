
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
#include <climits>
#include <algorithm>
using namespace std;

using matriz = vector<vector<int>>;

struct tproyecto {
    int min;
    int max;
    int sueldo;
};

/*@ <answer>

 Escribe aquí un comentario general sobre la solución, explicando cómo
 se resuelve el problema y cuál es el coste de la solución, en función
 del tamaño del problema.

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

bool esValida(vector<pair<int, bool>>const& capacidad, const int i, const int k, vector<tproyecto>const& proyecto, vector<int>const& grupos) {

    return capacidad[i].first + grupos[k] <= proyecto[i].max;
}

void va(vector<int>& sol, vector<pair<int, bool>>& capacidad, vector<int>const& grupos, vector<tproyecto>const& proyecto,
    const int k, int& min, const int m, const int n, bool& solucion, int coste, int contador, const int minSueldo, int& totalPersonas) {

    for (int i = 0; i < n; i++)
    {
        sol[k] = i;

        if (esValida(capacidad, i, k, proyecto, grupos)) {

            coste += grupos[k] * proyecto[i].sueldo;
            capacidad[i].first += grupos[k];
            totalPersonas -= grupos[k];

            if (capacidad[i].first >= proyecto[i].min && !capacidad[i].second) {
                contador++;
                capacidad[i].second = true;
            }

            if (k == m - 1) {

                if (contador == n) {
                    solucion = true;
                    if (coste < min) min = coste;
                }
            }
            else {

                if ((minSueldo * totalPersonas + coste) <= min) {
                    va(sol, capacidad, grupos, proyecto, k + 1, min, m, n, solucion, coste, contador, minSueldo, totalPersonas);
                }
            }
            
            coste -= grupos[k] * proyecto[i].sueldo;
            capacidad[i].first -= grupos[k];
            totalPersonas += grupos[k];
            if (capacidad[i].first < proyecto[i].min && capacidad[i].second) {
                contador--;
                capacidad[i].second = false;
            }
        }


    }

}

void resolver(vector<int> const& grupos, vector<tproyecto> const& proyecto, const int m, const int n, const int minSueldo, int& totalPersonas, const int maxSueldo) {

    vector<int> sol(m); //vector que indica a que proyecto está asignado cada grupo
    vector<pair<int, bool>> capacidad(n); //vector que indica la capacidad actual de los proyectos
    int min = maxSueldo;
    bool solucion = false;
    

    va(sol, capacidad, grupos, proyecto, 0, min, m, n, solucion, 0, 0, minSueldo, totalPersonas);

    if (!solucion ? cout << "NO" : cout << min);
    cout << "\n";
}


void resuelveCaso() {

    // leer los datos de la entrada

    int m, n;
    cin >> m >> n;

    vector<int> grupos(m);
    vector<tproyecto> proyecto(n);

    int totalPersonas = 0;
    int minSueldo = INT_MAX;

    int maxSueldo = 0;
    
    vector<int> mejSol(m);

    for (int i = 0; i < m; i++)
    {
        cin >> grupos[i];

        totalPersonas += grupos[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> proyecto[i].min;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> proyecto[i].max;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> proyecto[i].sueldo;

        minSueldo = min(proyecto[i].sueldo, minSueldo);
        maxSueldo = max(proyecto[i].sueldo, maxSueldo);
    }

    maxSueldo = maxSueldo * totalPersonas;

    resolver(grupos, proyecto, m, n, minSueldo, totalPersonas, maxSueldo);



    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-16.txt");
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