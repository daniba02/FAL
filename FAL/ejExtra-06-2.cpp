
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

    Estamos buscando el elemento menor que se ha borrado del vector. 
    
    CASOS BASE:

    - El vector es vacío, por lo que el menor que se ha borrado es el elemento k. 
    - Si el elemento por el que empezaba la secuencia no se encuentra en el vector también será el elemento que devolveremos. 
    - En caso de que si se encuentre el elemento, la posicion que tenemos es en la que tendría que estar el elemento, por
      lo que devolvemos la suma de ini + k.

 @ </answer>


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

int resolver(vector<int> const& v, const int ini, const int fin, const int k) {

   
    if (v.size() == 0) {
        return k;
    }
    else if (ini == fin) {

        if(v[ini] > k + ini) return k + ini;
        else {
            return ini + k + 1;
        }

    }
    else {

        int medio = (fin + ini) / 2;

        if (v[medio] > medio + k) {
            return resolver(v, ini, medio, k);
        }
        else {
            return resolver(v, medio + 1, fin, k);
        }
    }
}


void resuelveCaso() {

    // leer los datos de la entrada

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // resolver el caso posiblemente llamando a otras funciones

    cout << resolver(v, 0, n - 1, k) << "\n";


    // escribir la solución
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("ejExtra-06-2.txt");
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