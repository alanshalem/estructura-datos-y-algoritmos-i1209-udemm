// cout: muestra datos en pantalla (output)
// cin:  lee datos ingresados por el usuario desde el teclado (input)
// endl: salto de linea (equivale a "\n")

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int edad;
    string nombre;

    // Pedimos datos al usuario
    cout << "Ingresa tu nombre: ";
    cin >> nombre;               // lee una palabra (se detiene en el espacio)

    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Mostramos los datos ingresados
    cout << "Hola " << nombre << ", tenes " << edad << " anios." << endl;

    // Se pueden encadenar varios valores con <<
    cout << "El doble de tu edad es: " << edad * 2 << endl;

    return 0;
}
