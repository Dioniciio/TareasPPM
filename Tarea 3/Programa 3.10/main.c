#include <stdio.h>  //Indica que se usaran los comandos de la biblioteca basica
#include <math.h> //Incluye la biblioteca matematica estandar


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; //Representa variable de tipo numero entero
    printf("Ingrese el numero de datos que se van a procesar:\t"); //Imprime un texto
    scanf("%d", &N); //Permite asignar valores a las variables
    if (N > 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
    {
        for (I=1; I <= N; I++)
        {
            printf("\nIngrese el numero %d: ", I); //Imprime un texto que contiene variables
            scanf("%d", &NUM);
            if (NUM) // Establece una condicion para ejecutar el siguiente bloque de codigo
                if (pow(-1, NUM) > 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
                    SPA = SPA + NUM;
                else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
                {
                    SIM = SIM + NUM;
                    CIM++;
                }
        }
        printf("\nLa suma de los numeros pares es: %d", SPA); //Imprime un texto que contiene variables
        printf("\nEl promedio de los numero impares es: %d: ", I); //Imprime un texto que contiene variables
    }
    else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
        printf("\n El valor de N es incorrecto"); //Imprime un texto
}
