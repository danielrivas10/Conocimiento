/*
Crea un programa en C++ que pida al usuario un nombre y lo salude
mediante una función void, luego pida dos números y muestre su suma
usando una función int sumar(int a, int b), después pida 5 números
y los guarde en un arreglo, los muestre con una función void
mostrarArreglo(int numeros[], int cantidad), calcule la suma total
con una función int sumarArreglo(int numeros[], int cantidad),
encuentre el número mayor con una función int buscarMayor(int numeros[], int cantidad),
use una función bool esPar(int numero) para determinar cuáles elementos del arreglo
son pares y contar cuántos hay, y finalmente pida los 9 valores de una matriz 3x3 y la
muestre ordenadamente usando una función void mostrarMatriz(int matriz[][3], int filas).
*/

#include <iostream>



void Saludar(std::string nombre){
std:: cout <<"Hola " << nombre << std:: endl;
}

int Suma(int a, int b){
return a+b;
}

void llenarArreglo(int numero[]){
for (int i=0; i<5; i++){

std:: cout <<"Por favor ingrese el numero " << i+1 << std:: endl; 
std:: cin>> numero[i];
}
}

void mostrarArreglo(int numero[], int cantidad){

std:: cout <<"Los numeros del arreglo son: " << std:: endl;
for (int i=0; i<cantidad; i++){

    
    std:: cout << numero[i] << std:: endl; 
}
}

int sumarArreglo(int numero[], int cantidad){

int suma=0;

for (int i=0; i<cantidad; i++){

suma= suma+ numero[i];

}
return suma;
}

int buscarMayor(int numero[], int cantidad){

int mayor= numero[0];

for( int i=0; i<cantidad; i++){

if (numero[i] > mayor){


    mayor= numero[i];
}
}

return mayor;
}

bool EsPar (int numero){


return numero % 2 ==0;


}

void MostrarMatriz(int matriz [][3],int filas ){


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

int a, b, numero[5], matriz [3][3];
std:: string nombre;

std:: cout <<"Ingrese su nombre: ";
std:: cin>> nombre;
Saludar(nombre);
std:: cout <<"-----------------------------------------------------------------" << std:: endl;
std:: cout <<"Por favor ingresa tu primer numero" << std:: endl;
std:: cin >> a;
std:: cout <<"Por favor ingresa tu segundo numero" << std:: endl;
std:: cin >> b;
int resolucion= Suma( a, b);
std:: cout <<"La suma es: " << resolucion << std:: endl;
std:: cout <<"-----------------------------------------------------------------" << std:: endl;
std:: cout <<"Por favor ingrese 5 numeros para llenar el arreglo" << std:: endl;
llenarArreglo(numero);
mostrarArreglo(numero, 5); 
std:: cout <<"-----------------------------------------------------------------" << std:: endl;
int resultado= sumarArreglo(numero, 5);
std:: cout <<"El resultado de la suma: " << resultado << std:: endl;
std:: cout <<"-----------------------------------------------------------------" << std:: endl;
int mayor= buscarMayor(numero,5);
std:: cout <<"El numero mayor es: " << mayor << std:: endl;
std:: cout <<"-----------------------------------------------------------------" << std:: endl;
int cantidadPares=0;

std:: cout <<"Numeros pares: ";

for(int i=0; i<5; i++){

if (EsPar(numero[i])){

std:: cout << numero[i] << " ";
cantidadPares++;
}
}

std:: cout << std:: endl;
std:: cout <<"Cantidad de pares: " <<cantidadPares << std:: endl;

std:: cout <<"-----------------------------------------------------------------" << std:: endl;

for (int fila = 0; fila < 3; fila++)
{
    for (int columna = 0; columna < 3; columna++)
    {
        std::cout << "Ingrese valor para ["
                  << fila << "]["
                  << columna << "]: ";

        std::cin >> matriz[fila][columna];
    }
}

MostrarMatriz(matriz, 3);



return 0;
}