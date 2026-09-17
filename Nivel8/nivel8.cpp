/*-------------------------------Funciones----------------

-¿Qué es una función? 
Ayuda a poder realizar un trabajo más ordenado.

Ejemplo:
Esta es una función con retorno.

int sumar(int a, int b)
{
    return a + b;
}

Esta es una función void.

void mostrarMensaje()
{
    std::cout << "Hola";
}


-Diferencia de argumentos y parámetros.

Parámetro: variable que recibe (int a, int b)
Argumento: valor que enviamos (sumar(10,4))

-Reutilización. Es una de las grandes ventajas
de las funciones.

- Para las variables locales, supongamos que pones resultado
en la función void con retorno, pero como está dentro de la función
se le llama "alcance" || "scope".


-Prototipos.

Es como decirle al compilador:
Más adelante voy a crear una función llamada sumar,
recibe dos int y devuelve un int.

Ejemplo:

#include <iostream>

int sumar(int a, int b);

int main()
{
    int resultado = sumar(5, 3);
    std::cout << resultado;
    return 0;
}

int sumar(int a, int b)
{
    return a + b;
}

- Función que devuelve bool.
Ejemplo: 

bool esPar(int numero)
{
    return numero % 2 == 0;
}

esPar(8);
Entonces evalua en la función bool.
Después evalua si 0==0.

Entonces: 

if (esPar(8))
{
    std::cout << "Es par";
}.

-





















*/

