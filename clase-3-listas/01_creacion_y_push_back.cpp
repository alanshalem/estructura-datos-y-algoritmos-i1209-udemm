// Creación de una lista e inserción al final con push_back.
// std::list es una lista doblemente enlazada: permite insertar y eliminar
// en cualquier posición en O(1), pero NO permite acceso por índice.
//
// El for-range recorre la lista de principio a fin sin necesidad de iterador.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l; // lista vacía de enteros
    int n;

    // push_back agrega al final. Resultado: l = {10, 20, 5}
    l.push_back(10);
    l.push_back(20);
    l.push_back(5);

    // Recorrido (cuerpo aún sin implementar)
    for (int n:l)
    {
        /* code */
    }

    return 0;
}
