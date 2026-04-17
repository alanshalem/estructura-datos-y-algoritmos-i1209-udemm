// Constructor en un struct: funcion que se ejecuta automaticamente al crear el objeto
// Permite inicializar los campos de forma mas corta
//
// Sin constructor: creamos la variable y luego asignamos campo por campo
// Con constructor: pasamos los valores directamente al crear la variable
//
// "this->" es un puntero al objeto actual, sirve para distinguir
// los campos del struct de los parametros del constructor cuando tienen nombres similares

#include <iostream>
#include <queue>
using namespace std;

struct strucPersona
{
    int dni;
    int edad;

    // Constructor: define el orden de los datos al crear una persona
    // En este caso: primero edad, despues dni
    strucPersona(int e, int d)
    {
        this->dni  = d; // asigna el parametro "d" al campo "dni" del struct
        this->edad = e; // asigna el parametro "e" al campo "edad" del struct
    }
};

int main()
{
    queue<strucPersona> colaPersonas; // genero la cola

    // emplace() crea el objeto directamente dentro de la cola usando el constructor
    // Es mas eficiente que push() porque evita copiar el objeto
    // El orden de los argumentos sigue el orden definido en el constructor: (edad, dni)
    colaPersonas.emplace(10, 10000000); // persona con edad=10, dni=10000000
    colaPersonas.emplace(20, 20000000);
    colaPersonas.emplace(30, 30000000);

    // back() devuelve el ultimo elemento de la cola
    cout << colaPersonas.back().dni << endl; // muestra 30000000

    return 0;
}
