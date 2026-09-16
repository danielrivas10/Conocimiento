#include <iostream>
int main(){

    // Es para que uno forme la matriz.

int matriz[2][3];

for (int fila = 0; fila < 2; fila++)
{
    for (int columna = 0; columna < 3; columna++)
    {
        std::cout << "Ingrese valor para ["
                  << fila << "][" << columna << "]: ";

        std::cin >> matriz[fila][columna];
    }
}



}

