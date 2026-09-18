/*---------------referencia a un puntero (int*&)------------*/

/*

Ahora tenemos:

int*& p
Una referencia a un puntero a entero: permite modificar el puntero original, por ejemplo, cambiar la dirección que guarda.
Mira este programa:
*/

#include <iostream>

void desconectar(int*& p)
{
    p = nullptr;
}


int otro = 80;

void cambiarDestino(int*& p)
{
    p = &otro;
}


int main()
{
    int numero = 10;
    int* ptr = &numero;

    desconectar(ptr);

    if (ptr == nullptr)
    {
        std::cout << "El puntero ahora es nulo." << std::endl;
    }

    std::cout << "numero sigue valiendo: " << numero << std::endl;
/*

int n     // Copia de un entero.
int& n    // Referencia al entero original.
int* p    // Copia de una dirección; permite acceder al dato apuntado.
int*& p   // Referencia al puntero original; permite cambiarlo.

se cambia a través de otro nombre para el mismo puntero, no mediante otro puntero independiente.
En esta función:
void desconectar(int*& p)
{
    p = nullptr;
}
Cuando llamamos:
desconectar(ptr);
p es una referencia a ptr. Durante esa llamada, ambos nombres 
representan el mismo puntero. Por eso p = nullptr cambia ptr.
*/

std:: cout <<"----------------------------------------------------"<< std:: endl;
  int numero = 10; 
    int* ptr = &numero; // O sea el puntero igual a 10.

    std::cout << "Antes: " << *ptr << std::endl; //10

    cambiarDestino(ptr); //Acá lo que hace gracias al & es que cambia el valor
    // de ptr a 80 porque es el mismo p

    std::cout << "Despues: " << *ptr << std::endl; //80
    std::cout << "numero: " << numero << std::endl; // 10

       //numero: 10

       //ptr ───► otro: 80



    return 0;
}


