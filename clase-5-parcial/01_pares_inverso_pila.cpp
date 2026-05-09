// ejercicio 1: ingresar numeros hasta ingresar 0 y luego mostrar los
// numeros pares en orden inverso al ingresado, usando pilas.
//
// ejemplo: 10, 15, 20, 25, 30, 35, 0 -> 30, 20, 10
//
// idea: como la pila es lifo (ultimo en entrar, primero en salir), si
// metemos solo los pares y despues los sacamos con pop, salen al reves
// del orden en el que los ingresamos. justo lo que pide el enunciado.

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> p; // pila donde voy a meter solo los pares

    // simulo el ingreso del usuario con un array que termina en 0
    int datos[] = {10, 15, 20, 25, 30, 35, 0};

    int i = 0;
    int n = datos[i]; // arranco con el primer numero del array

    // recorro hasta encontrar el 0 (mismo patron que el while con cin)
    while (n != 0)
    {
        if (n % 2 == 0) // si el numero es par...
        {
            p.push(n); // ...lo apilo
        }
        i++;
        n = datos[i]; // paso al siguiente numero del array
    }

    // saco todo de la pila: como es lifo, sale al reves del orden ingresado
    while (!p.empty())
    {
        cout << p.top() << endl; // muestro el de arriba
        p.pop();                 // y lo saco
    }

    return 0;
}
