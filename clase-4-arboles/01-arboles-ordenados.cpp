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
    // Set inicializado con valores ya ordenados.
    // Si pasáramos {30,10,50,20,40} el set igual quedaría {10,20,30,40,50}.
    set<int> a = {10, 20, 30, 40, 50};

    auto pos = a.begin(); // iterador al menor elemento

    // Mostrar el set inicial (orden ascendente)
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
