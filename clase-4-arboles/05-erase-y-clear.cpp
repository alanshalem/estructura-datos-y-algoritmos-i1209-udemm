// Eliminar elementos de un std::set.
//
// Dos formas principales de borrar:
//   - erase(valor)    -> borra el nodo cuyo valor coincida (si existe).
//   - erase(iterador) -> borra el nodo apuntado por el iterador.
//
// Combinable con upper_bound / lower_bound para borrar "el siguiente a X".
//
// Otros métodos útiles:
//   - clear() -> vacía todo el árbol.
//   - swap(otro_set) -> intercambia el contenido con otro set
//                       (mismo concepto que en stack y queue).

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a = {10, 15, 20, 30, 40, 50};

    // ---- erase por valor ----
    cout << "** Metodo Erase" << endl;
    a.erase(15); // {10, 20, 30, 40, 50}
    for (int n : a)
    {
        cout << n << endl;
    }

    // ---- erase por iterador (combinado con upper_bound) ----
    // upper_bound(25) -> primer valor > 25 -> 30.
    // erase de ese iterador elimina el 30.
    cout << "** Borramos Upper 25" << endl;
    auto pos = a.upper_bound(25);
    a.erase(pos); // {10, 20, 40, 50}

    // Forma equivalente en una sola línea (comentada):
    // a.erase(a.upper_bound(25));

    for (int n : a)
    {
        cout << n << endl;
    }

    // ---- clear: vaciar todo el árbol ----
    a.clear();
    cout << "** Tras clear, size = " << a.size() << endl; // 0

    return 0;
}
