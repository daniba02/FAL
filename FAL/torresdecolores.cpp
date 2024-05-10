
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

bool esValida(vector<int> const& sol, const int k, const int i, vector<int> const& marcas, vector<int> const& v) {

    if (v[i] < 0) return false;

    if (sol[k - 1] == 2 && sol[k] == 2) return false; //si el color verde se repite dos veces seguidas

    if (marcas[2] > marcas[0]) return false; //si hay mas verdes que azules

    return true;
}

void torre(vector<int>& sol, vector<int>& v, const int k, const int n, int& cont, vector<int>& marcas) {

    for (int i = 0; i < 3; i++) {

        sol[k] = i;
        
        marcas[i]++;
        v[i]--;

        if (esValida(sol, k, i, marcas, v)) {

            if (k == n - 1 ) {

                if ((marcas[0] + marcas[2]) < marcas[1]) {
                    cont++;

                    for (int i = 0; i < n; i++) {
                        if (sol[i] == 0) cout << "azul" << " ";
                        else if (sol[i] == 1) cout << "rojo" << " ";
                        else if (sol[i] == 2) cout << "verde" << " ";
                    }
                    cout << "\n";
                }
                
            }
            else {
                
                torre(sol, v, k + 1, n, cont, marcas);
            }
        }

        marcas[i]--;
        v[i]++;
    }
    
}

bool resuelveCaso() {

    // leer los datos de la entrada
    int n, a, r, v;


    cin >> n >> a >> r >> v;


    if (n == 0 && a == 0 && r == 0 && v == 0)
        return false;

    // resolver el caso posiblemente llamando a otras funciones

    vector<int> w(3);
    vector<int> marcas(3);
    vector<int> sol(n);
    int cont = 0;

    w[0] = a;
    w[1] = r;
    w[2] = v;

    sol[0] = 1;
    marcas[1]++;
    w[1]--;

    torre(sol, w, 1, n, cont, marcas);

    if (cont == 0) {
        cout << "SIN SOLUCION\n";
    }
    // escribir la solución

    cout << "\n";
    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("torres.txt");
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