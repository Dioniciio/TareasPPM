#include <stdio.h> //Biblioteca estandar de funciones

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int MAT, CAR, SEM; //Representa variable de tipo numero entero
    float PRO; //Representa variables que pueden tener parte decimal
    printf("Ingrese matricula "); //Imprime un texto
    scanf("%d", &MAT); //Permite ingresar un valor para una de las variables
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-computacion 4-Mecanica) : " ); //Imprime un texto
    scanf("%d", &CAR); //Permite ingresar un valor para una de las variables
    printf("Ingrese semestre: "); //Imprime un texto
    scanf("%d", &SEM); //Permite ingresar un valor para una de las variables
    printf("Ingrese promedio: "); //Imprime un texto
    scanf("%f", &PRO); //Permite ingresar un valor para una de las variables
    switch(CAR) //Crea una estructura selectiva de varios casos segun el valor de las variables
    {
    case 1:  //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
        if (SEM >= 6 && PRO >= 8.5) //Establece una condicion
            printf("\n%d %d %5.2f", MAT, CAR, PRO); //Imprime un texto incluyendo las variables introducidas
        break; //Detiene la ejecucion de la estructura switch si se cumple el case
    case 2:  //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
        if (SEM >= 5 && PRO >= 9.0) //Establece una condicion
            printf("\n%d %d %5.2f", MAT, CAR, PRO); //Imprime un texto incluyendo las variables introducidas
        break; //Detiene la ejecucion de la estructura switch si se cumple el case
    case 3:  //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
        if (SEM >= 6 && PRO >= 8.8) //Establece una condicion
            printf("\n%d %d %5.2f", MAT, CAR, PRO); //Imprime un texto incluyendo las variables introducidas
        break; //Detiene la ejecucion de la estructura switch si se cumple el case
    case 4:  //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion
        if (SEM >= 7 && PRO >= 9.0) //Establece una condicion
            printf("\n%d %d %5.2f", MAT, CAR, PRO); //Imprime un texto incluyendo las variables introducidas
        break; //Detiene la ejecucion de la estructura switch si se cumple el case
    default: //Si no se ejecuta ninguno de los case anteriores se ejecutara el bloque siguiente
        printf("\n Error en la carrera"); //Imprime un texto
        break; //Detiene la ejecucion de la estructura switch
    }
}
