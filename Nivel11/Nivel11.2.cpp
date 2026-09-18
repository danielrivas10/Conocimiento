/*

------------------Punteros y arreglos---------------------------

Un arreglo guarda sus elementos uno después del otro en memoria:
int numeros[3] = {10, 20, 30};

Podemos crear un puntero al primer elemento:
int* p = &numeros[0];

En esta segunda declaración, numeros se convierte en un puntero a su primer elemento. El arreglo y el puntero siguen siendo cosas distintas.
Así queda:
             numeros
          ┌────┬────┬────┐
          │ 10 │ 20 │ 30 │
          └────┴────┴────┘
             ▲
             p


std::cout << *p;  // Muestra 10.
std::cout << *(p + 1);  // Muestra 20.
std::cout << *(p + 2);  // Muestra 30.

La diferencia entre "*" y NO "*" es esta:

p          // Dirección del primer elemento:  0x1000.
p + 1      // Dirección del segundo elemento: 0x1004.
p + 2      // Dirección del tercer elemento:  0x1008.
*/
#include <iostream>
int main()
{

    int numeros[3] = {10, 50, 80};
    int *p = numeros;

    for (int i = 0; i < 3; i++)
    {
        std::cout << *(p + i) << std::endl;
    }

    for (int i = 0; i < 3; i++)
    {
        *(p + i) += 5;
    }
 std::cout <<"----------------------------------------------------------------------"<< std::endl;
 std::cout <<"Valores modificados"<< std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << *(p + i) << std::endl;
    }
 std::cout <<"----------------------------------------------------------------------"<< std::endl;
    std::cout << *(p + 1) << std:: endl;  // 55
    std::cout << *p + 1 << std:: endl;    // 16 //Porque lo que hace es leer el valor de la posición 0 y sumarle uno.












    return 0;
}