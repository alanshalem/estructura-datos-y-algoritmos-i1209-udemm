// Recorridos del árbol con iterador y advance().
//
// std::set entrega los elementos ORDENADOS de menor a mayor cuando se
// recorre desde begin() hasta end(). En la cursada llamamos a esto:
//
//   - "Pre orden"  -> recorrer de begin() hacia end() (ascendente).
//   - "Post orden" -> recorrer de end() hacia begin() (descendente).
//
// Nota: end() apunta a "una posición después del último", NO a un elemento
// válido. Por eso, para descender, primero hay que retroceder con advance(pos,-1)
// y RECIÉN AHÍ desreferenciar.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a = {20, 50, 30, 40, 10};
    a.insert(15); // {10, 15, 20, 30, 40, 50}

    auto pos = a.begin();

    // ---- Recorrido en post orden (descendente: 50, 40, 30, 20, 15, 10) ----
    pos = a.end();
    while (pos != a.begin())
    {
        advance(pos, -1);     // primero retrocedo (end no es elemento válido)
        cout << *pos << endl; // luego imprimo el valor apuntado
    }
    cout << "**" << endl;

    // ---- Recorrido en pre orden (ascendente: 10, 15, 20, 30, 40, 50) ----
    pos = a.begin();
    while (pos != a.end())
    {
        cout << *pos << endl;
        advance(pos, 1); // avanzo una posición
    }
    cout << "**" << endl;

    return 0;
}
