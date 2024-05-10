
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

// 6 3
//
// 
// 1 2 3 4 5 6 7
// 4 5 6 7 1 2 3
// 3 4 5 6 7 1 2
// 6 7 1 2 3 4 5  //2, 5 y 7 
//

//En la primera iteracion tengo que ir a la derecha, ya que 21 se encuentra en ese lado. Sé que tengo que ir 
//a la derecha ya que 21 es mayor que 20. Pero podría estar rotado 

bool resolver(vector<int> const& v, int const& ini, int const& fin, int const& buscar) {

    int medio = (fin + ini) / 2;
    if (ini == fin) {
        if (v[ini] == buscar)
            return true;
        else return false;
    }
    else if (v[medio] == buscar) {
        return true;
    }
    else {

        if (v[ini] < v[medio]) {

            if (buscar >= v[ini] && buscar < v[medio]) {
                return resolver(v, ini, medio, buscar);
            }
            return resolver(v, medio + 1, fin, buscar);
        }
        else {
            
            if (buscar > v[medio] && buscar <= v[fin]) {
                return resolver(v, medio + 1, fin, buscar);
            }
            return resolver(v, ini, medio, buscar);
        }
    }

}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;
    if (n == -1)
        return false;

    

    if (n > 0) {
        int buscar;

        cin >> buscar;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool sol = resolver(v, 0, v.size() - 1, buscar);
        // resolver el caso posiblemente llamando a otras funciones

        if (sol) cout << "SI\n";
        else cout << "NO\n";
    }
    else {
        cout << "NO\n";
    }
    
    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ej4-2.txt");
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