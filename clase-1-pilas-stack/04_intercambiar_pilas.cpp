// Intercambiar el contenido de dos pilas con swap()
// swap() sobreescribe el contenido de p1 con el de p2 y viceversa

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> p1; // creo la pila 1
    stack<int> p2; // creo la pila 2

    p1.push(18);
    p1.push(26); // el 26 queda arriba de p1

    p2.push(100); // el 100 queda arriba de p2

    p1.swap(p2); // intercambia todo el contenido: p1 pasa a tener lo de p2 y viceversa

    cout << "p1 = " << p1.top() << endl; // muestra 100 (lo que tenia p2)
    cout << "p2 = " << p2.top() << endl; // muestra 26  (lo que tenia p1)

    p2.pop(); // elimina el 26 que esta arriba de p2
    cout << p2.top() << endl; // muestra 18, que ahora quedo arriba de p2

    return 0;
}
