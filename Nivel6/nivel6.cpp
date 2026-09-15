/*

-------------------------------------------------------ARRAYS -------------------------------------------------------------------------------------------------------

- ¿Para que sirve un arreglo?

Un arreglo sirve para guardar varios valores del mismo tipo bajo un
mismo nombre.
Ejemplo:
int notas[5]; En los cuales tienes posición 0,1,2,3 y 4.

- Para asignar valores se puede:

int notas[5];          int notas[5] = {8, 10, 7, 9, 6};

notas[0] = 8;
notas[1] = 10;   ||
notas[2] = 7;
notas[3] = 9;
notas[4] = 6;

-Para acceder a un elemento seria:
int numeros[4] = {10, 20, 30, 40};
std::cout << numeros[2];
Resultado: 30.

-Puedes cambiar un elemento si ya haz declarado el array previamente.
numeros[1] = 99;
Antes: 10 20 30 40
Ahora: 10 99 30 40

-Se pueden combinar con for. Ejemplo:

int numeros[5] = {10, 20, 30, 40, 50};

for (int i = 0; i < 5; i++)
{
    std::cout << numeros[i] << std::endl;
}

Resultado:
10
20
30
40
50


-Se puede llenar un arreglo con cin.
Ejemplo:

int numeros[5];

for (int i = 0; i < 5; i++)
{
    std::cout << "Ingrese un numero: ";
    std::cin >> numeros[i];
}

Tú eliges los numeros del arreglo.El resultado serán
los mismos números que elijas. Para mostrarlos se hace otro for.

for (int i = 0; i < 5; i++)
{
    std::cout << numeros[i] << std::endl;
}


- Es posible sumar todos los elementos.
Ejemplo:

int numeros[5] = {1, 2, 3, 4, 5};
int suma = 0;

for (int i = 0; i < 5; i++)
{
    suma += numeros[i];
}

std::cout << suma;


-Para buscar el número mayor se realiza de esta manera:

int numeros[5] = {7, 2, 15, 4, 9};

int mayor = numeros[0]; // Para tomar uno como referencia

for (int i = 1; i < 5; i++)
{
    if (numeros[i] > mayor)
    {
        mayor = numeros[i];
    }
}

Resultado: mayor= 15;


- Para buscar un valor se hace de esta manera:
int numeros[5] = {4, 7, 10, 15, 20};
int buscar = 10;
bool encontrado = false;

for (int i = 0; i < 5; i++)
{
    if (numeros[i] == buscar)
    {
        encontrado = true;
        break;
    }
}

Significa que si el número está en el arreglo,
el ciclo for lo encuentra y bool se vuelve verdadero.


- ¿Qué es size of?

Sizeof sirve para saber cuántos bytes ocupa algo en memoria.
Normalmente un int ocupa 4 bytes en memoria.
Ejemplo:

#include <iostream>

int main()
{
    int numeros[5] = {10, 20, 30, 40, 50};

    int bytesTotales = sizeof(numeros);
    int bytesElemento = sizeof(numeros[0]);
    int cantidadElementos = sizeof(numeros) / sizeof(numeros[0]);

    std::cout << "Bytes totales del arreglo: "
              << bytesTotales << std::endl;

    std::cout << "Bytes de un elemento: "
              << bytesElemento << std::endl;

    std::cout << "Cantidad de elementos: "
              << cantidadElementos << std::endl;

    return 0;
}

Respuesta:

Bytes totales del arreglo: 20
Bytes de un elemento: 4
Cantidad de elementos: 5


-¿Qué es el range based for?
El range-based for es una forma más simple de recorrer todos los elementos de un arreglo o colección,
sin manejar índices manualmente
Ejemplo:

int numeros[5] = {10, 20, 30, 40, 50};

int suma = 0;

for (int numero : numeros) // Significa para cada número dentro de numeros, o sea, en cada
vuelta numero toma un valor diferente.
{
    suma += numero;
}

std::cout << suma;






























*/