// splice() en una posición específica (al inicio).
//
// splice mueve elementos de una lista a otra SIN copiar: re-enlaza los nodos.
// Es O(1) y, después de la operación, la lista origen queda vacía.
//
// Aquí splice se hace en l1.begin(): los elementos de l2 quedan ANTES
// del primer elemento de l1.

#include <iostream>
#include <list>

using namespace std;

int main ()
{
    // 1. Listas con valores desordenados
    list<int> l1={10,50,30,20,40};
    list<int> l2={15,55,35,25,45};

    // 2. Ordenar ambas: l1 = {10,20,30,40,50} ; l2 = {15,25,35,45,55}
    l1.sort();
    l2.sort();

    // l1.reverse();  // (no se ejecuta)
    // l1.merge(l2);  // (no se ejecuta)

    // 3. Iterador apuntando al primer elemento de l1 (al 10)
    auto pos=l1.begin();

    // 4. SPLICE: mueve l2 entera dentro de l1 ANTES de pos.
    //    Resultado: l1 = {15,25,35,45,55,10,20,30,40,50} ; l2 = {}
    l1.splice(pos, l2);

    // 5. Mostrar resultados
    for (int n : l1 ) { cout << n << endl; } // l1 combinada

    cout << "*" << endl; // separador

    for (int n : l2 ) { cout << n << endl; } // l2 vacía: no imprime nada

    return 0;
}
