/*
Tu programa puede:
1. Pedir 5 números y guardarlos en un arreglo.
2. Mostrar todos los números.
3. Mostrar los bytes totales con sizeof.
4. Mostrar cuántos elementos tiene el arreglo.
5. Recorrerlo con un range-based for.
6. Calcular suma y promedio.
7. Encontrar mayor y menor.
8. Contar pares e impares.
9. Pedir un número extra y buscarlo dentro del arreglo.
*/

#include <iostream>
int main()
{
    int totalbytes = 0, byteselementos = 0, totalelements = 0, buscar = 0;
    bool encontrado = false;
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {

        std::cout << "Por favor ingrese el numero" << i + 1 << ":" << std::endl;
        std::cin >> numeros[i];
    }

    std::cout << "Sus numeros seleccionados son: " << std::endl;
    for (int numeros : numeros)
    {

        std::cout << numeros << std::endl;
    }

    byteselementos = sizeof(numeros[0]);
    totalbytes = sizeof(numeros);
    totalelements = sizeof(numeros) / sizeof(numeros[0]);

    std::cout << "Su total de bytes es de: " << totalbytes << "." << std::endl;
    std::cout << "Las bytes por elemento son: " << byteselementos << "." << std::endl;
    std::cout << "Su total de elementos son: " << totalelements << "." << std::endl;

    int suma = 0; // Debe estar fuera sino le afecta el for.
    for (int i = 0; i < 5; i++)
    {

        suma = suma + numeros[i];
    }

    std::cout << "La suma de sus elementos es de " << suma << std::endl;
    double promedio = static_cast<double>(suma) / 5;
    std::cout << "El promedio es de: " << promedio << std::endl;

    int mayor = numeros[0];

    for (int i = 0; i < 5; i++)
    {
        if (mayor < numeros[i]) // Es como decir, ¿1<5?
        {

            mayor = numeros[i]; // Si es sí entonces mayor=5 y sigue hasta completar las vueltas.
        }
    }

    std::cout << "El numero mayor es :" << mayor << std::endl;

    int menor = numeros[0];
    for (int i = 0; i < 5; i++)
        if (menor > numeros[i])
        {

            menor = numeros[i];
        }

    std::cout << "El numero menor es :" << menor << std::endl;

    int pares = 0;
    int impares = 0;
    for (int i = 0; i < 5; i++)
    {

        if (numeros[i] % 2 == 0)
        {

            pares++;
        }
        else
        {

            impares++;
        }
    }

    std::cout << "Cantidad de pares :" << pares << std::endl;
    std::cout << "Cantidad de impares :" << impares << std::endl;

    std::cout << "Ingrese un numero para buscarlo :" << std::endl;
    std::cin >> buscar;
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] == buscar)
        {

            encontrado = true;
            break;
        }
    }

    if (encontrado)
    {

        std::cout << "El numero fue encontrado" << std::endl;
    }
    else
    {

        std::cout << "El numero no fue encontrado" << std::endl;
    }

    return 0;
}

