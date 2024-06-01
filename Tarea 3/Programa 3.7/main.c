#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int I, N; //Representa variable de tipo numero entero
float LAN, SLA = 0;
do
{
printf("Ingrese el número de lanzamientos:\t"); //Imprime un texto
scanf("%d", &N); //Permite asignar valores a las variables
}
while (N < 1 || N > 11);

for (I=1; I<=N; I++)
{
printf("\nIngrese el lanzamiento %d: ", I); //Imprime un texto que contiene variables
scanf("%f", &LAN); //Permite asignar valores a las variables
SLA = SLA + LAN;
}
SLA = SLA / N;
printf("\nEl promedio de lanzamientos es: %.2f", SLA); //Imprime un texto que contiene variables
}
