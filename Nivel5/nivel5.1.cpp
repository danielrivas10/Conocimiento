//Ejemplo para demostrar como funciona un do while.



#include <iostream>
int main(){
int opcion;

do
{
    std::cout << "1. Saludar\n";
    std::cout << "2. Salir\n";

    std::cin >> opcion;

    if (opcion == 1)
    {
        std::cout << "Hola\n";
    }

}
while (opcion != 2);

}