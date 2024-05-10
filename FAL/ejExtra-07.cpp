
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
#include <algorithm>
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

// Funci�n para verificar si es posible realizar la mudanza con un tope de carga dado

int resolver(vector<int> const& v, const int minPeso, const int pesoTotal, const int nviajes) {

    if (minPeso == pesoTotal) return minPeso;
    else {
        int pesoPromedio = (minPeso + pesoTotal) / 2;
        int numViajes = 0, pesoCamion = 0;

        for (int i = 0; i < v.size(); i++)
        {
            pesoCamion += v[i];

            if (pesoCamion >= pesoPromedio) {
                numViajes++;
                if (pesoCamion == pesoPromedio) pesoCamion = 0;
                else pesoCamion = v[i];
            }
        }

        if (pesoCamion > 0) numViajes++;
        if (numViajes <= nviajes) return resolver(v, minPeso, pesoPromedio, nviajes);
        else return resolver(v, pesoPromedio + 1, pesoTotal, nviajes);
    }

}


bool resuelveCaso() {

    // leer los datos de la entrada

    int n, k;
    cin >> n >> k;
    if (n == 0 && k == 0)
        return false;

    vector<int> v(n);

    int sumaPesos = 0, maxPeso = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sumaPesos += v[i];
        maxPeso = max(maxPeso, v[i]);

    }

    int p = resolver(v, maxPeso, sumaPesos, k);
    cout << p << "\n";
    //cout << divideYVenceras(v, k, 0, v.size() - 1) << "\n";
    // resolver el caso posiblemente llamando a otras funciones

    // escribir la soluci�n

    return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-07.txt");
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