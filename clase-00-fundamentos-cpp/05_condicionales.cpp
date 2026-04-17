// Condicionales: permiten ejecutar distintas partes del codigo segun una condicion

#include <iostream>
using namespace std;

int main()
{
    int nota;
    cout << "Ingresa tu nota (0-10): ";
    cin >> nota;

    // --- if / else if / else ---
    // Se evaluan las condiciones de arriba hacia abajo
    // Cuando una es verdadera, se ejecuta ese bloque y se omiten los demas
    if (nota >= 7)
    {
        cout << "Aprobado" << endl;
    }
    else if (nota >= 4)
    {
        cout << "Regular" << endl;
    }
    else
    {
        cout << "Desaprobado" << endl;
    }

    // --- Operador ternario: version corta del if/else para un solo valor ---
    // condicion ? valor_si_true : valor_si_false
    string resultado = (nota >= 7) ? "Aprobado" : "No aprobado";
    cout << resultado << endl;

    // --- switch: util cuando comparamos una variable contra valores fijos ---
    int dia;
    cout << "Ingresa un numero de dia (1-7): ";
    cin >> dia;

    switch (dia)
    {
        case 1: cout << "Lunes"    << endl; break;
        case 2: cout << "Martes"   << endl; break;
        case 3: cout << "Miercoles"<< endl; break;
        case 4: cout << "Jueves"   << endl; break;
        case 5: cout << "Viernes"  << endl; break;
        case 6: cout << "Sabado"   << endl; break;
        case 7: cout << "Domingo"  << endl; break;
        default: cout << "Dia invalido" << endl; // se ejecuta si no coincide ninguno
    }

    return 0;
}
