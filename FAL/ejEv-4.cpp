
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



/*
string color(const int i) {
    switch (i) {
    case 0:
        return "azul";
    case 1:
        return "rojo";
    case 2:
        return "verde";
    }
}

/*
*
*   USUARIOS: Daniel Barroso Casado: F07
*             Amaia Echenagusia Munoz: F27
*
*   ESPACIO DE BUSQUEDA: La profundidad del arbol de busqueda es igual a la altura total de la torre, y como el numero de colores entre el que escogemos
*                        es 3, el espacio de busqueda ocupa 3^n soluciones candidatas, siendo n la altura de la torre
*
*   SOLUCION: La solucion es un vector con tamanio n, siendo n la altura total de nuestra torre, y se inicializa con el primer elemento igualado a 1, es decir,
*             la primera pieza siempre sera roja (1) . En cada posicion se guarda el color de la pieza (0, 1 o 2)
*
*   MARCADOR: El marcador que utilizamos es un vector de tamanio 3  marcas que contiene el numero total de piezas que hemos utilizado de cada color,
              y lo inicializamos con la posicion del rojo igualada al 1, ya que ya la utilizamos al principio, y otro vector de tamanio 3 tambien llamado
              v que contiene el numero de piezas que faltan de cada color.
*


bool esValida(vector<int> const& sol, const int k, const int i, vector<int> const& marcas, vector<int> const& v) {

    if (v[i] < 0) return false; //en caso de que no queden piezas

    if (sol[k - 1] == 2 && sol[k] == 2) return false; //si el color verde se repite dos veces seguidas

    if (marcas[2] > marcas[0]) return false; //si hay mas verdes que azules

    return true;
}

void torres(vector<int>& sol, vector<int>& v, const int n, const int k, int& cont, vector<int>& marcas) {

    for (int i = 0; i < 3; i++) {

        sol[k] = i;
        v[i]--;
        marcas[i]++;

        if (esValida(sol, k, i, marcas, v)) {

            if (k == n - 1) {

                if ((marcas[0] + marcas[2]) < marcas[1]) {
                    cont++;
                    for (int j = 0; j < n; j++) {
                        cout << color(sol[j]) << " ";
                    }
                    cout << "\n";
                }
            }
            else {

                torres(sol, v, n, k + 1, cont, marcas);
            }
        }

        v[i]++;
        marcas[i]--;
    }
}

void torres(vector<int>& v, const int n) {

    vector<int> sol(n);
    vector<int> marcas(3);

    //La primera pieza siempre es roja

    sol[0] = 1;
    marcas[1]++;
    v[1]--;

    int cont = 0;

    torres(sol, v, n, 1, cont, marcas);

    if (cont == 0) cout << "SIN SOLUCION\n";

    cout << "\n";

}

bool resuelveCaso() {

    int n, a, r, v;

    cin >> n >> a >> r >> v;

    if (n == 0 && a == 0 && r == 0 && v == 0) {
        return false;
    }

    vector<int> w(3);

    w[0] = a;
    w[1] = r;
    w[2] = v;

    torres(w, n);

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejev-4.txt");
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