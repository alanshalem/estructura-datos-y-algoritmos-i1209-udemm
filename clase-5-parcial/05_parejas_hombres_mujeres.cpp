// ejercicio 5: ingresar hombres en una cola hasta dni 0 y luego mujeres
// en una pila hasta dni 0. cada persona incluye dni y edad (usamos
// estructuras). despues crear parejas en una lista (tambien con
// estructuras): el primer hombre con la ultima mujer, y asi hasta que se
// acabe alguno de los dos. finalmente mostrar las parejas.
//
// ejemplo:
//   hombres: 40000001, 25, 40000002, 27, 40000003, 29, 0
//   mujeres: 39000002, 25, 39000001, 23, 0
//   ->
//   40000001, 25, 39000001, 23
//   40000002, 27, 39000002, 25
//   (queda 40000003 sin pareja porque se acabaron las mujeres)
//
// por que cola y pila?
//   - la cola (fifo) nos da el "primer hombre" con front()
//   - la pila (lifo) nos da la "ultima mujer" con top()
//   asi salen emparejados directo, sin tener que recorrer nada raro.

#include <iostream>
#include <queue>
#include <stack>
#include <list>
using namespace std;

// struct persona: agrupa dni y edad bajo un mismo tipo
struct strucPersona
{
    int dni;
    int edad;
};

// struct pareja: junta un hombre y una mujer en un solo dato
struct strucPareja
{
    strucPersona hombre;
    strucPersona mujer;
};

int main()
{
    queue<strucPersona> hombres; // cola de hombres (fifo)
    stack<strucPersona> mujeres; // pila de mujeres (lifo)
    list<strucPareja>   parejas; // lista donde vamos guardando las parejas

    // simulo los ingresos con arrays que terminan en dni 0
    // cada persona ocupa 2 lugares: dni y edad
    int datosHombres[] = {40000001, 25, 40000002, 27, 40000003, 29, 0};
    int datosMujeres[] = {39000002, 25, 39000001, 23, 0};

    // ---- cargar hombres en la cola ----
    int i = 0;
    while (datosHombres[i] != 0) // mientras no llegue al dni 0...
    {
        strucPersona p;                // creo la persona
        p.dni  = datosHombres[i];      // primer valor: dni
        p.edad = datosHombres[i + 1];  // segundo valor: edad
        hombres.push(p);               // la mando al fondo de la cola
        i += 2;                        // avanzo de a dos lugares (dni + edad)
    }

    // ---- cargar mujeres en la pila ----
    i = 0;
    while (datosMujeres[i] != 0)
    {
        strucPersona p;
        p.dni  = datosMujeres[i];
        p.edad = datosMujeres[i + 1];
        mujeres.push(p);               // la apilo
        i += 2;
    }

    // ---- armar parejas hasta que alguno de los dos se vacie ----
    while (!hombres.empty() && !mujeres.empty())
    {
        strucPareja par;
        par.hombre = hombres.front();  // primer hombre (el que entro primero)
        par.mujer  = mujeres.top();    // ultima mujer (la que entro ultima)
        parejas.push_back(par);        // agrego la pareja al final de la lista

        hombres.pop(); // saco al hombre de la cola
        mujeres.pop(); // saco a la mujer de la pila
    }

    // ---- mostrar todas las parejas ----
    for (strucPareja p : parejas)
    {
        cout << p.hombre.dni  << ", " << p.hombre.edad << ", "
             << p.mujer.dni   << ", " << p.mujer.edad  << endl;
    }

    return 0;
}
