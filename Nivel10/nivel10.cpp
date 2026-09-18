/*-------------------------Memoria-----------------------------*/

/*
-¿Qué es la memoria?
Cuando haces int x=10;
x vale 10. Pero en realidad también existe una dirección de memoria
donde está guardado ese 10.

Conceptualmente:
Dirección     Valor
0x1000        10

- ¿Qué significa &x?
Significa: dame la dirección de memoria de x.

Ejemplo:

int x = 10;

std::cout << x << std::endl;
std::cout << &x << std::endl;

= 10
0x61ff08

*/


void cambiar(int x)
{
    x = 100;
}

#include <iostream>
int main (){

#include <iostream>
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Valor: "
                  << numeros[i]
                  << " Direccion: "
                  << &numeros[i]
                  << std::endl;
    }


/*

-Las variables locales suelen almacenarse en una región de memoria llamada stack.
stack = memoria usada habitualmente para variables locales y llamadas de funciones.

-Heap. Se usa para memoria dinamica.

-Dos variables pueden ser:

int a = 10;
int b = 10;

Pero su dirección de memoria es distinta.

-Copias

Si haces:
int a = 10;
int b = a;

Después b=20;

-La memoria contigua significa que varios datos están guardados
uno inmediatamente después del otro en la memoria, sin otros datos 
metidos entre ellos.

Elemento       Valor       Dirección
------------------------------------
numeros[0]      10         0x1000
numeros[1]      20         0x1004
numeros[2]      30         0x1008
numeros[3]      40         0x100C
numeros[4]      50         0x1010

┌──────┬──────┬──────┬──────┬──────┐
│  10  │  20  │  30  │  40  │  50  │
└──────┴──────┴──────┴──────┴──────┘
   [0]    [1]    [2]    [3]    [4]


*/



int numero = 144;

    cambiar(numero);

    std::cout << numero;




    return 0;
}