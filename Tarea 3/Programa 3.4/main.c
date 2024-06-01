#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica
#include <math.h> //Incluye la biblioteca matematica estandar


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int NUM; //Representa variable de tipo numero entero
long CUA, SUC = 0;
printf("\nIngrese un numero entero distinto de 0 para terminar:\t"); //Imprime un texto
scanf("%d", &NUM); //Permite asignar valores a las variables
while (NUM)
{
CUA = pow (NUM, 2);
printf("%d al cubo es %ld", NUM, CUA); //Imprime un texto que contiene variables
SUC = SUC + CUA;
printf("\nIngrese un número entero -0 para terminar-:\t"); //Imprime un texto
scanf("%d", &NUM); //Permite asignar valores a las variables
}
printf("\nLa suma de los cuadrados es %ld", SUC); //Imprime un texto que contiene variables
}
