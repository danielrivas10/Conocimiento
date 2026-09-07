/*
1. Pida el nombre de una persona.
2. Pida su edad.
3. Muestre:

Hola [nombre], tienes [edad] años.

*/

#include <iostream>
using namespace std;
int main (){

int edad;
string nombre; // Recordarme de agregarla como biblioteca

cout << "¡Hola! Por favor podrias ingresar tu nombre?" << endl;
cin >> nombre; // Hacer uso de getline
cout <<"¿Cual es tu edad?" << endl;
cin >> edad;
cout << "Tu nombre es: " << nombre << " y tienes: " << edad << endl;











    return 0;
}