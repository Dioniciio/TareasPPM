#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int I = 0; //Representa variable de tipo numero entero
float SAL, PRO, NOM = 0;
printf("Ingrese el salario del profesor:\t"); //Imprime un texto

scanf("%f", &SAL);
do
{
NOM = NOM + SAL;
I = I + 1;
printf("Ingrese el salario del profesor /0 para terminar- :\t"); //Imprime un texto
scanf("%f", &SAL); //Permite asignar valores a las variables
}
while (SAL);
PRO = NOM / I;
printf("\nNómina: %.2f \t Promedio de salarios: %.2f", NOM, PRO); //Imprime un texto que contiene variables
}
