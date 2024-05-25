#include <stdio.h> //Biblioteca estandar de funciones
#include <math.h> //Incluye la biblioteca matematica estandar

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int NUM; //Representa variable de tipo numero entero
printf("Ingrese el numero: "); //Imprime un texto
scanf("%d", &NUM); //Permite ingresar un valor para la variable dada
if (NUM == 0) // Establece una condicion
    printf("\nNulo"); //Imprime un texto
else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
    if (pow (-1, NUM) > 0) // Establece una condicion
        printf("\nPar"); //Imprime un texto
    else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
        printf("\nImpar"); //Imprime un texto
