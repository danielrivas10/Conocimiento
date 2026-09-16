/*
Crea un programa en C++ que declare una matriz de 3x3, pida al usuario 
ingresar sus 9 valores, muestre la matriz ordenada en forma de tabla y luego 
calcule y muestre la suma total de todos sus elementos, la suma de cada fila, la 
suma de cada columna, los elementos de la diagonal principal y los elementos de 
la diagonal secundaria.
*/

#include <iostream>
int main (){

int matriz[3][3];


//Crear la matriz
for (int fila=0; fila<3; fila++){
for(int columna=0; columna<3; columna++){
std:: cout << "Ingresa valor para [" << fila << "][" << columna << "]" << std:: endl;
std:: cin >> matriz[fila][columna];
}
}

//Mostrar la matriz asignada
for (int fila=0; fila<3; fila++){
for(int columna=0; columna<3; columna++){

    std::cout <<"El valor de su matriz es de: " << matriz[fila][columna] << "\t";
    std::cout << std:: endl;
}
}

// La suma de la matriz
int suma=0;
for (int fila=0; fila<3; fila++){
for (int columna=0; columna<3; columna++){

suma= suma+ matriz[fila][columna];

}
}

std:: cout <<"La suma de su matriz es de: " << suma << std:: endl;


// Suma de fila
for(int fila=0; fila<3; fila++){
    int sumaFila=0; 
for (int columna=0; columna<3; columna++){
sumaFila= sumaFila+matriz[fila][columna]; // O sea que como fila se queda en cero, es como que se queda estancada.
//Entonces es columna quien hace los desplazamientos por fila, por eso es que se suma horizontalmente.
}

std:: cout <<"La suma de fila " << fila << ":" << sumaFila << std:: endl;
}


//Suma de columna
for (int columna=0; columna<3; columna++){
    int sumaColumna=0;


for (int fila=0; fila<3; fila++){
sumaColumna=sumaColumna+matriz[fila][columna];
}
std:: cout <<"La suma de columna " << columna << ":" << sumaColumna<< std:: endl;
}

//Elementos diagonal principal
std:: cout <<"Diagonal principal: ";
for (int i = 0; i < 3; i++)
{
    std::cout << matriz[i][i] <<" "; // Los valores de i se le asignan a la matriz.
}

std:: cout <<"Diagonal secundaria: ";
for (int i = 0; i < 3; i++)
{
    std::cout << matriz[i][2 - i]<<" "; //Lo que hace acá es que a la columna le resta
    // lo que se genera en el ciclo de i
}

    return 0;
}