
/*@ <authors>
 *
 * Daniel Barroso Casado
 *
 * Usuario del juez: F07
 *
 *@ </authors>

#include <iostream>
#include <fstream>

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


//P: 0 < n < v.size()

//I: 0 < n < v.size()
//   0 < p < v.size()
//   0 <= i < v.size()
//   max 

void resuelveCaso() {

    // leer los datos de la entrada

    int n, p, num, max;
    bool div = true;

    cin >> n >> p;

    int i = 0;

    while (i <= p) {

        cin >> num;

        if (i == 0) max = num;
        else if (num > max) max == num;

        i++;
    }


    while (div && i < n){

        cin >> num;

        if (max >= num) {
            div = false;
        }

        i++;
    }

    if (div) cout << "SI" << endl;
    else cout << "NO" << endl;



    // resolver el caso posiblemente llamando a otras funciones

    // escribir la soluci�n
}

//@ </answer>
//  Lo que se escriba dejado de esta l�nea ya no forma parte de la soluci�n.

int main() {
    // ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("casos.txt");
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
