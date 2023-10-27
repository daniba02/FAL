
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

struct Sol {
    int minimo;
    int contador;
};

bool resolver(vector<int> const& v) {

    Sol sol({ v[0], 1});
    bool resuelto = true;
    int i = 1;

    while (i < v.size() && resuelto) {

        if (v[i] < sol.minimo) {
            sol.minimo = v[i];
            sol.contador = 1;
        }
        else if (v[i] == sol.minimo) sol.contador++;

        if (sol.contador > 1) resuelto = false;

        i++;
    }

    return resuelto;
}

bool resuelveCaso() {

    // leer los datos de la entrada
    int n; 
    cin >> n;

    if (n == -1)
        return false;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // 

    bool b = resolver(v);

    if (b) cout << "SI\n";
    else cout << "NO\n";

    // resolver el caso posiblemente llamando a otras funciones

    // escribir la soluci�n

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej2-2.txt");
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
