// Operadores: simbolos que realizan operaciones sobre valores o variables

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;

    // --- Operadores aritmeticos ---
    cout << a + b  << endl; // suma:          13
    cout << a - b  << endl; // resta:          7
    cout << a * b  << endl; // multiplicacion: 30
    cout << a / b  << endl; // division entera: 3 (descarta el decimal)
    cout << a % b  << endl; // modulo (resto):  1 (10 dividido 3 da resto 1)

    // --- Operadores de comparacion (devuelven true o false) ---
    cout << (a == b) << endl; // igual a:          0 (false)
    cout << (a != b) << endl; // distinto de:      1 (true)
    cout << (a >  b) << endl; // mayor que:        1 (true)
    cout << (a <  b) << endl; // menor que:        0 (false)
    cout << (a >= b) << endl; // mayor o igual que: 1 (true)
    cout << (a <= b) << endl; // menor o igual que: 0 (false)

    // --- Operadores logicos (combinan condiciones) ---
    bool x = true, y = false;
    cout << (x && y) << endl; // AND: true solo si AMBOS son true  -> 0
    cout << (x || y) << endl; // OR:  true si AL MENOS UNO es true -> 1
    cout << (!x)     << endl; // NOT: invierte el valor             -> 0

    // --- Operadores de asignacion ---
    int c = 5;
    c += 3;  // equivale a: c = c + 3  -> c vale 8
    c -= 2;  // equivale a: c = c - 2  -> c vale 6
    c *= 2;  // equivale a: c = c * 2  -> c vale 12
    cout << c << endl; // 12

    // --- Incremento y decremento ---
    int d = 5;
    d++;     // equivale a: d = d + 1  -> d vale 6
    d--;     // equivale a: d = d - 1  -> d vale 5
    cout << d << endl; // 5

    return 0;
}
