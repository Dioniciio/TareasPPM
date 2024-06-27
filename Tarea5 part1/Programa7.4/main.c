#include <stdio.h> // Inclusi�n de la biblioteca est�ndar de entrada y salida
#include <stdlib.h> // Inclusi�n de la biblioteca est�ndar de utilidades

void main(void)
{
    char *cad0; // Declaraci�n de un puntero a char
    cad0 = "Argentina"; // Asignaci�n de la cadena "Argentina" al puntero cad0
    puts(cad0); // Imprime la cadena apuntada por cad0

    cad0 = "Brasil"; // Asignaci�n de la cadena "Brasil" al puntero cad0
    puts(cad0); // Imprime la cadena apuntada por cad0

    char *cad1; // Declaraci�n de un puntero a char
    gets(*cad1); // Error: lectura de una cadena en una direcci�n inv�lida
    gets(cad1); // Error: lectura de una cadena en una direcci�n inv�lida

    char *cad1 = ""; // Error: redeclaraci�n de cad1 y asignaci�n de una cadena vac�a
    gets(cad1); // Error: lectura de una cadena en una direcci�n inv�lida

    char cad1[]; // Error: declaraci�n de un arreglo sin tama�o

    char cad2[20] = "Mexico"; // Declaraci�n de un arreglo cad2 con tama�o 20 y asignaci�n de "Mexico"
    puts(cad2); // Imprime la cadena almacenada en cad2
    gets(cad2); // Lee una cadena de caracteres y la almacena en cad2
    puts(cad2); // Imprime la cadena almacenada en cad2
    cad2[10] = "Guatemala"; // Error: asignaci�n incorrecta de una cadena a un elemento del arreglo
}
