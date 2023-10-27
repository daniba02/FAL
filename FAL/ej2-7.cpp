
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
#include <iomanip>

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
vector<int> resolver(vector<int> const& v, int const& m, int const& n) {

    vector<int> w(m);
    vector<int> aux(n);
    int max = 0;
    int cont = 0;

    for (int i = 0; i < n; i++) {

        w[v[i]]++;

        if (w[v[i]] > max) {
            max = w[v[i]];
            vector<int> hola(n);
            aux = hola;
            cont = 0;
            aux[cont] = v[i];
            cont++;
        }
        else if(w[v[i]] == max) {
            aux[cont] = v[i];
            cont++;
        }
    }

    
    aux.resize(cont);

    vector<int> sol = aux;

    return sol;
}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n, m;

    cin >> n;

    if (n == -1)
        return false;

    cin >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // resolver el caso posiblemente llamando a otras funciones

    vector<int> sol = resolver(v, m, n);

    // escribir la soluci�n

    for (int i = 0; i < sol.size(); i++) {
        cout << sol[i] << " ";
    }
    cout << "\n";

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-7.txt");
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