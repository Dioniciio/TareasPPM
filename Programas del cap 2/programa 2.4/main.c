#include <stdio.h> //Biblioteca estandar de funciones
#include <stdlib.h> // Biblioteca de utilidads generales.

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    float PRE, NPR; //Representa variables que pueden tener parte decimal
    printf("Ingrese el precio del producto: "); //Imprime un texto
    scanf("%f", &PRE); //Permite ingresar un valor para la variable dada
    if (PRE < 1500) // Establece una condicion
            NPR = PRE * 1.11; //Establece el valor NPR a partir del valor ingresado para PRE y la condicion establecida
    else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
        NPR = PRE * 1.08; //Establece el valor NPR a partir del valor ingresado para PRE y la condicion establecida
    printf("\nNuevo precio del producto: %8.2f", NPR); //Imprime un texto con el nuevo valor de la Variable NPR
}


