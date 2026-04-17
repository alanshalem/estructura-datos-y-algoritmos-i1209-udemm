// Diferencia entre push() y emplace()
//
// push():   recibe un objeto ya creado y lo copia al final de la cola
// emplace(): construye el objeto directamente dentro de la cola (mas eficiente)
//
// Para usar emplace() el struct NECESITA tener un constructor definido
// Para usar push()   el struct NO necesita constructor (pero si necesitamos crear el objeto antes)

#include <iostream>
#include <queue>
using namespace std;

struct strucPersona
{
    int dni;
    int edad;

    strucPersona(int edad, int dni) // constructor: define orden (edad primero, dni segundo)
    {
        this->dni  = dni;
        this->edad = edad;
    }
};

int main()
{
    queue<strucPersona> colaPush;    // cola para ejemplo con push
    queue<strucPersona> colaEmplace; // cola para ejemplo con emplace

    // --- Forma con push: creo el objeto primero, luego lo meto en la cola ---
    strucPersona p1(10, 10000000); // llama al constructor: edad=10, dni=10000000
    colaPush.push(p1);             // copia p1 al final de la cola

    cout << "push - frente dni: " << colaPush.front().dni << endl; // 10000000

    // --- Forma con emplace: el objeto se crea directamente dentro de la cola ---
    colaEmplace.emplace(10, 10000000); // construye la persona dentro de la cola
    colaEmplace.emplace(20, 20000000);
    colaEmplace.emplace(30, 30000000);

    cout << "emplace - ultimo dni: " << colaEmplace.back().dni << endl; // 30000000

    return 0;
}
