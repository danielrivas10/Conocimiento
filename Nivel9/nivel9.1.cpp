#include <iostream>

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Persona
{
    std::string nombre;
    int edad;
    Fecha nacimiento; // Struct dentro de otro
};



int main (){

Persona persona1;

    persona1.nombre = "Daniel";
    persona1.edad = 18;

    persona1.nacimiento.dia = 22;
    persona1.nacimiento.mes = 7;
    persona1.nacimiento.anio = 2008;

    std::cout << "Nombre: " << persona1.nombre << std::endl;
    std::cout << "Edad: " << persona1.edad << std::endl;

    std::cout << "Fecha de nacimiento: "
              << persona1.nacimiento.dia << "/"
              << persona1.nacimiento.mes << "/"
              << persona1.nacimiento.anio
              << std::endl;

    return 0;
}

