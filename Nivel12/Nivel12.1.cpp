/*----------------- Paso por referencia--------------------*/

#include <iostream>
void duplicar(int& n) // 
{
    n = n * 2;
}

int main()
{
    int numero = 7;

    duplicar(numero);

    std::cout << numero << std::endl; // 14
   
/*
    
int& n significa que n es una referencia a un entero. 
En esta llamada, funciona como otro nombre para la variable 
original.
    
&numero  // En una expresión: obtiene la dirección de numero.
int& n   // En una declaración: declara una referencia.     
    
// Pasar por referencia permite que la función trabaje con la 
// variable original usando otro nombre.

/*
Nombre en main():       numero ──┐
                                ├──► un mismo entero: 10 (En este caso 14).
Nombre en la función:        n ──┘
*/

// El & en int& n le indica a C++: «Este parámetro debe referirse a la variable 
// que me envíen, en lugar de recibir una copia de su valor

    return 0;
}