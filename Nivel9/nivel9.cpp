//---------------------------------STRUCTS----------------------------------------------------------------------------------------

/*
-¿Para qué funciona? 
Es de ayuda para poder guardar información de una persona.
Ejemplo:

struct Persona
{
    std::string nombre;
    int edad;
    double altura;
};

Después se pueden crear datos de este tipo:
Persona persona 1; Ahora persona tiene los datos dentro.

-Para acceder a cada dato se le debe de colocar un ".", por ejemplo:

persona1.nombre = "Daniel";
persona1.edad = 18;
persona1.altura = 1.75;

Y para mostrarlo:

std::cout << persona1.nombre << std::endl;
std::cout << persona1.edad << std::endl;
std::cout << persona1.altura << std::endl;

-También se pueden pedir los datos al usuario.

Persona persona1;

std::cout << "Ingrese nombre: ";
std::cin >> persona1.nombre;

std::cout << "Ingrese edad: ";
std::cin >> persona1.edad;

std::cout << "Ingrese altura: ";
std::cin >> persona1.altura;

-Arreglo de struct.

Puedes hacer: Persona personas[3];
Ahora son tres personas.
personas [0];
personas [1];
personas [2];
*/

#include <iostream>
#include <string>

struct Persona{

std:: string nombre;
int edad;
double altura;
};


void mostrarPersona(Persona p)
{
    std::cout << p.nombre << std::endl;
    std::cout << p.edad << std::endl;
    std::cout << p.altura << std::endl;
}

void mostrarPersonas(Persona personas[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        std::cout << personas[i].nombre << std::endl;
        std::cout << personas[i].edad << std::endl;
        std::cout << personas[i].altura << std::endl;
    }
}


void mostrarPersonas(Persona personas[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        std::cout << personas[i].nombre << std::endl;
        std::cout << personas[i].edad << std::endl;
        std::cout << personas[i].altura << std::endl;
    }
}

int main(){

Persona personas[3];

for (int i = 0; i < 3; i++) //Esto es para llenar un struct.
{

    std::cout << "\nPersona " << i + 1 << std::endl;
    std::cout << "Nombre: ";
    std::cin >> personas[i].nombre;

    std::cout << "Edad: ";
    std::cin >> personas[i].edad;

    std::cout << "Altura: ";
    std::cin >> personas[i].altura;
}

std:: cout <<"-------------------------------------------------------------------------------" << std:: endl;

// Para mostrar los datos.
 for (int i = 0; i < 3; i++)
    {
        std::cout << "\nPersona " << i + 1 << std::endl;
        std::cout << "Nombre: " << personas[i].nombre << std::endl;
        std::cout << "Edad: " << personas[i].edad << std::endl;
        std::cout << "Altura: " << personas[i].altura << std::endl;
    }

std:: cout <<"-------------------------------------------------------------------------------" << std:: endl;

//Struct con funciones.

Persona persona1;

persona1.nombre = "Daniel";
persona1.edad = 18;
persona1.altura = 1.75;

mostrarPersona(persona1);

std:: cout<<"-------------------------------------------------------------" << std:: endl;

std:: cout << "Función que recibe un arreglo de struct" << std:: endl;

mostrarPersonas(personas, 3);

std:: cout<<"-------------------------------------------------------------" << std:: endl;

std:: cout << "Buscar dentro de un struct" << std:: endl;

int mayorEdad = personas[0].edad;

for (int i = 1; i < 3; i++)
{
    if (personas[i].edad > mayorEdad)
    {
        mayorEdad = personas[i].edad;
    }
}

std:: cout<<"-------------------------------------------------------------" << std:: endl;

std:: cout << "Guardar la posición del mayor" << std:: endl;

int posicionMayor = 0;

for (int i = 1; i < 3; i++)
{
    if (personas[i].edad > personas[posicionMayor].edad)
    {
        posicionMayor = i;
    }
}

std::cout << personas[posicionMayor].nombre;

std:: cout<<"-------------------------------------------------------------" << std:: endl;

std:: cout << " struct dentro de otro struct" << std:: endl;




return 0;


}


/*

-No siempre se debe de hacer:

Persona p;
p.nombre = "Daniel";
p.edad = 18;
p.altura = 1.75;

También se puede hacer asi:
Persona p = {"Daniel", 18, 1.75};

Pero el orden debe de coincidir con la definición:
struct Persona
{
    std::string nombre;
    int edad;
    double altura;
};




*/