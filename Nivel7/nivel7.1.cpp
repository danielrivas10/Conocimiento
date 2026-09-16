#include <iostream>
int main (){

    //Ejemplo para que se vea ordenada la matriz

int matriz[2][3]=
{
{10,20,30},
{40,50,60}
};

for (int fila = 0; fila < 2; fila++)
{
    for (int columna = 0; columna < 3; columna++)
    {
        std::cout << matriz[fila][columna] << "\t"; // Gracias a tabulación, 
        // lo cual deja espacio entre los valores.
    }

    std::cout << std::endl; // Y gracias al salto de linea de fila 0 a fila 1.
}

/*------------------------Ejemplo de suma total------------------------------------------------------------------------------------*/


int suma = 0; // Esto es para sumar todos los elementos

for (int fila = 0; fila < 2; fila++)
{
    for (int columna = 0; columna < 3; columna++)
    {
        suma += matriz[fila][columna];
    }
}

std:: cout <<"La suma de sus elementos es de: " << suma << std:: endl;
  

/*-------------------------Ejemplo de suma por fila-------------------*/

for (int fila = 0; fila < 2; fila++)
{
    int sumaFila = 0;

    for (int columna = 0; columna < 3; columna++)
    {
        sumaFila += matriz[fila][columna];
    }

    std::cout << "Suma fila "
              << fila << ": "
              << sumaFila << std::endl;
}



/*-------------------------Ejemplo de suma por columna-------------------*/

for (int columna = 0; columna < 3; columna++)
{
    int sumaColumna = 0;

    for (int fila = 0; fila < 2; fila++)
    {
        sumaColumna += matriz[fila][columna];
    }

    std::cout << "Suma columna "
              << columna << ": "
              << sumaColumna << std::endl;
}

/*
-Una matriz es un arreglo de dos dimensiones.
Ejemplo:
int matriz [3][4]; 3 filas - 4 columnas

-¿Cómo acceder?
matriz[0][0]
matriz[0][1]
matriz[0][2]
matriz[0][3]
matriz[1][0]


-Se necesitan ciclos anidados porque uno controla las filas y
otro controla las columnas.

-¿Cómo funcionan?
Ejemplo:

for (int fila = 0; fila < 2; fila++)
{
    for (int columna = 0; columna < 3; columna++)
    {
        std::cout << matriz[fila][columna] << " ";
    }

    std::cout << std::endl;
}
Forma esta matriz:
int matriz[2][3] =
{
    {[0,0], [0,1], [0,2]},
    {[1,0], [1,1], [1,2]}
};


-Una matriz es cuadrada cuando tiene el mismo numero de filas y
columnas.
Ejemplo:
int matriz[3][3];
Entonces, en esa matriz la diagonal principal de
1 2 3
4 5 6
7 8 9

es: 1,5,9.
Entonces:
for (int i = 0; i < 3; i++)
{
    std::cout << matriz[i][i] << std::endl;
}

-La matriz diagonal secundaria es:
3,5,7.

for (int i = 0; i < 3; i++)
{
    std::cout << matriz[i][2 - i] << std::endl;
}

-La transpuesta de int matriz[2][2] hace que pase de:
1 2 3  =>                     1 4
4 5 6                         2 5
                              3 6
En codigo:

for (int columna = 0; columna < 3; columna++)
{
    for (int fila = 0; fila < 2; fila++)
    {
        std::cout << matriz[fila][columna] << " ";
    }

    std::cout << std::endl;
}
*/                            


return 0;
}
