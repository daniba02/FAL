/*
// 
// Daniel Barroso Casado   F07
// Amaia Echenagusia Munoz  F27
// 


#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>


using namespace std;

struct tSol {
    int complementario;
    int cont;
};

// Función de recurrencia:
//
// T(n) = c0                si    n = 1
//        c1 + T(n - 1)     si    n >= 1
// 
// En este ejercicio consideramos n el número de cifras que contiene el numero. Recorremos las cifras del numero y vamos sacando el 
// complementario de cada cifra.
// 
// 
// Postulado:
// 
// n - k = 0 <=> k = n
// T(n) = c1 * n + T(n - n) = c1 * n + T(0) = c1 * n + c0 => O(n), por tanto el coste de la función es lineal con respecto al numero de cifras
// 
// 
// 
//

int resolver(int n, tSol& sol) {

    if (n < 10) {

        return (9 - n) * pow(10, sol.cont);
    }
    else {

        int comp = 9 - (n % 10);
        sol.cont++;

        int s = resolver(n / 10, sol);
        sol.cont--;
        sol.complementario = s + comp * pow(10, sol.cont);

        return sol.complementario;
    }
}

int resolverInv(int n, tSol& sol) {

    if (n < 10) {

        return (9 - n) * pow(10, sol.cont);
    }
    else {

        int comp = 9 - (n % 10);

        int s = resolverInv(n / 10, sol);
        sol.cont++;
        sol.complementario = s + comp * pow(10, sol.cont);

        return sol.complementario;
    }
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    // leer los datos de la entrada
    int n;
    cin >> n;
    tSol solucion{ 0, 0 };
    int sol = resolver(n, solucion);
    // escribir sol

    tSol solucion2{ 0, 0 };
    int sol2 = resolverInv(n, solucion2);

    cout << sol << " " << sol2 << "\n";

}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("pr2.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}*/