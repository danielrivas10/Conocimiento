/*
Vamos a dividirlo en tres bloques:

1. Paso por valor: la función recibe una copia.
2. Paso por referencia (int&): el parámetro permite 
trabajar directamente con la variable original.
3. Referencia a un puntero (int*&): la función puede 
cambiar el puntero original.
*/


#include <iostream>

void cambiar(int copia)
{
    copia = 50;

    std::cout << "Dentro de la funcion: " << copia << std::endl;
}


// La función recibe una copia del valor de numero en su parámetro copia. 
// Son dos variables distintas:
// En main()        En cambiar()
// numero= 10    ──copia──►  copia = 10


int main()
{
    int numero = 10;

    cambiar(numero);

    std::cout << "En main: " << numero << std::endl;

    return 0;
}