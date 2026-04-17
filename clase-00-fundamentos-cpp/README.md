# Clase 00 - Fundamentos de C++

Conceptos básicos de C++ necesarios antes de empezar con estructuras de datos.

## Archivos

| Archivo | Concepto |
|---------|----------|
| `01_estructura_del_programa.cpp` | `#include`, `main()`, `cout`, `return 0` |
| `02_variables_y_tipos.cpp` | `int`, `float`, `double`, `char`, `string`, `bool` |
| `03_entrada_salida.cpp` | `cout` para mostrar, `cin` para leer del teclado |
| `04_operadores.cpp` | Aritméticos, comparación, lógicos, asignación |
| `05_condicionales.cpp` | `if`, `else if`, `else`, operador ternario, `switch` |
| `06_bucle_while.cpp` | `while`, `do-while`, patrón "leer hasta 0" |
| `07_bucle_for.cpp` | `for`, contadores, sumas acumuladas |
| `08_funciones.cpp` | Definir y llamar funciones, `void`, parámetros, `return` |

## Resumen rápido

### Tipos de datos

```cpp
int    numero   = 42;
float  precio   = 9.99;
double pi       = 3.14159;
char   letra    = 'A';
string texto    = "Hola";
bool   activo   = true;
```

### Entrada y salida

```cpp
cout << "Ingresa un numero: ";   // muestra en pantalla
cin  >> numero;                   // lee del teclado
cout << "Ingresaste: " << numero << endl;
```

### Condicional

```cpp
if (nota >= 7)       { cout << "Aprobado"; }
else if (nota >= 4)  { cout << "Regular";  }
else                 { cout << "Reprobado"; }
```

### Bucle while (patrón común en la materia)

```cpp
cin >> n;
while (n != 0) {
    // procesar n
    cin >> n;
}
```

### Bucle for

```cpp
for (int i = 1; i <= 10; i++) {
    cout << i << endl;
}
```

### Función

```cpp
int sumar(int a, int b) {
    return a + b;
}
```

## Cómo compilar

```bash
g++ nombre_del_archivo.cpp -o programa
./programa
```
