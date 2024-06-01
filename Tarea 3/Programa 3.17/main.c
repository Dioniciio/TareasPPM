#include <stdio.h> // Indica la biblioteca de comandos que se utilizara



void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int I, J, NUM, SUM, C = 0; //Representa variable de tipo numero entero
    printf("\nIngrese el numero limite: "); //Imprime un texto
    scanf("%d", &NUM); //Permite asignar valores a las variables
    for (I = 1; I <= NUM; I++)//Crea un bucle con  la condicion logica de que mientras la variable "i" sea menor o igual a la variable "num", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
    {
        SUM = 0; //Da un valor de 0 a la variable SUM
        for (J = 1; J <= (I / 2); J++) //Crea un bucle con la condicion de que mientras la variable "j" sea menor o igual a la mitad de la variable "i", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "j"
            if ((I % J) == 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
                SUM += J; //Establece que SUM es igual a la suma de su valor mas el de I
        if (SUM == I) // Establece una condicion para ejecutar el siguiente bloque de codigo
        {
            printf("\n%d es un numero perfecto", I); //Imprime un texto que contiene variables
            C++; //Se le suma 1 a la variable C
        }
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C); //Imprime un texto que contiene variables
}
