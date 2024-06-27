#include <stdio.h> //Inclusion de biblioteca de funciones

int cuenta(char *);
void main(void)
{
int i; //declara variable entera
char cad[50]; //declara cadena de caracteres
printf("\nIngrese la cadena de caracteres: "); //imprime texto en consola
fgets(cad, sizeof(cad), stdin); //lee la cadena de caracteres ingresada con un espacio limitado
i = cuenta(cad); //le da a l variable i el valor que devuelve la funcion cuenta
printf("\nLongitud de la cadena: %d", i); //imprime texto en consola
}
int cuenta(char *cadena) /*prototipo de funcion*/

{
if (cadena[0] == '\0') //verifica si la posicion 0 de la cadena es el caracter '\0'
return 0; //la funcion devuelve 0
else //ruta alterna al no cumplirse la condicion
return (1 + cuenta (&cadena[1]));  // Retorna el número total contado recursivamente desde el segundo carácter de la cadena.
}
