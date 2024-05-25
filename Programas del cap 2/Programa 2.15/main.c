#include <stdio.h> //Biblioteca estandar de funciones

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int TRA, EDA, DIA; //Representa variable de tipo numero entero
float COS; //Representa variables que pueden tener parte decimal
printf("Ingrese tipo de tratamiento, edad y dias: "); //Imprime un texto
scanf("%d %d %d", &TRA, &EDA, &DIA); //Permite ingresar valores para las variables
switch(TRA) //Crea una estructura selectiva de varios casos segun el valor de las variables
{
    case 1: COS = DIA * 2800; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 2: COS = DIA * 1950;   break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 3: COS = DIA * 2500;   break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    case 4: COS = DIA * 1150; break; //Asigna un valor a la variable COS en caso de que el valor del case coincida con el de la expresion y cierra la ejecucion de la estructura switch
    default: COS = -1; break; //Presenta un valor para COS que se cumple si no se ejecutan los case anteriores y cierra la ejecucion de la estructura switch
}
if (COS != -1) // Establece una condicion con una parte que debe ser falsa para ejecutar el siguiente bloque de codigo
{
    if (EDA >= 60) // Establece una condicion
        COS = COS * 0.75; //Asigna un nuevo valor a la variable COS
    else  // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
        if (EDA <= 25) // Establece una condicion
            COS = COS * 0.85; //Asigna un nuevo valor a la variable COS
    printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS); //Imprime un texto con el valor de las variables
}
else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior (Arriba y alineada con esta)
    printf("\nLa clave del trataminto es incorrecta"); //Imprime un texto
}
