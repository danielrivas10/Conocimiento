
/*----------Función que recibe matrices-------------------*/
#include <iostream>

int matriz[3][3];


void mostrarMatriz(int matriz[][3], int filas)
{
    for (int fila = 0; fila < filas; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            std::cout << matriz[fila][columna] << "\t";
        }

        std::cout << std::endl;
    }
}

int main (){

mostrarMatriz(matriz, 3);









}