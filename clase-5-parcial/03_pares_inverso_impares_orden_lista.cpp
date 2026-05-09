// ejercicio 3: ingresar numeros hasta ingresar 0 y luego mostrar los
// numeros pares en orden inverso al ingresado y a continuacion los
// impares en el orden ingresado, usando listas.
//
// ejemplo: 10, 15, 20, 25, 30, 35, 0 -> 30, 20, 10, 15, 25, 35
//
// idea: aprovechamos que la lista tiene push_front y push_back en o(1).
//   - si el numero es par   -> push_front (queda al principio,
//                              y como cada par nuevo se pone al frente,
//                              el orden de los pares termina invertido)
//   - si el numero es impar -> push_back  (queda al final,
//                              respetando el orden de ingreso)
//
// paso a paso con 10, 15, 20, 25, 30, 35:
//   10 (par)   push_front -> [10]
//   15 (impar) push_back  -> [10, 15]
//   20 (par)   push_front -> [20, 10, 15]
//   25 (impar) push_back  -> [20, 10, 15, 25]
//   30 (par)   push_front -> [30, 20, 10, 15, 25]
//   35 (impar) push_back  -> [30, 20, 10, 15, 25, 35]

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l; // lista donde voy a ir armando el resultado

    // simulo el ingreso del usuario con un array que termina en 0
    int datos[] = {10, 15, 20, 25, 30, 35, 0};

    int i = 0;
    int n = datos[i]; // arranco con el primer numero del array

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            l.push_front(n); // par: lo mando al frente para invertir el orden
        }
        else
        {
            l.push_back(n);  // impar: lo mando al final para mantener el orden
        }
        i++;
        n = datos[i]; // paso al siguiente numero del array
    }

    // recorro la lista entera con for-range y muestro todo
    for (int x : l)
    {
        cout << x << endl;
    }

    return 0;
}
