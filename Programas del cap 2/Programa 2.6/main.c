#include <stdio.h> //Biblioteca estandar de funciones
#include <stdlib.h> // Biblioteca de utilidads generales.

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
float SAL; //Representa variables que pueden tener parte decimal
int NIV; //Representa variable de tipo numero entero
printf("ingrese el nivel academico del profesor: "); //Imprime un texto
scanf("%d", &NIV); //Permite ingresar un valor para una de las variables dadas
printf("ingrese el salario: "); //Imprime un texto
scanf("%f", &SAL); //Permite ingresar un valor para una de las variables dadas
switch(NIV) //Crea una estructura selectiva de varios casos segun el valor de las variables
{
    case 1: SAL = SAL * 1.035; break; //Asignara un nuevo valor a SAL si el case coincide ne valor con la expresion y cerrara el switch
    case 2: SAL = SAL * 1.041; break; //Asignara un nuevo valor a SAL si el case coincide ne valor con la expresion y cerrara el switch
    case 3: SAL = SAL * 1.048; break; //Asignara un nuevo valor a SAL si el case coincide ne valor con la expresion y cerrara el switch
    case 4: SAL = SAL * 1.053; break; //Asignara un nuevo valor a SAL si el case coincide ne valor con la expresion y cerrara el switch
}
printf("\n\nNivel: %d \tNuevo salario: %8.2f", NIV, SAL); //Imprime un texto con las variables NIV y SAL
}
