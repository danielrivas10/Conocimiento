/*
------------------Punteros y Funciones---------------------------

La idea es que una función pueda modificar una variable creada 
en main().

*/

#include <iostream>

void intercambiar(int* a, int* b)
{
    int temporal = *a; // Es decir 5=5
    *a = *b; // Es decir a=9
    *b = temporal; // Es decir b=5.
}

void aumentar2(int* p, int cantidad)
{
    *p += cantidad;
}



void aumentar1(int* p, int cantidad)
{
    *p += cantidad;
}

void aumentar(int* p) //Dice que la función void tendrá un puntero 
// que es un entero, el cual aumentará en 5.
{
    *p += 5; 
}

int main()
{
    int numero = 20;

    aumentar(&numero); //Acá lo que hace es llamar al puntero para darle la
    // dirección de memoria de numero. Después, como está lo de  *p += 5; 
    //Puede modificar el dato y es por eso que le aumenta en 5.

    std::cout << numero << std::endl;

/*
int numero = 20;

aumentar(&numero);  // Primera llamada: 20 + 5 = 25.
aumentar(&numero);  // Segunda llamada: 25 + 5 = 30.

std::cout << numero; // Muestra 30.
*/

 std:: cout <<"----------------------------------------------------------------------"<< std:: endl;


    int numero2 = 20;
    aumentar1(&numero2, 8); //Le asignas valor.
    std::cout << numero2 << std::endl; // 28



 std:: cout <<"----------------------------------------------------------------------"<< std:: endl;

int saldo = 100;

    std::cout << "Saldo inicial: " << saldo << std::endl;

    aumentar2(&saldo, 20);
    std::cout << "Primer aumento: " << saldo << std::endl; //Como está lo de cantidad en void, por eso en int se le agrega valor.

    aumentar2(&saldo, 10);
    std::cout << "Segundo aumento: " << saldo << std::endl;

 std:: cout <<"----------------------------------------------------------------------"<< std:: endl;

// Ahora podemos usar dos punteros en una función para intercambiar los valores de dos variables

int x = 5;
int y = 9;

 std::cout << "Antes: " << x << " y " << y << std::endl;

intercambiar(&x, &y);

std::cout << "Despues: " << x << " y " << y << std::endl;


/*

"a" apunta a x y "b" apunta a y. 
Dentro de la función ocurre esto:

Instrucción	                  Qué hace                      	    Valores

int temporal = *a;	          Guarda una copia del valor de x.      temporal = 5
*a = *b;	                  Copia el valor de y en x.	            x = 9, y = 9
*b = temporal;	G             Guarda el valor original de x en y.	x = 9, y = 5



*/

 std:: cout <<"----------------------------------------------------------------------"<< std:: endl;

/*
Crea un programa que pida un número entero y utilice una función para duplicar su valor mediante un puntero. 
Después, muestra el número modificado desde main().
*/



    return 0;
}