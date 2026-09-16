/*
Haz un programa que pida numero 1 y numero 2.
Muestre:
Suma
Resta
Multiplicación
División
Residuo
*/

#include <iostream>
int main()
{

    float numero1 = 0, numero2 = 0, resultado = 0;
    int opcion;
    bool resultadoValido = false;

    std::cout << "Por favor elija un numero" << std::endl;
    std::cin >> numero1;
    std::cout << "Por favor elija otro numero" << std::endl;
    std::cin >> numero2;

    std::cout << "Bienvenido a su calculadora favorita: " << std::endl;
    std::cout << "¿Cual es su opcion deseada?" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicacion" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Salir" << std::endl;
    std::cin >> opcion;

    switch (opcion)
    {

    case 1:
        resultado = numero1 + numero2;
        resultadoValido = true;
        std::cout << "Su resultado es de: " << resultado << std::endl;
        break;

    case 2:
        resultado = numero1 - numero2;
        resultadoValido = true;
        std::cout << "Su resultado es de: " << resultado << std::endl;
        break;

    case 3:
        resultado = numero1 * numero2;
        resultadoValido = true;
        std::cout << "Su resultado es de: " << resultado << std::endl;
        break;

    case 4:
        if (numero2 == 0)
        {

            std::cout << "Su resultado es invalido" << std::endl;
            resultadoValido = false;
            break;
        }
        else
        {
            resultado = numero1 / numero2;
            resultadoValido = true;
            std::cout << "Su resultado es de: " << resultado << std::endl;
            break;
        }

    case 5:
        std::cout << "Usted ha salido exitosamente" << std::endl;
        break;

    default:
        std::cout << "Ninguna opcion es valida" << std::endl;
    }

    if (resultadoValido) // Como no es valido nunca entra acá, por eso se usa el bool
    {
        if (resultado < 0)
        {

            std::cout << "Su resultado es negativo" << std::endl;
        }

        else if (resultado > 0)
        {

            std::cout << "Su resultado es positivo" << std::endl;
        }

        else

            std::cout << "Su resultado es cero" << std::endl;
    }
    return 0;
}