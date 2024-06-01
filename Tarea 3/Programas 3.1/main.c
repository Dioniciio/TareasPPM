#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int I; //Representa variable de tipo numero entero
float SAL, NOM; //Ingresa variables de tipo real
NOM = 0; //da el valor de 0 a la variable nom
for (I=1; I<=15; I++) //Crea un bucle que se repetira mientras I sea menor o igual a 5 y sumara 1 con cada vuelta al valor de I
{
    printf("\Ingrese el salario del profesor%d:\t", I); //Imprime un texto
    scanf("%f", &SAL); //Permite asignar valores a las variables
    NOM = NOM + SAL; //Nom sera igual a su valor mas el valor de sal
}
    printf("\nEl total de la nomina es: %.2f", NOM); //Imprime un texto que contiene variables
}
