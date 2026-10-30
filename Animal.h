#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    std::string nombre;
    std::string sonido;
    std::string tipo;
    int numeroPatas;

public:
    // Constructores
    Animal();
    Animal(const std::string& nombre, const std::string& sonido,
           const std::string& tipo, int numeroPatas);

    // Getters
    std::string getNombre() const;
    std::string getSonido() const;
    std::string getTipo() const;
    int getNumeroPatas() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setSonido(const std::string& sonido);
    void setTipo(const std::string& tipo);
    void setNumeroPatas(int numeroPatas);

    // Utilidad
    void mostrarCaracteristicas() const;
};

#endif // ANIMAL_H