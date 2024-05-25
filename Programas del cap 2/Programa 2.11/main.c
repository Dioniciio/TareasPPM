#include <stdio.h> //Biblioteca estandar de funciones
#include <stdlib.h> // Biblioteca de utilidads generales.

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
int DIS, TIE; //Representa variable de tipo numero entero
float BIL; //Representa variables que pueden tener parte decimal
printf("Ingresse la distanmcia entre ciudades y el tiempo de estancia: "); //Imprime un texto
scanf("%d %d", &DIS, &TIE); //Permite ingresar valores para las variables
if ((DIS*2 > 500) && (TIE > 10)) // Establece una condicion
    BIL = DIS * 2 * 0.19 * 0.8; //Establece el valor de BIL usando el valor de DIS
else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
    BIL = DIS * 2 * 0.19;  //Establece el valor de BIL usando el valor de DIS
printf("\n\nCosto del billete: %7.2f", BIL); //Imprime un texto con el valor de BIL
}
