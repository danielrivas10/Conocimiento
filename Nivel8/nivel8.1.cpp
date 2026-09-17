// ---------------------------True or False------------------------------

#include <iostream>
int sumarArreglo(int numeros[], int cantidad)
{
    int suma = 0;

    for (int i = 0; i < cantidad; i++)
    {
        suma += numeros[i];
    }

    return suma;
}
void mostrarNumeros(int numeros[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        std::cout << numeros[i] << std::endl;
    }
}
bool esPar(int numero)
{
    return numero % 2 == 0;
}

 int buscarMayor(int numeros[], int cantidad)
{
    int mayor = numeros[0];

    for (int i = 1; i < cantidad; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }

    return mayor;
}

int main (){
 int numeros[5] = {10, 20, 30, 40, 50};

if (esPar(8))
{
    std::cout << "Es par" << std:: endl;
}else{

std:: cout<<"No es par";
}


std:: cout<<"Sus numeros en el array son: " << std:: endl;
 mostrarNumeros(numeros, 5);


/*--------------Para sumar los datos del arreglo+función-------------------*/

int resultado = sumarArreglo(numeros, 5);

std:: cout <<"El resultado de la suma: " << resultado << std:: endl;
// Siempre con el mismo array.

/*------------------Para buscar el número mayor---------------------------*/

int mayor = buscarMayor(numeros, 5);

std::cout << "El numero mayor es: " << mayor;






    return 0; 
}