// lower_bound y upper_bound en std::set.
//
//   lower_bound(x) -> iterador al primer elemento que NO es menor que x
//                     (es decir, el primero >= x).
//   upper_bound(x) -> iterador al primer elemento ESTRICTAMENTE mayor que x.
//
// Si no hay ningún elemento que cumpla la condición, devuelven end().
// Sirven para buscar "el siguiente" valor en el árbol cuando x no está
// presente, o para acotar rangos.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a = {10, 15, 20, 30, 40, 50};

    auto pos = a.lower_bound(49);

    // lower_bound(49): el primer valor >= 49 es 50.
    if (pos != a.end())
    {
        cout << *pos << endl; // imprime 50
    }
    else
    {
        cout << "Es mayor al ultimo" << endl;
    }

    // Ejemplos comentados para experimentar:
    // cout << "Lower bound 30 = " << *a.lower_bound(30) << endl; // 30 (existe)
    // cout << "Lower bound 55 = ";                               // 55 > 50 -> end()
    // if (a.lower_bound(55) == a.end()) cout << "end()" << endl;

    // upper_bound(25): primer valor > 25 -> 30.
    cout << "Upper bound de 25 = " << *a.upper_bound(25) << endl;

    return 0;
}
