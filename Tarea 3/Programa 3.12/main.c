#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica
#include <math.h> //Incluye la biblioteca matematica estandar


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int NUM; //Representa variable de tipo numero entero
    printf("Ingresa el número para calcular la serie: "); //Imprime un texto
    scanf("%d", &NUM); //Permite asignar valores a las variables
    if (NUM > 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
    {
        printf("\nSerie de ULAM\n"); //Imprime un texto
        printf("%d \t", NUM); //Imprime un texto que contiene variables
        while (NUM != 1) //Crea un bucle con la condicion de que NUM no sea igual a 1
        {
            if (pow(-1, NUM) > 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
                NUM = NUM / 2; //num sera igual a la mitad de su valor
            else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
                NUM = NUM * 3 + 1; //Num sera igual a su valor mltiplicado por 3 y sumandole 1
            printf("%d \t", NUM); //Imprime un texto que contiene variables
        }
    }
    else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
        printf("\n NUM debe ser un entero positivo"); //Imprime un texto
}
