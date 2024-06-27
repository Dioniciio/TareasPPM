#include <stdio.h> //Inclusion de biblioteca de funciones
#include <stdlib.h> //Inclusion de biblioteca de funciones

void main(void)
{
char *cad0 = "Buenos dias"; //declara una cadena de caracteres
char cad1[20] = "Hola"; //declara una cadena de caracteres
char cad2[] = "Mexico"; //declara una cadena de caracteres
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; //declara una cadena de caracteres
char cad4[20], cad5[20], cad6[20]; //declara varias cadenas de caracteres
printf("\nLa cadena cad0 es: "); //imprime texto en consola
puts(cad0); //imprime en consola el contenido de cad0
printf("\nLa cadena cad1 es: "); //imprime texto en consola
printf("%s", cad1); //imprime en consola el valor de una variable

printf("\nLa cadena cad2 es: "); //imprime texto en consola
puts(cad2); //imprime en consola el contenido de cad2
printf("\nLa cadena cad3 es: "); //imprime texto en consola
puts(cad3); //Imprime en consola el contenido de cad3

printf("\nIngrese una linea de texto: \n"); //imprime texto en consola
gets(cad4); //Lee el texto ingresado para cad4
printf("La cadena cad4 es: "); //imprime texto en consola
puts(cad4); //imprime en consola el contenido de cad0
fflush(stdin); //Limpia el bufer de entrada

printf("\nIngrese una linea de texto: \n"); //imprime texto en consola
scanf("%s", cad5); //Lee el texto ingresado para la cadena
printf("\nLa cadena cad5 es: "); //imprime texto en consola
printf("%s", cad5); //imprime en consola el valor de una variable
fflush(stdin); //Limpia el bufer de entrada
char p; //declara una variable tipo caracter
int i = 0; //declara una variable tipo entero de valor 0
printf("\nIngrese una linea de texto: \0"); //imprime texto en consola
while ((p = getchar())!= '\n') //verifica si el carácter leído no es un salto de línea, Si p no es, el bucle continúa
cad6[i++] = p;
cad6[i] = '\0'; //Después de que el bucle termina, el carácter nulo se agrega al final del array cad6 para indicar el final de la cadena
printf("\nLa cadena cad6 es: "); //imprime texto en consola
puts(cad6); //Imprime en consola cad6

}
