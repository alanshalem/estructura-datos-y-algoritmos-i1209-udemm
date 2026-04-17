// Cola de structs: combinamos queue con una estructura personalizada
// Cada elemento de la cola es una "Persona" con dni y edad
//
// Operaciones nuevas:
// back():  devuelve el ultimo elemento de la cola (al fondo)
// front(): devuelve el primer elemento de la cola (al frente)

#include <iostream>
#include <queue>
using namespace std;

struct strucPersona
{
    int dni;
    int edad;
};

int main()
{
    queue<strucPersona> colaPersonas; // creo una cola que guarda personas
    strucPersona p1;

    // Agrego la primera persona
    p1.edad = 10;
    p1.dni  = 10000000;
    colaPersonas.push(p1); // meto p1 al fondo de la cola

    // Reutilizo p1 para agregar la segunda persona
    p1.edad = 20;
    p1.dni  = 20000000;
    colaPersonas.push(p1);

    // Reutilizo p1 para agregar la tercera persona
    p1.edad = 30;
    p1.dni  = 30000000;
    // No hacemos push todavia, solo asignamos

    colaPersonas.pop(); // elimina la primera persona de la cola (la de edad 10)

    // back() devuelve el elemento que esta al FONDO de la cola (el ultimo que entro)
    cout << colaPersonas.back().dni << endl; // muestra 20000000

    return 0;
}
