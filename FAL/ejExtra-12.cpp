
/*@ <authors>
 *
 * Daniel Barroso Casado
 *
 * Usuario del juez: F07
 *
 *@ </authors>*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


/*@ <answer>

 T(n) =     c               si n < 10
            T(n - 1) + c    si n > 10

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

struct sol{
    bool sumdivisible = true;
    int suma = 0;
    int digitos = 0;
};

sol resolver(const int n) {

    if (n < 10) {
        return { true, n, 1 };
    }
    else {
        
        sol s = resolver(n / 10);

        s.suma += n % 10;
        s.digitos++;

        if (!s.sumdivisible || s.suma % s.digitos != 0) {
            return { false, 0, 0 };
        }
        else {
            return s;
        }
    }
}

bool resuelveCaso() {

    // leer los datos de la entrada

    int n;
    cin >> n;

    if (n == 0)
        return false;

    sol s = resolver(n);

    if (s.sumdivisible ? cout << "SI\n" : cout << "NO\n");
    // resolver el caso posiblemente llamando a otras funciones

    // escribir la solución

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-12.txt");
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