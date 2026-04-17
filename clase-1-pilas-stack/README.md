# Clase 1 - Pilas (Stack) en C++

Ejercicios de la materia **Estructuras de Datos y Algoritmos** - UdeMM.

## ¿Qué es una pila (stack)?

Una pila es una estructura de datos **LIFO** (Last In, First Out): el **último elemento en entrar es el primero en salir**, igual que una pila de platos.

```
      ┌─────┐
      │  30 │  ← top() devuelve este, pop() elimina este
      ├─────┤
      │  20 │
      ├─────┤
      │  10 │
      └─────┘
```

## Operaciones principales

| Operación | Descripción |
|-----------|-------------|
| `p.push(x)` | Agrega el elemento `x` arriba de la pila |
| `p.pop()` | Elimina el elemento que está arriba |
| `p.top()` | Devuelve el valor del elemento de arriba (sin eliminarlo) |
| `p.size()` | Devuelve la cantidad de elementos en la pila |
| `p.empty()` | Devuelve `true` si la pila está vacía |
| `p1.swap(p2)` | Intercambia el contenido de dos pilas |

## Archivos

| Archivo | Descripción |
|---------|-------------|
| `01_operaciones_basicas.cpp` | push, pop, top y size |
| `02_ingresar_hasta_cero.cpp` | Leer números hasta ingresar 0, mostrar el tope |
| `03_mostrar_en_orden_inverso.cpp` | Ingresar hasta 0 y mostrar todo en orden inverso |
| `04_intercambiar_pilas.cpp` | Intercambiar dos pilas con `swap()` |
| `05_ejercicio_antes_del_par.cpp` | Mostrar los números que estaban antes de un número par |

## Cómo compilar y ejecutar

### En Linux / Mac (terminal)

```bash
# Compilar (genera el ejecutable llamado "programa")
g++ nombre_del_archivo.cpp -o programa

# Ejecutar
./programa
```

### En Windows (PowerShell o CMD)

```powershell
# Compilar
g++ nombre_del_archivo.cpp -o programa.exe

# Ejecutar
.\programa.exe
```

### Ejemplos concretos

```bash
# Ejemplo con el archivo 01
g++ 01_operaciones_basicas.cpp -o programa
./programa

# Ejemplo con el archivo 03 (requiere ingresar datos por teclado)
g++ 03_mostrar_en_orden_inverso.cpp -o programa
./programa
# Ingresar: 10 20 30 0
# Salida:   30
#           20
#           10
```

## Requisito: tener instalado g++

### Linux (Ubuntu/Debian)
```bash
sudo apt install g++
```

### Mac
```bash
xcode-select --install
```

### Windows
Instalar [MinGW](https://www.mingw-w64.org/) o usar el compilador que viene con VS Code + extensión C/C++.

## Header necesario para usar stack

```cpp
#include <stack>
```
