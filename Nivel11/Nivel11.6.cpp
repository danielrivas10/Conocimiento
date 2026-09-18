/*----------Memoria dinamica--------------------*/

/*

Con new, podemos crear un entero en memoria dinámica y 
recibir su dirección directamente:
int* p = new int(10);

Esta línea hace tres cosas:
1. Reserva memoria para un entero.
2. Inicializa ese entero con 10.
3. Guarda su dirección en p.

p ───► entero creado con new
        10

El entero no tiene un nombre como numero; accedemos a él mediante el puntero:
std::cout << *p; // 10
*p = 30;
std::cout << *p; // 30

La novedad es que debemos liberar esa memoria cuando terminemos de usarla:
delete p;
p = nullptr;
*/

#include <iostream>

void invertirArreglo(int* arreglo, int cantidad)
{
    // No hay nada que intercambiar con menos de dos elementos.
    if (cantidad < 2)
    {
        return;
    }


    int* inicio = arreglo; //Posición 0
    int* fin = arreglo + cantidad - 1; //Posición 0+5-1= 4.

    while (inicio < fin)
    {
        // Intercambiar los valores de los extremos.
        int temporal = *inicio; // 10=10
        *inicio = *fin; //a= 50
        *fin = temporal; //b=10

        // Acercar los punteros al centro.
        ++inicio;  // Lo que esto hace es aumentar en uno la posición de inicio. Es decir
        // 50 20 30 40 10 pasa a   50    20    30    40    10
        //                                  ▲         ▲
        //                               inicio     fin 
        //  Y sigue asi hasta que inicio sea mayor que fin.
        --fin;
    }
}
int main()
{
    int* p = new int(10);

    std::cout << "Valor inicial: " << *p << std::endl;

    *p = 25;

    std::cout << "Valor modificado: " << *p << std::endl;

    delete p; // con delete se libera la memoria porque lo que teniamos era un espacio ahi.
    p = nullptr;

/*

Ahora veamos para qué puede servir la memoria dinámica: crear un arreglo cuyo tamaño el usuario decide al ejecutar el programa.
Hasta ahora escribíamos un tamaño fijo:

int numeros[3];
Con new[], podemos pedir primero la cantidad:
int cantidad;

std::cout << "Cuantos numeros quieres guardar? ";
std::cin >> cantidad;

int* numeros = new int[cantidad];

new int[cantidad] reserva espacio para esa cantidad de enteros, 
y numeros guarda la dirección del primero. Los valores todavía 
no están inicializados; podemos llenarlos antes de leerlos.

arreglo       // Dirección del elemento en la posición 0.
*arreglo      // Su valor: 10.
arreglo + 1   // Dirección del elemento en la posición 1.
*(arreglo + 1) // Su valor: 20.


*/    

int cantidad;

    std::cout << "Cuantos numeros quieres guardar? ";

    if (!(std::cin >> cantidad) || cantidad <= 0)
    {
        std::cout << "Debes ingresar una cantidad positiva."
                  << std::endl;
        return 0;
    }

    int* numeros = new int[cantidad];

    // Guardar los valores.
    for (int i = 0; i < cantidad; i++)
    {
        numeros[i] = (i + 1) * 10;
    }

    // Mostrar los valores.
    for (int i = 0; i < cantidad; i++)
    {
        std::cout << numeros[i] << std::endl;
    }

    // Liberar el arreglo.
    delete[] numeros;
    numeros = nullptr;

std:: cout <<"----------------------------------------------" << std:: endl;

int numeros2[5] = {10, 20, 30, 40, 50};
int cantidad2 = 5; // Solo declara cantidad.

 std::cout << "Antes: ";

    for (int i = 0; i < cantidad2; i++)
    {
        std::cout << numeros2[i] << " "; //Solo muestra el array.
    }

    invertirArreglo(&numeros2[0], cantidad2); // Ahora arreglo apunta a la posición 0

    std::cout << "\nDespues: ";

    for (int i = 0; i < cantidad2; i++)
    {
        std::cout << numeros2[i] << " ";
    }

    std::cout << std::endl;

    return 0;



    return 0;
}

