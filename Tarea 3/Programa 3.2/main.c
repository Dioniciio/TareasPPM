#include <stdio.h> //Indica que se usaran los comandos de la biblioteca basica

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int I, N, NUM, SUM; //Representa variable de tipo numero entero
SUM = 0; //Da a sum el vaor de 0
printf("Ingrese el numero de datos:\t"); //Imprime un texto
scanf("%d", &N); //Permite asignar valores a las variables
for (I=1; I<=N; I++) //Crea un bucle con la condicion de que I valga menos o lo mismo que la ariable N y con cada vuelta suma 1 al valor de I
{
    printf("Ingrese el dato numero %d:\t", I); //Imprime un texto con variable
    scanf("%d", &NUM); //Permite asignar valores a las variables
    if (NUM > 0) // Establece una condicion para ejecutar el siguiente bloque de codigo
        SUM = SUM + NUM; //sum sera igual a su valor mas el de num
}
printf("\nLa suma de los numeros positivos es: %d", SUM); //Imprime un texto que contiene variables
}
