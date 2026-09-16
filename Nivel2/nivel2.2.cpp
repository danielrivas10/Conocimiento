/*
Pida un número y muestra:
El residuo al dividirlo entre dos.
*/


#include <iostream>
int main (){

 int numero; 

std::cout << "Hola, escribe un numero" << std::endl;
std:: cin >> numero;
int resultado= numero % 2;
std:: cout <<"Su residuo al dividirlo entre dos es de: " << resultado << std:: endl;  



    return 0;
}