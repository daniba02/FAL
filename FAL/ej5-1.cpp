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

struct tTablero {
    vector<bool> col;
    vector<bool> dig;
    vector<bool> dig2;
};



int diagonalDesc(const int a, const int b, const int n) {
    return (a - b) + n - 1;
}
int diagonalAsc(const int a, const int b) {
    return a + b;
}

bool esValida(tTablero const& t, int const& k, int const& i, int const& n) {

    return !t.col[i] && !t.dig[diagonalDesc(k, i, n)] && !t.dig2[diagonalAsc(k, i)];
}

void marcar(tTablero& t, int const& k, int const& i, int const& n) {

    t.col[i] = true;
    t.dig[diagonalDesc(k, i, n)] = true;
    t.dig2[diagonalAsc(k, i)] = true;
}

void desmarcar(tTablero& t, int const& k, int const& i, int const& n) {

    t.col[i] = false;
    t.dig[diagonalDesc(k, i, n)] = false;
    t.dig2[diagonalAsc(k, i)] = false;
}


void reinas(vector<int>& solucion, int const& n, const int k, int& cont, tTablero& marcas) {

    for (int i = 0; i < n; i++) {

        solucion[k] = i;

        if (esValida(marcas, k, i, n)) {

            if (k == n - 1) {
                cont++;
            }
            else {
                marcar(marcas, k, i, n);
                reinas(solucion, n, k + 1, cont, marcas);
                desmarcar(marcas, k, i, n);
            }
        }
    }
}

int nReinas(int const& n) {

    vector <int> solucion(n);
    vector <bool> col(n, false);
    vector <bool> dig(n * 2 - 1, false);
    tTablero t{ col, dig , dig};
    int cont = 0;
    reinas(solucion, n, 0, cont, t);

    return cont;
}


void resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;

    // resolver el caso posiblemente llamando a otras funciones

    cout << nReinas(n) << "\n";
    // escribir la solución

}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej5-1.txt");
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