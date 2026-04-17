// El bucle for es ideal cuando sabemos cuantas veces queremos repetir algo
// Tiene tres partes en una sola linea:
//   for (inicializacion ; condicion ; actualizacion)
//
// Equivale a un while pero mas compacto cuando hay un contador

#include <iostream>
using namespace std;

int main()
{
    // --- for basico: contar del 1 al 5 ---
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    // --- for al reves: contar de 5 a 1 ---
    for (int i = 5; i >= 1; i--)
    {
        cout << i << endl;
    }

    // --- for con saltos: contar de 2 en 2 ---
    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << endl; // imprime 0, 2, 4, 6, 8, 10
    }

    // --- for para sumar los primeros N numeros ---
    int n;
    cout << "Ingresa N: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }

    cout << "Suma de 1 a " << n << " = " << suma << endl;

    return 0;
}
