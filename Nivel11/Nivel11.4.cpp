/*------------------Punteros y Structs. ---------------------------*/


/*

Ya conoces una estructura como esta:
struct Estudiante
{
    std::string nombre;
    int edad;
};

Y puedes crear un estudiante:
Estudiante alumno{"Ana", 20};

Para acceder a sus campos usas el punto:
std::cout << alumno.nombre; // Ana
std::cout << alumno.edad;   // 20

Ahora creamos un puntero que apunte al estudiante:
Estudiante* p = &alumno;

p ──────► alumno
          ├── nombre: "Ana"
          └── edad: 20

- ¿Cómo accedemos a un campo mediante el puntero?
Podemos escribir:

(*p).edad
Primero *p accede al estudiante y después .edad accede a su edad.

Pero existe una forma más cómoda: el operador ->.
p->edad
Estas dos expresiones significan lo mismo:
(*p).edad
p->edad




*/

#include <iostream>
#include <string>

struct Estudiante
{
    std::string nombre;
    int edad;
};

void cumplirAnios(Estudiante* p)
{
    p->edad += 1;
}

int main()
{
    Estudiante alumno{"Luis", 20};

    cumplirAnios(&alumno);

    std::cout << alumno.nombre << std::endl;
    std::cout << alumno.edad << std::endl;


/* 

Ahora veamos cómo pasar un estudiante a una función que solo necesita 
consultar sus datos.

Para eso podemos usar const:

void mostrarEstudiante(const Estudiante* p)
{
    std::cout << p->nombre << std::endl;
    std::cout << p->edad << std::endl;
}

const Estudiante* p significa que no podemos modificar al estudiante 
mediante ese puntero. Podemos leer sus campos, pero esto daría un error 
de compilación dentro de esa función:


p->edad = 30; // No está permitido mediante este p.










*/














    return 0;
}

