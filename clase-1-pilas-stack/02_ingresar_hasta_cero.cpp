// Ingresar numeros hasta ingresar 0, luego mostrar el elemento que quedo arriba

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> p; // creo la pila
    int n;

    cin >> n;

    // El loop sigue mientras el usuario no ingrese 0
    while (n != 0)
    {
        p.push(n); // metemos cada numero ingresado en la pila
        cin >> n;
    }

    // Al terminar, top() devuelve el ultimo numero ingresado (distinto de 0)
    cout << p.top() << endl;

    return 0;
}
