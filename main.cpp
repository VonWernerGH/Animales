#include <iostream>
#include <map>
#include <string>
#include <limits>
#include "Animal.h"

// ---------------------------------------------------------
// Utilidades
// ---------------------------------------------------------
void limpiarBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void mostrarMenu() {
    std::cout << "\n===== MENU =====\n";
    std::cout << "1. Dar de alta un animal\n";
    std::cout << "2. Buscar animal por nombre\n";
    std::cout << "3. Mostrar todos los animales\n";
    std::cout << "4. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

// ---------------------------------------------------------
// Opciones del menu
// ---------------------------------------------------------
void agregarAnimal(std::map<std::string, Animal>& animales) {
    std::string nombre, sonido, tipo;
    int patas = 0;

    std::cout << "Nombre del animal: ";
    std::getline(std::cin, nombre);

    if (animales.find(nombre) != animales.end()) {
        std::cout << ">> Ya existe un animal con el nombre \"" << nombre << "\".\n";
        return;
    }

    std::cout << "Sonido que emite:  ";
    std::getline(std::cin, sonido);

    std::cout << "Tipo de animal:    ";
    std::getline(std::cin, tipo);

    std::cout << "Numero de patas:   ";
    while (!(std::cin >> patas)) {
        std::cout << ">> Entrada invalida. Ingrese un numero: ";
        limpiarBuffer();
    }
    limpiarBuffer();

    animales[nombre] = Animal(nombre, sonido, tipo, patas);
    std::cout << ">> Animal agregado correctamente.\n";
}

void buscarAnimal(const std::map<std::string, Animal>& animales) {
    std::string nombre;
    std::cout << "Nombre a buscar: ";
    std::getline(std::cin, nombre);

    auto it = animales.find(nombre);
    if (it == animales.end()) {
        std::cout << ">> No se encontro el animal \"" << nombre << "\".\n";
    } else {
        std::cout << "\n--- Caracteristicas ---\n";
        it->second.mostrarCaracteristicas();
    }
}

void mostrarTodos(const std::map<std::string, Animal>& animales) {
    if (animales.empty()) {
        std::cout << ">> No hay animales registrados.\n";
        return;
    }
    for (const auto& par : animales) {
        std::cout << "-------------------------\n";
        par.second.mostrarCaracteristicas();
    }
}

// ---------------------------------------------------------
// main
// ---------------------------------------------------------
int main() {
    // Mapa: clave = nombre del animal, valor = objeto Animal
    std::map<std::string, Animal> animales;

    // Carga estática de 3 animales iniciales
    animales["Perro"]  = Animal("Perro",  "Guau",   "Mamifero", 4);
    animales["Gato"]   = Animal("Gato",   "Miau",   "Mamifero", 4);
    animales["Paloma"] = Animal("Paloma", "Arrullo","Ave",      2);

    int opcion = 0;
    do {
        mostrarMenu();
        if (!(std::cin >> opcion)) {
            limpiarBuffer();
            std::cout << ">> Opcion invalida.\n";
            continue;
        }
        limpiarBuffer();

        switch (opcion) {
            case 1: agregarAnimal(animales); break;
            case 2: buscarAnimal(animales);  break;
            case 3: mostrarTodos(animales);  break;
            case 4: std::cout << ">> Saliendo...\n"; break;
            default: std::cout << ">> Opcion no valida.\n";
        }
    } while (opcion != 4);

    return 0;
}