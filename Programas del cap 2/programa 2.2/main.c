#include <stdio.h> //Biblioteca estandar de funciones
#include <stdlib.h> // Biblioteca de utilidads generales


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    float PRE, NPR; // Representa 2 Varibles, numeros que pueden tener parte decimal
    printf("Ingrese el precio del producto: "); //Imprime un text
    scanf("%f", &PRE); // Permite ingresar un valor para una de las variables
    if (PRE < 1500) //Establece una condicion
    { // Llave que abre espacio donde iran las acciones que se ejecutaran de cumplir la condicion
    NPR = PRE * 1.11; //Nos da un valor para la segunda variable a partir de la primera
    printf("\nNuevo precio: %7.2f", NPR); //Imprime un texto con el valor obtenido de la segunda variable
    } // Cierra el espacio ejecutable de la condiccion
}
