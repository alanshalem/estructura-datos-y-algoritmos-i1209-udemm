// Un struct (estructura) permite agrupar distintos datos bajo un mismo nombre
// Es como crear un tipo de dato propio con multiples campos
//
// En este ejemplo creamos una "Persona" que tiene dni y edad

#include <iostream>
#include <queue>
using namespace std;

// Defino la estructura fuera del main (disponible en todo el programa)
struct strucPersona
{
    int dni;
    int edad;
};

int main()
{
    strucPersona p1, p2; // creo dos variables de tipo strucPersona

    p1.edad = 30;
    p1.dni  = 30000000;

    cout << p1.dni  << endl; // muestra 30000000

    p2 = p1; // copio todos los campos de p1 en p2

    cout << p2.edad << endl; // muestra 30 (copiado de p1)

    return 0;
}
