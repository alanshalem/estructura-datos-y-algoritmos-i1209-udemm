# Clase 2 - Colas (Queue) y Estructuras (Struct) en C++

Ejercicios de la materia **Estructuras de Datos y Algoritmos** - UdeMM.

## ¿Qué es una cola (queue)?

Una cola es una estructura de datos **FIFO** (First In, First Out): el **primer elemento en entrar es el primero en salir**, igual que una fila de personas en un banco.

```
ENTRADA      ┌─────┬─────┬─────┐      SALIDA
  push() →   │ 30  │ 20  │ 10  │  →  pop() / front()
             └─────┴─────┴─────┘
              back()          front()
```

## Operaciones de queue

| Operación | Descripción |
|-----------|-------------|
| `C.push(x)` | Agrega el elemento `x` al **fondo** de la cola |
| `C.pop()` | Elimina el elemento que está al **frente** |
| `C.front()` | Devuelve el valor del elemento al **frente** (sin eliminarlo) |
| `C.back()` | Devuelve el valor del elemento al **fondo** (sin eliminarlo) |
| `C.size()` | Devuelve la cantidad de elementos en la cola |
| `C.empty()` | Devuelve `true` si la cola está vacía |

## Stack vs Queue

| | Stack (Pila) | Queue (Cola) |
|---|---|---|
| Orden | LIFO (último en entrar, primero en salir) | FIFO (primero en entrar, primero en salir) |
| Ver elemento | `top()` | `front()` / `back()` |
| Header | `#include <stack>` | `#include <queue>` |

## ¿Qué es un struct?

Un `struct` permite crear un tipo de dato propio agrupando varios campos.

```cpp
struct strucPersona {
    int dni;
    int edad;
};

strucPersona p1;
p1.dni  = 30000000;
p1.edad = 30;
```

### Struct con constructor

El constructor es una función que se ejecuta automáticamente al crear el objeto. Permite inicializar los campos de forma directa.

```cpp
struct strucPersona {
    int dni;
    int edad;

    strucPersona(int e, int d) {   // constructor
        this->edad = e;
        this->dni  = d;
    }
};
```

### push() vs emplace()

| | `push()` | `emplace()` |
|---|---|---|
| Cómo funciona | Recibe un objeto ya creado | Construye el objeto dentro de la cola |
| Requiere constructor | No | Sí |
| Eficiencia | Copia el objeto | Más eficiente (no copia) |

```cpp
// Con push: creo primero, luego agrego
strucPersona p(10, 10000000);
cola.push(p);

// Con emplace: creo y agrego en un solo paso
cola.emplace(10, 10000000);
```

## Archivos

| Archivo | Descripción |
|---------|-------------|
| `01_operaciones_basicas_cola.cpp` | push, pop, front, back, size, empty |
| `02_ingresar_hasta_cero.cpp` | Leer hasta 0 y mostrar en orden original (FIFO) |
| `03_struct_basico.cpp` | Definir y usar un struct |
| `04_cola_de_structs.cpp` | Queue de structs con push y back |
| `05_struct_con_constructor.cpp` | Constructor en struct y uso de emplace |
| `06_emplace_vs_push.cpp` | Comparación entre push y emplace |

## Cómo compilar y ejecutar

### Linux / Mac

```bash
g++ nombre_del_archivo.cpp -o programa
./programa
```

### Windows

```powershell
g++ nombre_del_archivo.cpp -o programa.exe
.\programa.exe
```
