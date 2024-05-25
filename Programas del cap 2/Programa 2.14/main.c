#include <stdio.h> //Biblioteca estandar de funciones

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int CLA, TIE; //Representa variable de tipo numero entero
float COS; //Representa variables que pueden tener parte decimal
printf("Ingresa la clave y el tiempo: "); //Imprime un texto
scanf("%d %d", &CLA, &TIE); //Permite ingresar valores para las variables
switch(CLA) //Crea una estructura selectiva de varios casos segun el valor de las variables
{
    case 1: COS = TIE * 0.13 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 2: COS = TIE * 0.11 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 5: COS = TIE * 0.22 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 6: COS = TIE * 0.19 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 7: //En caso de que el valor del case coincida con el de la expresion se ejecuta el bloqque siguiente
    case 9: COS = TIE * 0.17 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 10: COS = TIE * 0.20 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 15: COS = TIE * 0.39 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 20: COS = TIE * 0.28 / 60; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    default : COS = -1; break; //Asigna un valor para la variable en caso de que ningun case anterior se ejecute y cierra la ejecucion de la estructura switch
}
if (COS != -1) // Establece una condicion
    printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS); //Imprime un texto que incluye el valor de las variables
else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
    printf("\nError en la clave"); //Imprime un texto
}
