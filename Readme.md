# 🐾 Registro de Animales en C++

Programa sencillo de consola que permite **dar de alta** y **buscar** animales
usando una clase `Animal` y un `std::map` que relaciona el nombre con sus
características.

## 📋 Características

Cada `Animal` tiene 4 atributos:

| Atributo        | Tipo    | Descripción                       |
|-----------------|---------|-----------------------------------|
| `nombre`        | string  | Nombre del animal (clave del map) |
| `sonido`        | string  | Sonido que emite                  |
| `tipo`          | string  | Tipo (Mamífero, Ave, etc.)        |
| `numeroPatas`   | int     | Número de patas                   |

El programa incluye de forma estática 3 animales de ejemplo
(Perro, Gato y Paloma) y un menú que permite:

1. Dar de alta un nuevo animal.
2. Buscar un animal por nombre y mostrar sus características.
3. Mostrar todos los animales registrados.
4. Salir.

## 🧠 Tecnologías usadas

- **Lenguaje:** C++17
- **Contenedor:** `std::map<std::string, Animal>`
- **Compilador:** g++ (Linux/macOS) o MinGW (Windows)

## 📁 Estructura del proyecto

```
registro-animales/
├── Animal.h        # Declaración de la clase
├── Animal.cpp      # Implementación de la clase
├── main.cpp        # Menú y lógica principal
├── Makefile        # Compilación con make
├── CMakeLists.txt  # Compilación con CMake
├── .gitignore
└── README.md
```

## 🚀 Compilación y ejecución

### Opción 1 — Compilación directa con g++

```bash
g++ -std=c++17 -Wall -Wextra -o programa main.cpp Animal.cpp
./programa
```

### Opción 2 — Con Make

```bash
make
./programa
make clean     # para borrar los binarios
```

### Opción 3 — Con CMake

```bash
mkdir build && cd build
cmake ..
cmake --build .
./programa
```

## 💻 Ejemplo de uso

```
===== MENU =====
1. Dar de alta un animal
2. Buscar animal por nombre
3. Mostrar todos los animales
4. Salir
Seleccione una opcion: 2
Nombre a buscar: Gato

--- Caracteristicas ---
Nombre:            Gato
Sonido:            Miau
Tipo de animal:    Mamifero
Numero de patas:   4
```

## 👤 Autor

- **VonWernerGH** — [@VonWernerGH](https://github.com/VonWernerGH)

## 📄 Licencia

Este proyecto se distribuye bajo la licencia **MIT**.
