// Ejercicio tipo parcial.
//
// Enunciado: ingresar números hasta que el usuario escriba 0. En cada paso
// mostrar la lista de forma que los IMPARES queden al principio y los PARES
// al final. El 0 NO se agrega (es el centinela que termina la lectura).
//
// Idea: aprovechar que std::list tiene push_front y push_back en O(1).
//   - n par     -> push_back  (al final, junto a los pares)
//   - n impar   -> push_front (al inicio, junto a los impares)
//
// Ejemplo de ejecución:
//   10 -> 10
//   15 -> 15 10
//   30 -> 15 10 30
//   7  -> 7 15 10 30
//   0  -> 7 15 10 30   (estado final)

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    int n;

    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            l.push_back(n);  // par: al final
        }
        else
        {
            l.push_front(n); // impar: al principio
        }

        // Mostrar el estado de la lista tras cada inserción
        for (int n : l)
        {
            cout << n << " ";
        }
        cout << endl;

        cin >> n;
    }

    // Estado final (también se imprime al recibir el 0)
    for (int n : l)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
