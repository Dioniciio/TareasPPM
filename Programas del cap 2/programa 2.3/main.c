#include <stdio.h> //Biblioteca estandar de funciones
#include <stdlib.h> // Biblioteca de utilidads generales.



void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    float PRO; //Representa una variable que puede tener parte decimal
    printf("Ingrese el promedio del alumno: "); // imprime un texto
    scanf("%f", &PRO); //Permite inmsertar un valor para la variable
    if (PRO >= 6.0) // Establece una condicion
        printf("\nAprobado"); // Imprime un texto al cumplir la condicion
    else // Ejecuta una accion cuando no se cumple la condicion establecida
        printf("\nReprobado"); // Imprime un texto
}
