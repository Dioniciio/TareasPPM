#include <stdio.h> //Biblioteca estandar de funciones
#include <math.h> //Incluye la biblioteca matematica estandar

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
float RES; //Representa variables que pueden tener parte decimal
int R, T, Q; //Representa variable de tipo numero entero
printf("Ingrese los valores de R, T y Q: "); //Imprime un texto
scanf("%d %d %d", &R, &T, &Q); //Permite ingresar valores para las variables dadas
RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2); //Establece un valor para la variable RES a partir de los valores ingresados
if (RES < 820) // Establece una condicion
    printf("\nR = %d\tT = %d\t Q = %d", R, T, Q); //Imprime un texto con el valor de las variables

}
