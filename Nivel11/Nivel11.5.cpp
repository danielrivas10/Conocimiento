/*
------------------Puntero doble-------------------------
/*

-Ya conoces esto:
int numero = 10;
int* p = &numero;

p guarda la dirección de numero. Pero p también es una variable 
y tiene su propia dirección. 

Podemos guardarla en otro puntero:

int** pp = &p;

pp ──────► p ──────► numero
          10

Por eso podemos hacer:
std::cout << **pp; // Muestra 10.
También podemos modificar el entero:
**pp = 30;

std::cout << numero; // 30
std::cout << *p;     // 30
std::cout << **pp;   // 30

-Ahora veamos la diferencia entre *pp y **pp 
con este ejemplo:

int numero = 10;
int otro = 80;

int* p = &numero;
int** pp = &p;

Al principio:

pp ───► p ───► numero
        10

       otro
        80

Como pp apunta a p, *pp permite modificar el propio puntero p:
*pp = &otro;

Eso equivale a escribir:
p = &otro;

Ahora la cadena queda:
pp ───► p ───► otro
        80

       numero
        10
*/
#include <iostream>

int main()
{
    int numero = 10;
    int otro = 80;

    int* p = &numero;
    int** pp = &p;

    // pp apunta a p, y p apunta a numero.
    std::cout << "Valor mediante **pp: " << **pp << std::endl;

    // Modificar numero mediante el doble puntero.
    **pp = 50;

    std::cout << "numero ahora vale: " << numero << std::endl;

    // Cambiar p para que apunte a otro.
    *pp = &otro;

    std::cout << "Valor mediante **pp: " << **pp << std::endl;

    // Ahora el dato al final de la cadena es otro.
    **pp = 100;

    std::cout << "numero al final: " << numero << std::endl;
    std::cout << "otro al final: " << otro << std::endl;


/*
------------------Puntero triple-------------------------

Ahora el puntero triple es una extensión de la misma idea. Aparece en tu material, así que veámoslo brevemente:
int numero = 10;
int* p = &numero;
int** pp = &p;
int*** ppp = &pp;

ppp ───► pp ───► p ───► numero
            10


Expresión	    Qué obtenemos
*ppp	       El contenido de pp: la dirección de p.
**ppp	       El contenido de p: la dirección de numero.
***ppp	       El valor de numero: 10.

Por eso:
***ppp = 25;
*/

    int numero2 = 10;

    int* p2 = &numero2;
    int** pp2 = &p;
    int*** ppp = &pp;

    // Leer el mismo entero de distintas formas.
    std::cout << "numero: " << numero2 << std::endl;
    std::cout << "*p: " << *p2 << std::endl;
    std::cout << "**pp: " << **pp2 << std::endl;
    std::cout << "***ppp: " << ***ppp << std::endl;

    // Modificar numero mediante el triple puntero.
    ***ppp = 25;

    std::cout << "\nDespues del cambio:" << std::endl;
    std::cout << "numero: " << numero2 << std::endl;
    std::cout << "*p: " << *p2 << std::endl;
    std::cout << "**pp: " << **pp2 << std::endl;
    std::cout << "***ppp: " << ***ppp << std::endl;

    return 0;
}

    









