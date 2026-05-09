// ejercicio 4: ingresar numeros hasta ingresar 0, mostrando todos los
// numeros ingresados en orden ascendente cada vez que se ingresa un
// numero, usando arboles.
//
// ejemplo:
//   20 -> 20
//   35 -> 20, 35
//   10 -> 10, 20, 35
//   15 -> 10, 15, 20, 35
//   0  (corta, no se agrega)
//
// idea: el set (arbol binario de busqueda balanceado) mantiene siempre
// los elementos ordenados de menor a mayor y no permite duplicados.
// al recorrerlo con for-range salen en orden ascendente, asi que solo
// hace falta insertar y mostrar despues de cada ingreso.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> a; // arbol vacio

    // simulo el ingreso del usuario con un array que termina en 0
    int datos[] = {20, 35, 10, 15, 0};

    int i = 0;
    int n = datos[i]; // arranco con el primer numero del array

    while (n != 0)
    {
        a.insert(n); // el set lo ubica solito en la posicion correcta

        // muestro el estado del arbol despues de cada insercion
        for (int x : a)
        {
            cout << x << " ";
        }
        cout << endl;

        i++;
        n = datos[i]; // paso al siguiente numero del array
    }

    return 0;
}
