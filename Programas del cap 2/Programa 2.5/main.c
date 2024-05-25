#include <stdio.h> //Biblioteca estandar de funciones
#include <math.h> //Incluye la biblioteca matematica estandar

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int OP, T; //Representa variable de tipo numero entero
float RES; //Representa variables que pueden tener parte decimal
printf("Ingrese la opcion del calculo y el valor entero: "); //Imprime un texto
scanf("%d %d", &OP, &T); //Permite ingresar valores para las variables dadas
switch(OP) //Crea una estructura selectiva de varios casos segun el valor de las variables
{
case 1: RES = T / 5; //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
  break; //Detiene la ejecucion de la estructura switch si se cumple el case
case 2: RES = pow (T,T); //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
case 3: //en caso de que el valor de "case" coincida con el de la expresion se ejecutaria el siguiente bloque de codigo
case 4: RES = 6 * T/2; //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
  break; //Detiene la ejecucion de la estructura switch si se cumple el case
default: RES = 1; //Asigna un valor a RES si no se cumple ningun case anterior
  break; //Detiene la ejecucion de la estructura switch
}
printf("\nResultado: %7.2f", RES); //Imprime un texto con el valor resultado de RES
}
