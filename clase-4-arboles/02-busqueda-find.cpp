// Búsqueda en un std::set con find().
//
// find(valor) devuelve un ITERADOR:
//   - Si el valor existe en el árbol, apunta al nodo que lo contiene.
//   - Si NO existe, devuelve a.end() (iterador "después del último").
//
// Para obtener el valor desde el iterador se usa el operador * (desreferencia).
// Complejidad: O(log n) gracias a que el árbol está balanceado.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a = {20, 50, 30, 40, 10}; // queda ordenado: {10,20,30,40,50}

    a.insert(15); // {10,15,20,30,40,50}

    // Caso 1: el valor SÍ está en el árbol
    if (a.find(15) != a.end())
    {
        cout << "El 15 esta en el arbol" << endl;
        cout << *a.find(15) << endl; // imprime 15 (desreferencia el iterador)
    }

    // Caso 2: el valor NO está en el árbol
    if (a.find(99) == a.end())
    {
        cout << "El 99 NO esta en el arbol" << endl;
    }

    return 0;
}
