#include <stdio.h> //Biblioteca estandar de funciones

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int I = 2, CAM = 1; //Representa variable de tipo numero entero
long SSE = 0;
while (I <= 2500)
{
    SSE = SSE + I;
    printf("\t %d", I); //Imprime un texto que contiene variables
    if (CAM) // Establece una condicion para ejecutar el siguiente bloque de codigo
    {
        I += 5;
        CAM --;
    }
    else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
    {
        I += 3;
        CAM++;
    }
}
printf("\nLa suma de la serie es: %ld", SSE); //Imprime un texto que contiene variables
}
