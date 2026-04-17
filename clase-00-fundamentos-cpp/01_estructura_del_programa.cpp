// Todo programa en C++ tiene esta estructura minima:
//
// 1. #include: le dice al compilador que herramientas vamos a usar
// 2. using namespace std: evita tener que escribir "std::" antes de cout, cin, etc.
// 3. int main(): punto de entrada del programa, por aca empieza a ejecutarse
// 4. return 0: le dice al sistema operativo que el programa termino sin errores

#include <iostream>   // necesario para usar cout y cin
using namespace std;

int main()
{
    cout << "Hola mundo" << endl; // cout imprime en pantalla, endl hace un salto de linea

    return 0;
}
