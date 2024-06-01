#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 =0; //Representa variable de tipo numero entero
    float CAL;
    printf("Ingresa la calificacion del alumno: "); //Imprime un texto
    scanf("%f", &CAL); //Permite asignar valores a las variables
    while (CAL != -1)
    {
        if (CAL < 4)
            R1++;
        else if (CAL < 6)
            R2++;
        else if (CAL < 8)
            R3++;
        else if (CAL < 9)
            R4++;
        else // Proporciona una alternativa para cuando no se cumple la condicion del if correspondiente
            R5++;
        printf("Ingresa la calificacion del alumno: "); //Imprime un texto
        scanf("%f", &CAL); //Permite asignar valores a las variables
    }
    printf("\n0..3.99 = %d", R1); //Imprime un texto que contiene variables
    printf("\n4..5.99 = %d", R2); //Imprime un texto que contiene variables
    printf("\n6..7.99 = %d", R3); //Imprime un texto que contiene variables
    printf("\n8..8.99 = %d", R4); //Imprime un texto que contiene variables
    printf("\n9..10 = %d", R5); //Imprime un texto que contiene variables
}
