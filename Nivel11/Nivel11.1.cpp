/*

-Un puntero debe apuntar a un objeto válido antes de
usar * para acceder al dato.

int* p;
*p = 10;

¡Está mal!.

Declaramos p, pero no le asignamos una dirección válida.
La segunda línea intenta escribir en un lugar que no hemos 
establecido; eso produce comportamiento indefinido: el programa 
podría fallar o comportarse de manera impredecible.Si todavía no
tenemos una variable a la cual apuntar, podemos inicializarlo con nullptr:

int* p = nullptr;

Significa que, por ahora, p no apunta a ningún objeto. No podemos leer ni 
escribir mediante *p en ese estado.
*/

#include <iostream>

int main()
{
    int numero = 0;
    int* p = nullptr;

    // 1. Comprobar si el puntero no apunta a ningún objeto.
    if (p == nullptr)
    {
        std::cout << "El puntero no apunta a ningun objeto."
                  << std::endl;
    }

    // 2. Guardar la direccion de numero.
    p = &numero;

    // 3. Leer y modificar numero mediante el puntero.
    if (p != nullptr)
    {
        std::cout << "Valor antes: " << *p << std::endl;

        *p = 15;

        std::cout << "Valor despues: " << numero << std::endl;
    }

    // 4. Dejar el puntero sin apuntar a numero.
    p = nullptr;

    if (p == nullptr)
    {
        std::cout << "El puntero vuelve a ser nulo."
                  << std::endl;
    }

    // numero sigue existiendo y conserva su valor.
    std::cout << "Valor final de numero: " << numero << std::endl;

/*
p → no apunta a ningún objeto
numero → 15


int numero = 0;
int* p = &numero;

p no recibe el valor 0. Recibe la dirección de numero, porque escribimos &numero.
Supongamos que esa dirección es 0x1000:

p guarda:                 0x1000
En esa dirección está:    numero, que vale 0
Entonces:

Expresión	              Qué obtenemos
numero =>	                     0
   p   =>           La dirección de numero: 0x1000
  *p   =>            El valor que hay en esa dirección: 0
*/




    return 0;
}

