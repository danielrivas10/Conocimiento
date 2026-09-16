/*

-------------- While, do while y for------------------

- ¿Qué significa iterar?
Cada repetición del ciclo se llama:
iteración.
Si un ciclo se repite 5 veces, tuvo 5 iteraciones.


-¿Qué es do while?
do while ejecuta el bloque al menos una vez.

Ejemplo:
int numero = 10;

do
{
    std::cout << numero << std::endl;
}
while (numero < 5);



- ¿Se puede usar break dentro del ciclo?
Si. Ejemplo:

for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        break;
    }

    std::cout << i << std::endl;
}

Resultado:
1
2
3
4


-¿Para que se usa continue dentro del ciclo for?
Se utiliza para igualar una iteración y asi saltarla.
Ejemplo:

for (int i = 1; i <= 5; i++)
{
    if (i == 3)
    {
        continue;
    }

    std::cout << i << std::endl;
}

Resultado: 
1
2
4

-Acumuladores. Son aquellos como "int suma".
-Contadores son aquellos que cuentan cuántas veces pasa algo.
Ejemplo:

int contador = 0;

for (int i = 1; i <= 10; i++)
{
    if (i % 2 == 0)
    {
        contador++;
    }
}

Resultado: 5 (numeros pares)

-Ciclos anidados. Son aquellos en los que puedes poner un ciclo dentro de otro,.
Ejemplo:

for (int fila = 1; fila <= 3; fila++)
{
    for (int columna = 1; columna <= 3; columna++)
    {
        std::cout << "*";
    }

    std::cout << std::endl;
}

Resultado: 

***
***
***




*/