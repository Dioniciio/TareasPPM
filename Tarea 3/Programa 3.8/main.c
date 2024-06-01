#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int I, NUM; //Representa variable de tipo numero entero
long FAC;
printf("\nIngrese el numero: "); //Imprime un texto
scanf("%d", &NUM); //Permite asignar valores a las variables
if (NUM >= 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
{
    FAC = 1;
    for (I=1; I <= NUM; I++)
        FAC *= I;
    printf("\El factorial de %d es: %ld", NUM, FAC); //Imprime un texto que contiene variables
}
else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
    printf("\nError en el dato ingresado"); //Imprime un texto
}
