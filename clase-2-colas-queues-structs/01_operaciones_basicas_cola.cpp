// Operaciones basicas de una cola (queue)
// Una cola es FIFO: el primero en entrar es el primero en salir (como una fila de personas)
//
// push:  agrega un elemento al FONDO de la cola
// pop:   elimina el elemento que esta al FRENTE de la cola
// front: devuelve el valor del elemento que esta al frente (sin eliminarlo)
// back:  devuelve el valor del elemento que esta al fondo (sin eliminarlo)
// size:  devuelve la cantidad de elementos en la cola
// empty: devuelve true si la cola esta vacia

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> C; // Se crea la cola

    // Cargo tres valores. El primero en entrar (10) sera el primero en salir
    C.push(10);
    C.push(20);
    C.push(30);

    cout << "Frente de la cola: " << C.front() << endl; // muestra 10
    cout << "Fondo de la cola:  " << C.back()  << endl; // muestra 30
    cout << "Cantidad de elementos: " << C.size() << endl; // muestra 3

    C.pop(); // elimina el 10 (el que estaba al frente)

    cout << "Despues de pop, frente: " << C.front() << endl; // ahora muestra 20

    return 0;
}
