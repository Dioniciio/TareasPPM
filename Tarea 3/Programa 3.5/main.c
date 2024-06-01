#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
float PAG, SPA = 0;
printf("Ingrese el primer pago:\t"); //Imprime un texto
scanf("%f", &PAG); //Permite asignar valores a las variables
do
{
    SPA = SPA + PAG;
    printf("Ingrese el siguiente pago /0 para terminar:\t "); //Imprime un texto
    scanf("%f", &PAG); //Permite asignar valores a las variables
}
while (PAG);
printf("\nEl total de pagos del mes es: %.2f", SPA); //Imprime un texto que contiene variables
}
