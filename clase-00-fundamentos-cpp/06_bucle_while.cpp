// Bucles: repiten un bloque de codigo mientras se cumpla una condicion
//
// while:    verifica la condicion ANTES de ejecutar (puede no ejecutarse nunca)
// do-while: verifica la condicion DESPUES de ejecutar (se ejecuta al menos una vez)

#include <iostream>
using namespace std;

int main()
{
    // --- while ---
    // Cuenta del 1 al 5
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++; // si olvidamos esto, el loop nunca termina (loop infinito)
    }

    // --- Patron tipico de la materia: leer hasta ingresar 0 ---
    int n;
    int suma = 0;

    cin >> n;

    while (n != 0)
    {
        suma += n; // acumulamos la suma
        cin >> n;
    }

    cout << "Suma total: " << suma << endl;

    // --- do-while: se ejecuta al menos una vez ---
    // Util para validar entradas del usuario
    int numero;
    do
    {
        cout << "Ingresa un numero entre 1 y 10: ";
        cin >> numero;
    } while (numero < 1 || numero > 10); // repite si el numero esta fuera de rango

    cout << "Numero valido: " << numero << endl;

    return 0;
}
