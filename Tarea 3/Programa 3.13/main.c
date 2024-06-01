#include <stdio.h> //Biblioteca estandar de funciones

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int I, PRI = 0, SEG = 1, SIG; //Representa variable de tipo numero entero
    printf("\t %d \t %d", PRI, SEG); //Imprime un texto que contiene variables
    for (I = 3; I <= 50; I++) //Crea un bucle que se repite mientras se cumpla que I sea menor o igual a 50 y suma 1 a I con cada vuelta
    {
        SIG = PRI + SEG; //El valor de SIG sera igual a la suma de PRI y SEG
        PRI = SEG; //PRI sera igual a SEG
        SEG = SIG; //El valor de SEG sera igual al de SIG
        printf("\t %d", SIG); //Imprime un texto que contiene variables
    }
}
