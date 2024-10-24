#include "main2.h"
#include <iostream>
#include "Estudiante.h"
#include "Persona.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona1;
    persona1.setNombre("Michael");
    persona1.setEdad(19);
    persona1.setGenero("Masculino");
    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Genero: " << persona1.getGenero() << std::endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Michael");
    estudiante1.setEdad(19);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Ingenieria Informatica");
    estudiante1.mostrarDetalles();

    return 0;
}