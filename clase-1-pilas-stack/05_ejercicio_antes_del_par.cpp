// Enunciado: ingresar numeros hasta ingresar 0 y luego mostrar los numeros
// que ingresaron ANTES que un numero PAR, en orden inverso al ingresado.
//
// Ejemplo: 10, 15, 20, 23, 25, 30, 40, 0
// Numeros antes de un par:
//   - antes del 10 (par): ninguno
//   - antes del 20 (par): 15
//   - antes del 30 (par): 25, 23
//   - antes del 40 (par): ninguno (30 es par, no se cuenta a si mismo)
// Resultado mostrado (en orden inverso): 30, 25, 15

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> p; // creo la pila
    int n, ant;   // n = numero actual, ant = numero anterior

    cin >> n;

    // Cargo todos los numeros en la pila hasta que el usuario ingrese 0
    while (n != 0)
    {
        p.push(n); // ingresamos "n" elementos
        cin >> n;
    }

    ant = p.top(); // guardo el primer elemento (el ultimo ingresado) como "anterior"
    p.pop();       // elimina el elemento que estaba arriba en la pila

    // Recorro la pila hasta que este vacia
    while (!p.empty()) // equivalente a: while (p.size() != 0)
    {
        if (ant % 2 == 0) // si el numero anterior era PAR...
        {
            cout << p.top() << endl; // ...muestro el numero que estaba ANTES que el par
        }
        ant = p.top(); // actualizo "ant" con el elemento actual
        p.pop();       // elimina el elemento que estaba arriba en la pila
    }

    return 0;
}
