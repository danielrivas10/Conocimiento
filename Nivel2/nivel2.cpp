/*

-¿Qué es una expresión?

Una expresión es una combinación de:
- valores;
- variables;
- operadores;
que produce un resultado.
Ejemplo: 5+3 = 8

- Operadores aritméticos
Los principales son:
+   suma
-   resta
*   multiplicación
/   división
%   módulo o residuo


- Operador %
Se obtiene el residuo de una división entera
Ejemplo: 10 % 3 = 1.

- Orden de jerarquia
1. ( )
2. * / %
3. + -

- = vs == 

x= 5 significa "asigna 5 a x"
x== 5 significa "¿x es igual a 5?"


- No es lo mismo x++; con ++x;
Ejemplo: 

int x = 5;
int y = x++; Primero se usa el valor viejo y=5 
y luego  se incrementa x=6.

int x = 5;
int y = ++x; Primero se incrementa luego se asigna.


- Conversiones de datos
Convierte los datos por un momento a double, pero
las variables siempre serán tipo int.
Ejemplo:

int a = 5;
int b = 2;

double resultado = static_cast<double>(a) / b;.

-





*/