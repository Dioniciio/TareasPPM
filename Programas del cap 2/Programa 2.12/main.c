#include <stdio.h> //Biblioteca estandar de funciones
#include <math.h> //Incluye la biblioteca matematica estandar

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int T, P, N;  //Representa variable de tipo numero entero
printf("Ingrese los valores de T, P y N: "); //Imprime un texto
scanf("%d %d %d", &T, &P, &N); //Permite ingresar valores para las variables
if (P != 0) // Establece una condicion
{
    if (pow(T / P, N) == (pow(T, N) / pow(P, N))) // Establece una condicion
       printf("\nSe comprueba la igualdad"); //Imprime un texto
    else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
        printf("\nNo se comprueba la igualdad"); //Imprime un texto
}
else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior (Arriba y alineada con esta)
    printf("\nP tiene que ser diferente de cero"); //Imprime un texto
}
