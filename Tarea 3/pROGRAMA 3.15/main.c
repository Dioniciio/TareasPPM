#include <stdio.h> //Indica que se usara la biblioteca de comandos basica
#include <math.h> //Incluye la biblioteca matematica estandar


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int I = 1, B = 0, C; //Representa variable de tipo numero entero
    double RES; //crea una variable de doble expresion, "res"
    RES = 4.0 / I; //Indica que res tendra el valor del cociente de 4 entre I
    C = 1; //Asigna valor de 0 a C
    while ((fabs (3.1415 - RES)) > 0.0005) //Crea un bucle que se repite con la condicion de que el valor absoludo de 3.1415 menos la variable "res" sera mayor a 0.0005
    {
        I += 2 ; //Indica que I sera igual a su valor mas 2
        if (B) // Establece una condicion para ejecutar el siguiente bloque de codigo
        {
            RES += (double) (4.0 / I); //la variable "res" sera igual a su valor mas el cociente de 4 entre la variable "i"
            B = 0; // B sera igual a 0
        }
        else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
        {
            RES -= (double) (4.0 / I); //la variable "res" sera igual a su valor  menos el cociente de 4 entre la variable "i"
            B = 1; //B sera igual a 1
        }
        C++; //Suma 1 a la variable c
    }
    printf("\nNumero de terminos:%d", C); //Imprime un texto que contiene variables
}
