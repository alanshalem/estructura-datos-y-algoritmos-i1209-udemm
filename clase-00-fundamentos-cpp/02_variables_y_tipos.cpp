// Variables: espacios en memoria donde guardamos datos
// Cada variable tiene un TIPO que define que clase de dato puede guardar

#include <iostream>
#include <string>     // necesario para usar el tipo string
using namespace std;

int main()
{
    // Tipos numericos enteros
    int edad = 20;              // numero entero (positivo o negativo)
    long poblacion = 45000000;  // entero mas grande

    // Tipos numericos con decimales
    float  precio  = 19.99;     // decimal de precision simple (6-7 digitos)
    double distancia = 3.14159; // decimal de mayor precision (15-16 digitos)

    // Texto y caracteres
    char  inicial = 'J';        // un solo caracter, se escribe con comillas simples
    string nombre = "Juan";     // cadena de texto, se escribe con comillas dobles

    // Valores verdadero/falso
    bool aprobado = true;       // solo puede valer true (1) o false (0)

    // Imprimir los valores
    cout << "Edad: "      << edad      << endl;
    cout << "Nombre: "    << nombre    << endl;
    cout << "Inicial: "   << inicial   << endl;
    cout << "Precio: "    << precio    << endl;
    cout << "Aprobado: "  << aprobado  << endl; // imprime 1 (true) o 0 (false)

    return 0;
}
