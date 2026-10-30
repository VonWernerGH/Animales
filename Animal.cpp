#include "Animal.h"
#include <iostream>

Animal::Animal()
    : nombre(""), sonido(""), tipo(""), numeroPatas(0) {}

Animal::Animal(const std::string& nombre, const std::string& sonido,
               const std::string& tipo, int numeroPatas)
    : nombre(nombre), sonido(sonido), tipo(tipo), numeroPatas(numeroPatas) {}

std::string Animal::getNombre() const     { return nombre; }
std::string Animal::getSonido() const     { return sonido; }
std::string Animal::getTipo() const       { return tipo; }
int         Animal::getNumeroPatas() const{ return numeroPatas; }

void Animal::setNombre(const std::string& n) { nombre = n; }
void Animal::setSonido(const std::string& s) { sonido = s; }
void Animal::setTipo(const std::string& t)   { tipo = t; }
void Animal::setNumeroPatas(int p)           { numeroPatas = p; }

void Animal::mostrarCaracteristicas() const {
    std::cout << "Nombre:            " << nombre       << "\n";
    std::cout << "Sonido:            " << sonido       << "\n";
    std::cout << "Tipo de animal:    " << tipo         << "\n";
    std::cout << "Numero de patas:   " << numeroPatas  << "\n";
}