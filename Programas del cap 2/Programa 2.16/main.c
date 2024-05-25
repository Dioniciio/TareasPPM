#include <stdio.h> //Biblioteca estandar de funciones

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int CLA, CAT, ANT, RES; //Representa variable de tipo numero entero
printf("\nIngrese la clave, categria  antiguedad del trabajador:"); //Imprime un texto
scanf("%d %d %d", &CLA, &CAT, &ANT); //Permite ingresar valores para las variables
switch(CAT) //Crea una estructura selectiva de varios casos segun el valor de las variables
{
    case 3://en caso de que el valor de "case" coincida con el de la expresion se ejecutaria el siguiente bloque de codigo
    case 4: if (ANT >= 5) //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion (El bloque es una condicion)
                RES = 1; //Nuevo valor de Res si se cumple la condicion
            else //Presenta una ruta alternativa si no se cumple la condicion
                RES = 0; //Nuevo valor de Res si se cumple la condicion
            break; //Rompe el bucle de la estructura switch si el case anterior se ejecuta
    case 2: if (ANT >= 7) //Presenta un bloque de codigo que se ejecutara en caso de que el valor de "case" coincida con el de la expresion (El bloque es una condicion)
                RES = 1; //Nuevo valor de Res si se cumple la condicion
            else //Presenta una ruta alternativa si no se cumple la condicion
                RES = 0; //Nuevo valor de Res
            break; //Rompe el bucle de la estructura switch si el case anterior se ejecuta
    default: RES = 0; //Representa el valor de RES si ningun case coincide con la expresion
        break; //Rompe el bucle de la estructura switch si el case anterior se ejecuta
}
if (RES) // Establece una condicion
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA); //Imprime un texto que incluye el valor de la variable CLA
else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
    printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", CLA); //Imprime un texto que incluye el valor de la variable CLA
}
