#include <stdio.h>  // Incluye la biblioteca de funciones basicas de entrada y salda en C

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    float PRO; // Representa la variable PRO, la cual sera un numero que puede tener parte decimal
    printf("Ingrese el promedio del alumno: "); // Imprimir un texto
    scanf("%f", &PRO); // Permite ingresar el valor de la varible PRO que puede contener parte decimal
    if (PRO >= 6) // Establece una condicion que de cumplirse ejecutara la linea que contiene
        printf("\nAprobado"); // Imprime un texto al cumplirse la condicion de arriba
}

