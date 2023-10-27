
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
#include <queue>
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

int cerosUnos(vector<int> const& v, int const& l) {

    int contC = 0;
    int contU = 0;
    int suma = 1;

    for (int i = l; i < v.size(); i++) {

        if (v[i] == 0) contC++;
        if (v[i] == 1)  contU++;

        if (i > l - 1) {

            if (v[i - l] == 0) contC--;
            if (v[i - l] == 1) contU--;

            if (contC == contU) suma++;
        }
    }
    return suma;
}

void resuelveCaso() {

    // leer los datos de la entrada

    int l, n;

    cin >> l >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << cerosUnos(v, l) << "\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la soluci�n
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-4.txt");
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