// std::set: árbol binario de búsqueda balanceado (típicamente Red-Black Tree).
//
// Propiedades clave:
//   - Mantiene los elementos siempre ORDENADOS de menor a mayor.
//   - NO permite duplicados: insertar un valor ya presente no hace nada.
//   - insert / find / erase son O(log n).
//   - El recorrido con for-range visita los elementos en orden ascendente.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Aunque inicialicemos con valores DESORDENADOS, el set los acomoda solo.
    // Resultado interno: {10, 20, 30, 40, 50}
    set<int> a = {20, 50, 30, 40, 10};

    auto pos = a.begin(); // iterador al menor elemento

    // Recorrido inicial (orden ascendente, garantizado por el árbol)
    for (int n : a)
    {
        cout << n << endl;
    }

    cout << "*" << endl;

    // insert ubica el 15 en la posición correcta automáticamente.
    // Resultado: {10, 15, 20, 30, 40, 50}
    a.insert(15);

    // Recorrido tras la inserción: sigue ordenado
    for (int n : a)
    {
        cout << n << endl;
    }

    return 0;
}
