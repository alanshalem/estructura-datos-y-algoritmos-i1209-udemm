// Operaciones básicas de std::list:
//   push_back / push_front  -> insertar al final / al inicio
//   front / back            -> consultar el primero / el último
//   pop_front / pop_back    -> eliminar el primero / el último
//   remove_if(predicado)    -> eliminar todos los que cumplen una condición
//
// remove_if recibe una lambda. Aquí la lambda devuelve true para los pares,
// por lo tanto los pares quedan eliminados de la lista.

#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;

    // Insertar: push_front pone al inicio, push_back pone al final
    // Resultado: l = {5, 10, 30, 40}
    l.push_back(10);
    l.push_front(5);
    l.push_back(30);
    l.push_back(40);

    cout << "l.front=" << l.front() << endl; // primer elemento (5)
    cout << "l.back=" << l.back() << endl;   // último elemento (40)

    cout << "muestro toda la lista" << endl;
    for(int n : l)
    {
        cout << n << endl;
    }

    // Quitar primero y último -> l = {10, 30}
    l.pop_front();
    l.pop_back();

    cout << "muestro la lista despues de eliminar el 1ero y el ultimo" << endl;
    for(int n : l)
    {
        cout << n << endl;
    }

    // Eliminar todos los pares usando una lambda como predicado
    l.remove_if([](int x) { return x % 2 == 0; });

    cout << "eliminar pares" << endl;

    for(int n : l)
    {
        cout << n << endl;
    }

    return 0;
}
