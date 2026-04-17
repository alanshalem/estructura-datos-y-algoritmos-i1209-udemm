// Ingresar numeros hasta ingresar 0 y luego mostrarlos en el orden ingresado
// Ejemplo: 10, 20, 30, 0 -> muestra 10, 20, 30
//
// A diferencia de la pila (stack), la cola (queue) mantiene el orden original
// porque es FIFO: el primero que entro es el primero que sale

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> C; // Se crea la cola
    int n;

    cin >> n;

    // Comienzo loop hasta que los valores n ingresados sean distintos de 0
    while (n != 0)
    {
        C.push(n); // ingresamos "n" elementos al fondo de la cola
        cin >> n;
    }

    // Recorro la cola hasta que este vacia
    while (!C.empty()) // equivalente a: while (C.size() != 0)
    {
        cout << C.front() << endl; // muestra el valor que esta delante en la cola
        C.pop();                   // elimina el elemento que esta delante de la cola
    }

    return 0;
}
