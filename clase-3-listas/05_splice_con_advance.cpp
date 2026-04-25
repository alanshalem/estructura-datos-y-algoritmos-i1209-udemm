// splice() combinado con advance() para insertar en una posición intermedia.
//
// advance(it, n) avanza el iterador 'it' n posiciones hacia adelante.
// Sirve para "navegar" la lista, ya que std::list NO permite acceso por
// índice (no tiene operator[]).

#include <iostream>
#include <list>

using namespace std;

int main ()
{
    // 1. Crear listas
    list<int> l1={10,50,30,20,40};
    list<int> l2={15,55,35,25,45};

    // 2. Ordenar:
    //    l1 = {10, 20, 30, 40, 50}
    //    l2 = {15, 25, 35, 45, 55}
    l1.sort();
    l2.sort();

    // 3. Posicionar el iterador
    auto pos=l1.begin(); // apunta al 10
    advance(pos, 2);     // avanza 2 lugares -> ahora apunta al 30

    // 4. Inserción quirúrgica: l2 se inserta JUSTO ANTES del 30
    //    Resultado: l1 = {10,20,15,25,35,45,55,30,40,50} ; l2 = {}
    l1.splice(pos, l2);

    // 5. Imprimir
    for (int n : l1 ) { cout << n << endl; }

    cout << "*" << endl;

    for (int n : l2 ) { cout << n << endl; } // l2 quedó vacía

    return 0;
}
