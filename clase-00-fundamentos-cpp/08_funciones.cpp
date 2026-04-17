// Funciones: bloques de codigo con nombre que podemos reutilizar
// Evitan repetir el mismo codigo y hacen el programa mas organizado
//
// Estructura:
//   tipo_retorno  nombre (parametros)
//   {
//       ...codigo...
//       return valor; // obligatorio si el tipo no es void
//   }
//
// void: la funcion no devuelve ningun valor

#include <iostream>
using namespace std;

// Funcion que saluda (no devuelve nada)
void saludar(string nombre)
{
    cout << "Hola, " << nombre << "!" << endl;
}

// Funcion que suma dos numeros y devuelve el resultado
int sumar(int a, int b)
{
    return a + b;
}

// Funcion que determina si un numero es par
bool esPar(int n)
{
    return n % 2 == 0; // devuelve true si el resto de dividir por 2 es 0
}

// Funcion que devuelve el mayor de dos numeros
int mayor(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    saludar("Juan");           // llamada a funcion void
    saludar("Maria");

    int resultado = sumar(5, 3);
    cout << "5 + 3 = " << resultado << endl; // 8

    cout << esPar(4) << endl;  // 1 (true)
    cout << esPar(7) << endl;  // 0 (false)

    cout << "Mayor entre 10 y 25: " << mayor(10, 25) << endl; // 25

    return 0;
}
