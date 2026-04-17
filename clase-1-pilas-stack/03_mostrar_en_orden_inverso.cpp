// Ingresar numeros hasta ingresar 0 y luego mostrarlos en orden inverso al ingresado
// Ejemplo: si se ingresa 10 20 30 0, se muestra 30 20 10
// Esto ocurre naturalmente con una pila porque es LIFO (ultimo en entrar, primero en salir)

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> p; // creo la pila
    int n;

    cin >> n;

    // Cargo todos los numeros en la pila hasta que el usuario ingrese 0
    while (n != 0)
    {
        p.push(n); // ingresamos "n" elementos
        cin >> n;
    }

    // Recorro la pila hasta que este vacia
    while (!p.empty()) // equivalente a escribir: while (p.size() != 0)
    {
        cout << p.top() << endl; // muestra el valor que esta por encima en la pila
        p.pop();                 // elimina el elemento que estaba por encima en la pila
    }

    return 0;
}
