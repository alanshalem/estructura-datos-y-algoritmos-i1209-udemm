// Recorrido manual de una lista usando iterador + advance().
//
// Patrón clásico: arrancar en begin(), avanzar de a un paso con advance(pos,1)
// y cortar cuando pos == end(). end() apunta a "una posición después del último"
// (NO a un elemento válido), por eso la condición es != end().
//
// El for-range del final hace exactamente lo mismo, pero más legible.

#include <iostream>
#include <list>
using namespace std;

int main ()
{
    list<int> l1={10,20,30,40,50};

    auto pos=l1.begin(); // iterador al primer elemento

    // Recorrido manual: *pos desreferencia el iterador para obtener el valor
    while (pos != l1.end())
    {
        cout << *pos << endl;
        advance(pos, 1); // mover el iterador una posición adelante
    }

    cout << "*" << endl;

    // Recorrido equivalente con for-range (más simple y recomendado)
    for (int  n : l1 ) { cout << n << endl; }

    return 0;
}
