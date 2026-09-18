/*----------------------Punteros-------------------------------*/

/*
- Un puntero es una variable que guarda una dirección de memoria.

Ejemplo:

int numero = 10;
int* puntero = &numero;

numero
┌──────┐
│  10  │
└──────┘
dirección: 0x1000

puntero
┌──────────┐
│ 0x1000   │
└──────────┘

Esto significa:
puntero es un puntero que puede apuntar a un int.

No significa que el puntero sea un entero normal.

int*= Puntero a un entero.}
puntero: Es el nombre de la variable.
&numero= Dirección de numero;

Creo un puntero a entero llamado puntero y
guardo dentro de él la dirección de numero.

- Diferencia de & y *.

"*" es igual a = ve a la dirección guardada en el puntero
y dame el valor que está allí.

Esto se llama desreferenciar el puntero.

p        // Dirección guardada en p: 0x1000.
&p       // Dirección del propio puntero: 0x2000.
*p       // Valor de numero: 10.

p y &p son cosas distintas: una es la dirección almacenada y
la otra es la ubicación del propio puntero.

p guarda la dirección; *p permite acceder al valor y modificarlo.
*/

#include <iostream>
int main()
{

    int x = 7;
    int y = 20;

    int *p = &x; // Apunta a x.
    p = &y;      // Ahora apunta a y.

    *p = 30; // Ahora modifica y.

    std::cout << *p << std::endl;

    return 0;


/*

-Ahora veamos qué ocurre cuando dos punteros apuntan a la misma variable.
int numero = 10;

int* p = &numero;
int* q = &numero;
Tanto p como q guardan la dirección de numero:

p ────► numero ◄──── q
           10

Si hacemos:
*p = 50;
Obtenemos:
std::cout << numero; // 50
std::cout << *p;     // 50
std::cout << *q;     // 50

*q también muestra 50 porque lee la misma variable 
que acabamos de modificar mediante p.

-También podemos crear esa relación copiando un puntero:

int numero = 10;
int* p = &numero;
int* q = p;

-Ahora bien, sus direcciones almacenadas son independientes. 
Si después cambiamos el destino de p:

int otro = 80;
p = &otro;

q sigue apuntando a numero:

p ────► otro
          80

q ────► numero
           10


*/


int a = 5;
int b = 9;

int* p = &a; //El puntero apunta a=5.
int* q = p; //El puntero q apunta al puntero p que es igual a 5.

*q = 20; //Ahora el puntero q cambia el valor de a que es igual a 20.
p = &b; //El puntero p accede a la dirección de memoria de b, siendo igual a 9.
*p = 30; // El puntero p ahora cambia su valor b=30.



}