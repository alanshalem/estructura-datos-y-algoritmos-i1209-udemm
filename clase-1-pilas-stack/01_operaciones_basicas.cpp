// Operaciones basicas de una pila (stack)
// push: agrega un elemento arriba de la pila
// pop:  elimina el elemento que esta arriba
// top:  devuelve el valor del elemento que esta arriba (sin eliminarlo)
// size: devuelve la cantidad de elementos en la pila

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> p; // creo la pila
    int n;

    // Cargo tres valores en la pila
    p.push(10);
    p.push(20);
    p.push(30); // este queda arriba porque fue el ultimo en entrar

    // La pila sigue el principio LIFO: el ultimo en entrar es el primero en salir

    cout << "Antes de pop " << p.size() << endl; // muestra cuantos elementos hay

    p.pop(); // elimina el 30 (el que estaba arriba)

    cout << "Despues de pop " << p.size() << endl; // ahora hay uno menos

    cout << p.top() << endl; // muestra el 20, que ahora esta arriba

    return 0;
}
