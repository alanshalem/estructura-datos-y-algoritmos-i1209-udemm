// ejercicio 2: ingresar numeros hasta ingresar 0 y luego mostrar los
// numeros impares en el orden ingresado, usando colas.
//
// ejemplo: 10, 15, 20, 25, 30, 35, 0 -> 15, 25, 35
//
// idea: la cola es fifo (primero en entrar, primero en salir), asi que
// si metemos solo los impares y los sacamos con pop, salen en el mismo
// orden en el que los ingresamos. perfecto para lo que pide el enunciado.

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> c; // cola donde voy a meter solo los impares

    // simulo el ingreso del usuario con un array que termina en 0
    int datos[] = {10, 15, 20, 25, 30, 35, 0};

    int i = 0;
    int n = datos[i]; // arranco con el primer numero del array

    while (n != 0)
    {
        if (n % 2 != 0) // si el numero es impar...
        {
            c.push(n); // ...lo mando al fondo de la cola
        }
        i++;
        n = datos[i]; // paso al siguiente numero del array
    }

    // recorro la cola desde el frente: como es fifo, salen en orden ingresado
    while (!c.empty())
    {
        cout << c.front() << endl; // muestro el del frente
        c.pop();                   // y lo saco
    }

    return 0;
}
