// Ejercicio tipo parcial.
//
// Enunciado: ingresar números hasta que el usuario escriba 0. En cada paso
// mostrar TODOS los números ingresados hasta el momento, ORDENADOS de menor
// a mayor. El 0 termina la lectura y no se agrega.
//
// Idea: usar std::set, que mantiene los elementos siempre ordenados y sin
// duplicados. La inserción es O(log n) y el recorrido con for-range visita
// los elementos en orden ascendente.
//
// Ejemplo de ejecución:
//   10 -> 10
//   15 -> 10 15
//   5  -> 5 10 15
//   12 -> 5 10 12 15
//   0  -> (corta)

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a;
    int n;

    cin >> n;
    while (n != 0)
    {
        a.insert(n); // se inserta en la posición que mantiene el orden

        // Mostrar el estado del árbol tras cada inserción
        for (int n : a)
        {
            cout << n << " ";
        }
        cout << endl;

        cin >> n;
    }

    return 0;
}
