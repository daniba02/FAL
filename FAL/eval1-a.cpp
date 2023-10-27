// Daniel Barroso Casado: F07
// Amaia Echenagusía Munoz: F27
/*

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

//
// P: {0 < n <= 100000}
// 
// 
// I: {0 <= i < n ^
//     -1000 * n <= suma <= 1000 * n ^ suma = Sumatorio j : i < j <= n: v[j] ^
//     terminado = Existe k : 0 <= k < n : v[k] = (Sumatorio j : k < j <= n: v[j] ) ^
//     }
// 
// Q:{ terminado = Existe k : 0 <= k < n : v[k] = (Sumatorio j : k < j <= n: v[j] )}
// 
// 
//  Función de cota: t = i + 1;
// 
//  Coste: Tenemos un algoritmo iterativo de Coste O(n) en el caso peor siendo n el número de elementos del vector




// función que resuelve el problema
bool resolver(vector<int> const& v) {

    int suma = 0;
    bool terminado = false;

    int i = v.size() - 1;


    while (i >= 0 && !terminado) {

        if (v[i] == suma) {
            terminado = true;
        }
        else {
            suma += v[i];
        }
        i--;
    }

    return terminado;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
    // leer los datos de la entrada

    int n;
    cin >> n;

    if (n == 0)
        return false;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool sol = resolver(v);

    if (sol) cout << "YES\n";
    else cout << "NO\n";

    // escribir sol

    return true;

}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    while (resuelveCaso());


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}*/