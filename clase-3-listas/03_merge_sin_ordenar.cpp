// merge() sobre listas SIN ordenar previamente.
//
// list::merge fusiona dos listas asumiendo que ambas vienen ordenadas.
// Si NO están ordenadas (como en este ejemplo), el resultado NO queda ordenado:
// simplemente intercala los elementos según el orden interno actual.
// Después del merge, l2 queda vacía (sus nodos pasan a l1).

#include <iostream>
#include <list>

using namespace std;

int main ()
{
    // 1. Dos listas con valores iniciales (desordenados)
    list<int> l1={10,50,30,20,40};
    list<int> l2={15,55,35,25,45};

    // l1.sort();   <- comentado: las listas NO se ordenan antes de fusionar
    // l2.sort();

    // 2. Fusión: l1 absorbe los elementos de l2. l2 queda vacía.
    //    Como no estaban ordenadas, el resultado tampoco lo está.
    l1.merge(l2);

    // 3. Imprime el contenido final de l1
    for (int n : l1 ) {
        cout << n << endl;
    }

    return 0;
}
